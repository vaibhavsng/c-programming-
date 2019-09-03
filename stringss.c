#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char fname[30]="SHIVANSH",lname[20]="dwivedi";
    printf("Length of fname is %d\n\n",strlen(fname));
    printf("Length of lname is %d\n\n",strlen(lname));
    printf("Lowercase of fname is %s\n\n",strlwr(fname));
    printf("uppercase of fname is %s\n\n",strupr(fname));
    printf("reverse of fname is %s\n\n",strrev(fname));
    printf("full name is %s\n\n",strcat(fname,lname));
}
