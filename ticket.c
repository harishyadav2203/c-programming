// Online C compiler to run C program online
#include <stdio.h>
void main()
{
int a,b,c;
printf("Enter the value in a:");
scanf("%d",&a);
printf("Enter the value in b:");
scanf("%d",&b);
printf("Enter the value in c:");
scanf("%d",&c);
if(a==2&&b==2&&c==2)
{
    printf("10");
}
else if(a==b&&b==c&&c==a)
{
    printf("5");
}
else if(b!=a&&c!=a)
{
    printf("1");
}
else
{
    printf("0");
}
}


