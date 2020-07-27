#include<stdio.h>
int main()
{
	char string[20];
	int n, count = 0;
	printf("Enter the no of characters present in an array \n ");
	scanf("%d", &n);
	printf(" Enter the string of %d characters \n" , n);
	scanf("%s", string);
	while (count < n)
	{
		printf(" %c = %d\n", string[count], string[count] );
		++ count ;
	}

}
/*
Enter the no of characters present in an array
 8
 Enter the string of 8 characters
chanukya
 c = 99
 h = 104
 a = 97
 n = 110
 u = 117
 k = 107
 y = 121
 a = 97 */
