#include<stdio.h>
int main(){
int a,ct;
ct=0;
printf("enter the number : ");
scanf("%d",&a);
while(a>0){
ct=ct+1;
a/=10;
}
printf("No of digits is %d",ct);
return 0;
}
