#include <stdio.h>

int fact(int n)
{
    int f=1;
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        f=n*fact(n-1);
    }
    return f;
}
int main()
{
    int m=3;
    int factorial = fact(m);
    printf("factorial of %d = %d \n",m,factorial);
    return 0;
}
