// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main(){
int l,b;
printf("enter l");
scanf("%d",&l);
printf("enter b");
scanf("%d",&b);
printf("area of rectangle:%d",l*b);
printf("\nperimeter of rectangle:%d",2*l+b);
return 0;
}
