# c-compiler
Project for compiler design
# INSTRUCTIONS 

1. git clone https://github.com/shreyasudaya/c-compiler
2. cd c-compiler
3. flex lex.l
4. yacc parse.y -d
5. gcc lex.yy.c y.tab.c -w
6. ./a.out
