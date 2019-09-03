#include <stdio.h>
#include<conio.h>
int main()
{
int a,b,sum1,diff1;
float c,d,sum2,diff2;
scanf("%d %d %f %f",&a,&b,&c,&d);
sum1=a+b;
diff1=a-b;
sum2=c+d;
diff2=c-d;
printf("%d %d\n",sum1,diff1);
printf("%0.1f %0.1f\n",sum2,diff2);
return 0;
}
