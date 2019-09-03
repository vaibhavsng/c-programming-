#include<stdio.h>
#include<conio.h>
int main()
{
    int marks[5];
    int sum=0,i;
    for(i=0;i<5;i++)
    {
       printf("enter 5 numbers : ");
       scanf("%d",&marks[i]);
     sum=sum+marks[i];
     }

    printf("sum is %d",sum);
    getch();
}
