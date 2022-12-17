#include<stdio.h>
int main(){
int a,ct,r;
ct=0;
printf("enter the number : ");
scanf("%d",&a);
while(a>0){
r=a%10;
ct=ct+r;
a/=10;
}
printf("Sum of digits is %d",ct);
return 0;
}
