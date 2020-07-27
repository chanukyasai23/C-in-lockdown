#include<stdio.h>
int main()
{
	int yur_num=23;
	float dec_num=7.9;
	char ch='A';
	char str[20]="Chanukya";
	double dbl=20.14367987;
	printf("%d %f %.2f\n" ,yur_num,dec_num,dec_num);
	printf("%c\n",ch);
	printf("string is %s ",str);
	printf("\nDouble is %lf",dbl);
	printf("\nOctal number is %o",yur_num);
	printf("\nHexa decimal number is %x",yur_num);
	return 0;
}
//23 7.900000 7.90
//A
//string is Chanukya
//Double is 20.143680
//Octal number is 27
//Hexa decimal number is 17
