#include<stdio.h>
int main()
{
    long long int num;
    int count=1;
    printf("Enter a number : ");
    scanf("%lld",&num);
    long long int original = num;

    while(num/10)
    {
        num = num/10;
        count++;
    }

    printf("\"%lld\" is %d digit number.",original,count);
    return 0;
}
