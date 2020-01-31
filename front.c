#include<stdio.h>
void line();
void intopost();
void posttoin();
void inputchar();
void inputnum();
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
	printf("infix to postfix, ready to be edited!");
}

void inputchar(){
	printf("postfix to infix with character input");
}

void inputnum(){
	printf("postfix to infix with number input");
}
