#include <stdio.h>
int main()
{
    float a, b, product;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);  
 
    // Product of nums
    product = a * b;

    // Result up to 2 decimal point is displayed using %.2lf
    printf("Product = %.2f", product);
    
    return 0;
}
/*
Enter two numbers: 6.4 7.9
Product = 50.56
*/
