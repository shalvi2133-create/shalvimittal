// Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main(){
int a,b,x;
printf("enter a");
scanf("%d",&a);
printf("enter b");
scanf("%d",&b);
printf("before swapping");
x=a;
a=b;
b=x;
printf("after swapping");
printf("%d",&b);
printf("%d",&a);
return 0;
}


