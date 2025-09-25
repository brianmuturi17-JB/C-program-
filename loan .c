#include<stdio.h>
int main(){
int age;
float income;

printf("Brian muturi\n");
printf("ct100/g/26165/25\N");

printf("please enter your age:21");
scanf("%d",&age);

printf("please enter your annual income:256000");
scanf("%f",&income);

if(age>=21&&income>=21000){
printf("congratulations you qualify for a loan.\n");
}else{
printf("unfortunately,we are unable to offer u a loan at this time.\n");
}
return 0;
}