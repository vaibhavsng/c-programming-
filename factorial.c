#include<stdio.h>
#include<conio.h>
int factorial(int n);
void main()
{
    int num1,num2;
    char count;
    printf("enter num1:");
    scanf("%d",&num1);
    printf("enter num2:");
    scanf("%d",&num2);
    printf("Factorial of %d is %d ",num1,factorial(num1));
    printf("Factorial of %d is %d ",num2,factorial(num2));


}
int factorial(int n)
{
    int i,result=1;
    for(i=1;i<=n;i++)
        result=result*i;
    return result;
}

