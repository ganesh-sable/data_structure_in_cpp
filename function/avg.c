#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the values of a,b and c is: ");
    scanf("%d %d %d",&a,&b,&c);

    float avg;
    avg=(a+b+c)/3;
    printf("the average is :%2f",avg);
    return 0;
}