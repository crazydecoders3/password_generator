#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	
	int no_of_ch,count,ra;
	char temp;
	char temppass[15];
	srand(time(NULL));
	printf("\nrandom password generator\n");
	printf("\nenter the no of character password you want\n");
	scanf("%d",&no_of_ch);
	temppass[0]=48+(rand()%9);
	temppass[1]=48+(rand()%9);//for numbers
	temppass[2]=65+(rand()%25);
	temppass[3]=65+(rand()%25);//for caps
	temppass[4]=33+(rand()%14);//for symbols
	for(count=5;count<no_of_ch;count++)
	{
		temppass[count]=97+(rand()%25);//for the rest of small characters
	}
	for(count=0;count<no_of_ch;count++){
		ra=rand()%(count+1);
		temp=temppass[count];
		temppass[count]=temppass[ra];
		temppass[ra]=temp;
	
	}
	printf("\nthe random password is\n");
	for(count=0;count<no_of_ch;count++){
		printf("%c",temppass[count]);
	}

}
