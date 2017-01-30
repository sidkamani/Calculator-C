#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
int choice,i,a=1,b;
float x,y;
printf("Enter X: ");
scanf("%f",&x);
do {
printf("\n Select your operation (press 0 to exit): \n");
printf("1>  Addition\n2>  Subtraction\n3>  Multiplication\n4>  Division\n5>  Square root\n6>  X ^ Y\n7>  X ^ 2\n8>  X ^ 3\n9>  1 / X\n10> X ^ (1 / Y)\n11> X ^ (1 / 3)\n12> 10 ^ X\n13> X!\n14> Percentage\n15> log10(X)\n16> Modulus\n17> Sin(X)\n18> Cos(X)\n19> tan(X)\n20> Cosec(X)\n21> Cot(X)\n22> Sec(X)\nChoice: ");
scanf("%d",&choice);
if(choice==0) exit(0);
switch(choice) {
case 1:
printf("\nEnter Y: ");
scanf("%f",&y);
x+= y;
printf("\nResult: %.2f",x);
break;
case 2:
printf("\nEnter Y: ");
scanf("%f",&y);
x-=y;
printf("\nResult: %.2f",x);
break;
case 3:
printf("\nEnter Y: ");
scanf("%f", &y);
x*=y;
printf("\nResult: %.2f",x);
break;
case 4:
printf("\nEnter Y: ");
scanf("%f", &y);
x=x/y;
printf("\nResult: %.2f",x);
break;
case 5:
x=sqrt(x);
printf("\nResult: %.2f",x);
break;
case 6:
printf("\nEnter Y: ");
scanf("%f", &y);
x= pow(x, y);
printf("\nResult: %.2f",x);
break;
case 7:
x= pow(x, 2);
printf("\nResult: %.2f",x);
break;
case 8:
x= pow(x, 3);
printf("\nResult: %.2f",x);
break;
case 9:
x= pow(x, -1);
printf("\nResult: %.2f",x);
break;
case 10:
printf("\nEnter Y: ");
scanf("%f", &y);
x= pow(x, (1/y));
printf("\nResult: %.2f",x);
break;
case 11:
y = 3;
x= pow(x, (1/y));
printf("\nResult: %.2f",x);
break;
case 12:
x= pow(10,x);
printf("\nResult: %.2f",x);
break;
case 13:
for(i = 1; i<x+1; i++) {
a=a*i;
}
printf("\nResult: %d",a);
break;
case 14:
printf("Enter X: ");
scanf("%f", &x);
x=x/100;
printf("\nResult: %.2f",x);
break;
case 15:
x=log10(x);
printf("\nResult: %.2f",x);
break;
case 16:
printf("\nEnter Y: ");
scanf("%d", &b);
x=(int)x % b;
printf("\nResult: %d",x);
break;
case 17:
x=sin(x * 3.14159 / 180);
printf("\nResult: %.2f",x);
break;
case 18:
x=cos(x * 3.14159 / 180);
printf("\nResult: %.2f",x);
break;
case 19:
x=tan(x * 3.14159 / 180);
printf("\nResult: %.2f",x);
break;
case 20:
x=1 / (sin(x * 3.14159 / 180));
printf("\nResult: %.2f",x);
break;
case 21:
x= 1 / tan(x * 3.14159 / 180);
printf("\nResult: %.2f",x);
break;
case 22:
x=1 / cos(x * 3.14159 / 180);
printf("\nResult: %.2f",x);
break;
default:
printf("\nInvalid Choice! Please try again");
}
} while(choice);
getch();
return 0;
}
