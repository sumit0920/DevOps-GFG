#include<stdio.h>

int sum(int a, int b){
    return (a + b);
}

int main()
{
    int m=20;
    int n=10;
    int s=sum(m,n);
    prinft ("Sum=%d",s);
    return 0;
}