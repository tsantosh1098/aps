#include<stdio.h>
#include<string.h>
#include<math.h>

int main()

{
    char data[]={'a','b','c'};
   int set_size=3;
   unsigned int size =pow(2,set_size);
   int i,j;
   for(i=0;i<size;i++)
   {
       for(j=0;j<set_size;j++)
       {
             //printf("%d ",i & (1<<j));
           if(i & (1<<j))
           {
          
           printf("%c",data[j]);
           }
          
       }
       printf("\n");
   }
   return(0);
}