#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <limits.h>

#define TABLE_SIZE 100

struct entry{
	char* lexeme;
	int token_val;
	struct entry* successor;
};

typedef struct entry,entry_make

entry_make** create_table(){
	entry_make** hash_ptr=NULL;
	if((hash_ptr=malloc(sizeof(entry_make*)*TABLE_SIZE))==NULL)return NULL;
	int i;
	for(int i=0;i<TABLE_SIZE;i++){hash_ptr[i]==NULL;}
	return hash_ptr;
}

//hash generate

uint32_t hash(char *lexeme){
	size_t i;
	uint32_t hash=0;
	for(int i=0;i<strlen(lexeme);i++){
		hash+=lexeme[i];
		hash+=(hash<<10);
		hash^=(hash>>6);
	}
	hash+=(hash<<3);
	hash^=(hash>>11);
	hash+=(hash<<15);
	return hash%TABLE_SIZE;


}
//make entry for lexeme and token
entry_make *create(char * lexeme, int token_val){
	entry_make *newentry;
	if((newentry=malloc(sizeof(entry_make)))==NULL){return NULL;}
	if((newentry->lexeme=strdup(lexeme))==NULL){return NULL;}
	newentry->token_val=token_val;
	new_entry->successor=NULL;
	return new_entry;

}

//Search for entry

entry_make* search(entry_make** hash_ptr, char* lexeme){
	uint32_t idx=0;
	entry_make* search_entry;
	
	idx=hash(lexeme);
	
	search_entry=hash_ptr[idx];
	
	while(search_entry!=NULL && strcmp(lexeme, find->lexeme)!=0){find=find->successor;}
	if(search_entry==NULL)return NULL;//Not found
	else{return search_entry;}

}

//Insert into table

void insert(entry_make** hash_ptr,char* lexeme, int token_val){
	if(search(hash_ptr,lexeme)!=NULL)return;
	uint32_t idx;
	entry_make* newentry=NULL;
	entry_make* head=NULL;
	
	idx=hash(lexeme);
	newentry=create_entry(lexeme,token_val);
	if(newentry==NULL){printf("Insert failed");exit(1);}

	head=hash_ptr[idx];
	
	if(head==NULL){hash_ptr[idx]=newentry;}
	else{
		newentry->successor = hash_ptr[idx];
		hash_ptr[idx] = newentry;
	}


}

//print symbol table

void print_table(entry_make** hash_ptr){
	
	entry_make** iter;
	printf("\n===================================\n");
	printf("\t< token | lexeme >\n");
	printf("\n===================================\n");
	for(int =0;i<TABLE_SIZE;i++){
		iter=hash_ptr[i];
		while(iter!=NULL){
			printf("< %d | %s >\n",iter->token_val,iter->lexeme);
			iter=iter->succesor;
		}
	}
	printf("===================================\n");
}
