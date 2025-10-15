#include<stdio.h>
int main()
{
    int num;
//    int original=num;
    int res=0;
    printf("Enter No. to check");
    scanf("%d",&num);
 int original=num;

    while (num!=0)
    {
        int lastDigit=num%10;
        res= res*10+ lastDigit;
        num=num/10;
    } 
    if(original==res){ printf("It is pallindrome no.");}
    else{ printf("it is not in pallindrome");}
    return 0;
}