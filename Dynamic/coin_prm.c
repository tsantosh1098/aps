#include<stdio.h>
#include<string.h>



int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[m];
    int v[n+1];
    memset(v,0,sizeof(v));
    v[0]=1;
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0,k=a[i];k<=n;j++,k++)
        {
            if(v[j]>=1)
            v[k]+=v[j];
        }
    }
    printf("%d\n",v[n]);
    return(0);
}