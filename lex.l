%{
#include <stdio.h>
#include <string.h>

// ... (your data structures and functions)

%}

DE "define"
IN "include"

operator [[<][=]|[>][=]|[=][=]|[!][=]|[>]|[<]|[\|][\|]|[&][&]|[\!]|[=]|[\^]|[\+][=]|[\-][=]|[\*][=]|[\/][=]|[\%][=]|[\+][\+]|[\-][\-]|[\+]|[\-]|[\*]|[\/]|[\%]|[&]|[\|]|[~]|[<][<]|[>][>]]

%%

\n { yylineno++; }

([#][" "]*({IN})[ ]*([<]?)([A-Za-z]+)[.]?([A-Za-z]*)([>]?))/["\n"|\/|" "|"\t"] {
    printf("%s \t- Preprocessor Directive\n", yytext);
}

([#][" "]*({DE})[" "]*([A-Za-z]+)(" ")*[0-9]+)/["\n"|\/|" "|"\t"] {
    printf("%s \t- Macro\n", yytext);
}

\/\/(.*) {
    printf("%s \t- Single-Line Comment\n", yytext);
}

\/\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+\/ {
    printf("%s \t- Multi-Line Comment\n", yytext);
}

[ \n\t] ; // Whitespace and newline

; {
    printf("%s \t- Semicolon Delimiter\n", yytext);
}

, {
    printf("%s \t- Comma Delimiter\n", yytext);
}

\{ {
    printf("%s \t- Opening Braces\n", yytext);
}

\} {
    printf("%s \t- Closing Braces\n", yytext);
}

\( {
    printf("%s \t- Opening Brackets\n", yytext);
}

\) {
    printf("%s \t- Closing Brackets\n", yytext);
}

\[ {
    printf("%s \t- Square Opening Brackets\n", yytext);
}

\] {
    printf("%s \t- Square Closing Brackets\n", yytext);
}

\: {
    printf("%s \t- Colon Delimiter\n", yytext);
}

\\ {
    printf("%s \t- Forward Slash\n", yytext);
}

\. {
    printf("%s \t- Dot Delimiter\n", yytext);
}

auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|goto|if|int|long|register|return|short|signed|sizeof|static|struct|switch|typedef|union|unsigned|void|volatile|while|main/[\(|" "|\{|;|:|"\n"|"\t"] {
    printf("%s \t- Keyword\n", yytext);
    insertST(yytext, "Keyword");
}

\"[^\n]*\"/[\(;|,|)] {
    printf("%s \t- String Constant\n", yytext);
    insertCT(yytext, "String Constant");
}

\'[A-Z|a-z]\'/[\(;|,|)] {
    printf("%s \t- Character Constant\n", yytext);
    insertCT(yytext, "Character Constant");
}

[a-z|A-Z]([a-z|A-Z]|[0-9])*/[\(;|,|)|<|>|=|\!|\||&|\+|\-|\*|\/|\%|~|] {
    printf("%s \t- Identifier\n", yytext);
    insertST(yytext, "Identifier");
}

[0-9]+/[\(;|,|)|<|>|=|\!|\||&|\+|\-|\*|\/|\%|~|] {
    printf("%s \t- Integer Constant\n", yytext);
    insertCT(yytext, "Integer Constant");
}

[0-9]*\.[0-9]+/[\(;|,|)|<|>|=|\!|\||&|\+|\-|\*|\/|\%|~|] {
    printf("%s \t- Floating Constant\n", yytext);
    insertCT(yytext, "Floating Constant");
}

{operator}/[a-z]|[0-9]|;|" "|[A-Z]|\(|\"|\'|\)|\n|\t {
    printf("%s \t- Operator\n", yytext);
}

. {
    printf("Error: Unrecognized Token at Line %d\n", yylineno);
    return 0;
}

%%

int main(int argc, char **argv) {
    printf("====================================================================\n");

    int i;
    for (i = 0; i < 1001; i++) {
        ST[i].length = 0;
        CT[i].length = 0;
    }

    if (argc < 2) {
        printf("Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    yyin = fopen(argv[1], "r");
    if (yyin == NULL) {
        perror("Error opening input file");
        return 1;
    }

    yylex();

    printf("\n\nSYMBOL TABLE\n\n");
    printST();
    printf("\n\nCONSTANT TABLE\n\n");
    printCT();

    fclose(yyin);
    return 0;
}

int yywrap() {
    return 1;
}
