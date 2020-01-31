#include<stdio.h>
#include<stdlib.h>
void line();
void intopost();
void posttoin();
void inputchar();
void inputnum();
void initialize_stack();
void push(char);
char pop();
char stacktop();
int checkpr(char);
void checkoper(char);

typedef struct nd{
	char c;
	struct nd *next;
}node;
node *top = NULL;

void push(char x){
	node *n = malloc(sizeof(node));
	n->next = top;
	top = n;
	n->c = x;
}

char pop(){
	char p;
	node *n;
	n = top;
	top = top->next;
	p = n->c;
	free(n);
	return p;
}

char stacktop(){
	if(top == NULL)
		return NULL;
	else
		return top->c;
}

int checkpr(char temp){
	int pr;
	if(temp == '*'||temp=='/')
	pr=2;
	else
	pr=1;
	return pr;
}

void checkoper(char ck){
	if(stacktop()==NULL)
		push(ck);
	else{
		if(checkpr(ck)<=checkpr(stacktop()))
	while((checkpr(ck)<=checkpr(stacktop()))&&(stacktop()!=NULL))
	printf("%c ",pop());
	push(ck);
	}
}

int main(){
	int num;
	line();
	printf("*               HI                *\n");
	printf("*       Welcome to program        *\n");
	line();
	printf("\n");
	line();
	printf("* Please select option            *\n");
	printf("* press 1 for infix to postfix    *\n");
	printf("* press 2 for postfix to infix    *\n");
	line();
	printf("\n");
	while(num!=1&&num!=2){
	printf("what do you want? : "); 
	scanf("%d",&num);
	}
	printf("\n");
	if(num==1)
		intopost();
	else{
		posttoin();
	}
}

void line(){
int i;
	for(i=1;i<=35;i++){
		printf("*");
	}
	printf("\n");
}

void posttoin(){
	int num;
	line();
	printf("* ok, what do you want to input?  *\n");
	printf("* press 1 to input character      *\n");
	printf("* press 2 to input number         *\n");
	line();
	while(num!=1&&num!=2){
	printf("\n");
	printf("what do you want? : "); 
	scanf("%d",&num);
	}
	printf("\n");
	if(num==1)
		inputchar();
	else{
		inputnum();
	}	
}

void intopost(){
	char ch;
	while(ch != " "){
		scanf("%c",ch);
		if(isdigit(ch)||isalpha(ch))
			printf("%c ",ch);
		else
			checkoper(ch);
	}
	while(stacktop()!=NULL)
		printf("%c ",pop());	
}

void inputchar(){
	printf("postfix to infix with character input");
}

void inputnum(){
	printf("postfix to infix with number input");
}




