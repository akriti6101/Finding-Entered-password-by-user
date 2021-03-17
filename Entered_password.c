#include<stdio.h>
#include<string.h>
#include<conio.h>
#define ENTER 13
#define TAB 9
#define SPACE 32
#define BKSP 8
int main()
{

char c[100];char ch;
int i,l;
i=0;
printf("ENTER PASSWORD : ");
while(1)
{
	ch=getch();
	if(ch==ENTER)
	   {
	   	c[i]='\0';
	   	break;
	   }
	   else if(ch==TAB || ch==SPACE)
	       {
	       	   continue;
		   }
		   else if(ch==BKSP)
		   {
		   	i--;
		   }
		   else
		   {
		   	c[i]=ch;
		   	printf("*");
		   	i++;
		   }
}
l=strlen(c);
printf("\n\nENTERED PASSWORD : %s\n",c);
printf("PASSWORD LENGTH : %d",l);


	return 0;
}
