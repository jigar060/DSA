#include<stdio.h>
int main(){
int a[10];
printf("enter the elements of array :");
 for(int i=0;i<=9;i++){
     scanf("%d", &a[i]);
 }
for(int i=0;i<=9;i++){
    printf("%d\n",a[i]);
}
int sum=0;
for(int i=0;i<=9;i++){
    sum+=a[i];
}
float avg=sum/10;
printf("The average of the array element is %f.",avg);
}
