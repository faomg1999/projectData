#include<stdio.h>
void line();
void inputchar();
void inputnum();
int main(){
	int num;
	line();
	printf("#               HI                #\n");
	printf("#       Welcome to program        #\n");
	line();
	printf("\n");
	line();
	printf("# Please select option            #\n");
	printf("# press 1 for input character     #\n");
	printf("# press 2 for input real number   #\n");
	line();
	printf("\n");
	while(num!=1&&num!=2){
	printf("so, what do you want? : "); 
	scanf("%d",&num);
	}
	if(num==1)
		inputchar();
	else{
		inputnum();
	}
}

void line(){
int i;
	for(i=1;i<=35;i++){
		printf("*");
	}
	printf("\n");
}

void inputchar(){
	printf("Hello");
}

void inputnum(){
	printf("Hi");
}
