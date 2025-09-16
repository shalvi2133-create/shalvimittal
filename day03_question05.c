// Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main(){
float c,f;
printf("enter c");
scanf("%f",&c);
printf("temp from c to f:%f",(f=c*9/5+32));
return 0;
}