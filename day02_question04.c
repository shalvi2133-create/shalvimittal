// Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main(){
float r;
printf("enter r");
scanf("%f",&r);
float pi=3.14;
printf("area of circle:%f",pi*r*r);
printf("\ncircumference of circle :%f",2*pi*r);
return 0;
}
