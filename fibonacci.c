#include<stdio.h>
int main()
{
    int n,n2=1,n1=0,n3;
    n=15;
    for(int i=2;i<n;i++)
    {
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
    return 0;
}