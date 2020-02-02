#include<stdio.h>
#include<stdlib.h>
typedef struct nd{
	char c;
	struct nd *next;
	struct nd *prev;
}node;
node *top=NULL;
int count = 100;

void push(char ch){
	node *n = malloc(sizeof(node));
	n->next = top;
	top = n;
	n->c = ch;
	count++;	
}

char pop(){
	char ch;
	node *n;
	n = top;
	top = top->next;
	ch = n->c;
	free(n);
	count--;
	return ch;
}

char stacktop(){
	if(top!=NULL)
		return top->c;
}

void convert(char pt[]){
	node *temp,*op1,*op2;
	int i;
	for(i=0;pt[i]!='\0';i++)
	if(pt[i]>='a'&&pt[i]<='z'||pt[i]>='A'&&pt[i]<='Z'){
		temp = (node*)malloc(sizeof(node));
		temp->c=pt[i];
		temp->next=NULL;
		temp->prev=NULL;
		push(temp);
	}
	else if(pt[i]=='^'||pt[i]=='*'||pt[i]=='/'||pt[i]=='+'||pt[i]=='-'){
		op1 = pop();
		op2 = pop();
		temp = (node*)malloc(sizeof(node));
		temp->c=pt[i];
		temp->next=op1;
		temp->prev=op2;
		push(temp);
		printf("\n");
		getch();
	}
}

void output(node *temp){
	if(temp != NULL){
		output(temp->prev);
		printf("%c",temp->c);
		output(temp->next);
	}
}

void main(){
	char inp[100];
	printf("Enter postfix : ");
	scanf("%s",&inp);
	convert(inp);
	printf("infix is : ");
	output(pop());
}


