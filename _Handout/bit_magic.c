#include<stdio.h>

int main()
{
    int n,result;
    scanf("%d",&n);

    // This operation does round of the given number to 2pow() or sum of 2pow()'s 
    result= n & (n-1);
    printf("%d\n",result);


    
}