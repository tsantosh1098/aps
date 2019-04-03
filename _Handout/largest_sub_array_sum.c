#include<stdio.h>

int kadane(int a[],int n)
{
  int max=0,tmax=0;
  for(int i=0;i<n;i++)
  {
      tmax=tmax+a[i];
      if(tmax<0)
      tmax=0;
      if(max<tmax)
      max=tmax;
  }
  return(max);
}

int main()
{
    int c;
    int a[]={-2,-3,4,-1,-2,1,5,10};
    c=kadane(a,8);
    printf("%d\n",c);
    return(0);
}