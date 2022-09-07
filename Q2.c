#include<stdio.h>
int main()
{
    int i,num,s=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    int check = num*2;
    for(i=2;i<=check ;i+=2)
    {
        s=s+i;
    }
    printf("Sum of %d even natural is %d ",num,s);
    return 0;
}
