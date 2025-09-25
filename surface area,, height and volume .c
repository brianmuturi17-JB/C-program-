/*
Name: Brian
Reg No:ct100/g/26165/25
Description:c c program to compute volume, surface area and height.
*/

#include<stdio.h>
#define Pl 3.14159

int main() {
float radius, height, volume, surfaceArea; 
   
   printf("enter the radius of the circle:\n");
   scanf("%f",&radius);
   
   printf("enter the height of the cylinder:\n");
   scanf("%f",&height);
   
   volume=Pl*radius*radius*height;
   surfaceArea=2*Pl*radius*radius+2*Pl*radius*radius*height; 
   
   printf("volume of the cylinder=%.2f\n",volume);
   printf("surfaceArea of the cylinder=%.2f\n", surfaceArea);
   
   return 0;
   }