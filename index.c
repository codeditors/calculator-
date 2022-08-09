#include<stdio.h>
#include<math.h>
int main(void)
{
float a,b,c;
int A;
printf(" \n Enter your first input =\n ");
scanf("%f",&a);
printf("\n Enter your second input =\n ");
scanf("%f",&b);
printf("\n\n Press 1 for Addition + \n Press 2 for Subtraction - \n Press 3 for Multiply *  \n Press 4 for Divid / \t");
scanf("%f",&A);
switch(A)
{
case 1:
c=a+b;
printf("\n\t%f + %f = %.2f = ",a ,b ,c);
break;
case 2:
    c=a-b;
    printf("\n\t%f - %f = %.2f = ",a ,b ,c);
break;
case 3:
    c=a*b;
    printf("\n\t%f * %f = %.2f = ",a ,b ,c);
break;
case 4:
    c=a/b;
    printf("\n \t%f / %f = %.2f = ",a ,b ,c);
break;

}

return 0;
}
printf("\n calculations Completed Thanks for using me");
