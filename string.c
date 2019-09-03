#include<stdio.h>
#include<conio.h>
void main()
{
    char name[30];
    int i,length=0;
    printf("enter your name : ");
    scanf("%s",&name);
    printf("hi %s",name);

    for(i=0;name[i]!='\0';i++)
        length=length+1;
    printf("\n\nlength is %d\n\n",length);

    for(i=length-1;i>=0;i--)
        printf("%c",name[i]);
    getch();

}
