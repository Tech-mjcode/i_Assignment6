#include<stdio.h>
int main()
{
    int i,num,s=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    int check = num*2-1;
    for(i=1;i<=check ;i+=2)
    {
        s=s+i;
    }
    printf("Sum of %d Odd natural is %d ",num,s);
    return 0;
}
