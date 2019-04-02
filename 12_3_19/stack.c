#include<stdio.h>
#define mx 100

struct node{
    int arr[mx];
    int top;
};

typedef struct node ptr;
ptr a;

void push()
{
    if(a.top==mx)
    printf("Stack is full\n");
    else{
    scanf("%d",&a.arr[++a.top]);
    printf("push %d\n",a.arr[a.top]);
    }
}

void pop()
{
    if (a.top==-1)
    printf("No element to pop\n");
    else
    printf("pop %d\n",a.arr[a.top--]);
}
 void print()
 {
     for(int i=0;i<=a.top;i++)
     printf("%d ",a.arr[i]);
     printf("\n");
 }

int main()
{
    int choice;
    
    while(1){
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: push();
                 break;
        case 2: pop();
                 break;
        case 3: print();
                 break;
        case 4: exit(0);
                 break;
        default:printf("Invalid choice\n");
                 break;
        
    }
    }
}

