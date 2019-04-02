#include<stdio.h>


   int v_post[4]={};
	int v_pre[4]={}; 
int n=4,i;
int a[4][4]= {{0,1,1,1},{1,0,1,0},{1,1,0,0},{1,0,0,0}};
int k=1;

void rec(int v,int pos)
{
	
	if(a[v][pos]==1 && v!=pos && v_pre[v]==0)
	{
	  v_pre[v]=k++;
	  rec(pos,pos+1);
          
        }
        else
	{
	if(pos+1<n )
	  rec(v,pos+1);
	else
	 v_pre[v]=k++;
        }
}

	
int main()
{
    int node;
    scanf("%d",&node);
   
   rec(node,0);

   for(i=0;i<4;i++)
   {
      printf("%d ",v_pre[i]);
   }


   return(0);
 
}
   
