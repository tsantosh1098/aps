#include<stdio.h>
#define max 1000
int arr[1000];
int front,rare;
front=-1;
rare=-1;


void insert()
{
    if(front==-1)
    front=0;
    if(rare==max)
    printf("Queue is full\n");
    else
    {
     rare+=1;
    scanf("%d",&arr[rare]);
    printf("insert %d\n",arr[rare]);
    }
   
}
void delete()
{
    if(front>rare)
    printf("No element to delete\n");
    else
    printf("delete %d\n",arr[front++]);

}

void print()
{
    int i;
    if(front>rare)
    printf("No element to print\n");
    else{
    for(i=front;i<=rare;i++)
    printf("%d ",arr[i]);
    printf("\n");
    }
}






int main()
{
    int ch;
    while(1){
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: insert();
                  break;
        case 2: delete();
                 break;
        case 3: print();
                break;
        default:printf("Invalid input\n");
               break;

    }
    }
}