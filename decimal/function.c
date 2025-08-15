#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("enter the marks:\n");
    scanf("%d %d %d",&s1,&s2,&s3);

    float total= s1+s2+s3;
    printf("the total marks is:%f",total);

    float subject_total=300;
    int percentage=(total/subject_total)*100;
    printf("\npercentage is:%d",percentage);

    float avrege =total/3;
    printf("\nthe avrege is :%2f",avrege);

    return 0;
}