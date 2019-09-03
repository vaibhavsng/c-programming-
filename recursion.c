#include<stdio.h>
#include<conio.h>
int factorial(int n);
void main()
{
    int num=0;
    printf("Factorial of %d is %d",num,factorial(num));
}
int factorial(int n)
{
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);

}
