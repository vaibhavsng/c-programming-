#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,z,sum;
    char count;
    do{
        printf("Enter 1st number:");
        scanf("%d",&x);
        printf("enter 2nd number");
        scanf("%d",&y);
        printf("Enter 3rd  number");
        scanf("%d",&z);
        sum=x+y+z;
        printf("sum of %d , %d , %d is : %d",x,y,z,sum);
        printf("\n do you want to continue(y/n)");
        scanf(" %c",&count);
    }
    while (count=='y');

}
