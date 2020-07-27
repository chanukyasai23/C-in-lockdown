#include<stdio.h>
int main()
{
	double a,b,temp;
	printf("Enter 1st number: ");
	scanf("%lf",&a);
	printf("Enter 2nd number: ");
	scanf("%lf",&b);	
	
	temp = a;
	a = b;
	b = temp;
	printf("\nafter swapping,1st num = %.2lf\n",a);
	printf("\nafter swapping,2nd num = %.2lf\n",b);	
	return 0;
}
/*
Enter 1st number: 64
Enter 2nd number: 79

after swapping,1st num = 79.00

after swapping,2nd num = 64.00

*/
