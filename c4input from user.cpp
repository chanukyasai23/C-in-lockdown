#include<stdio.h>

int main()
{
	int a,b;
	float fraction;
	char ch;
	char str[20];
	double dbl;
	printf("Enter two numbers ");
	scanf("%d %i",&a,&b);
	printf("%d %i",a,b);
	
	printf("\nEnter a decimal number\n");
	scanf("%f",&fraction);
	printf("%f\n",fraction);
	
	printf("Enter any Character\n");
	scanf("%c", &ch);
	printf("Entered character is %c\n",ch);
	
	printf("Enter any string(upto 100 chars)\n");
	scanf("%s",&str);
	printf("Entered string is %s",str);
	
	return 0;
}

//Enter two numbers 65 78
//65 78
//Enter a decimal number
//55.9
//55.900002
//Enter any Character
//Entered character is
//
//Enter any string(upto 100 chars)
//chanukya
//Entered string is chanukya
//--------------------------------
//Process exited after 16.36 seconds with return value 0
//Press any key to continue . . .
