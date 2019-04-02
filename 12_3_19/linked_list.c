#include<stdio.h>
#include<stdlib.h>


struct node{

    int ele;
    struct node * next;
};

typedef struct node ptr;
ptr *root=NULL;

void insert()
{
    ptr *temp;
    temp=(ptr*)malloc(sizeof(ptr));
    scanf("%d",&temp->ele);
    printf("Insert %d\n",temp->ele);
    temp->next=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        ptr *cc;
        cc=root;
        while(cc->next!=NULL)
        {
            cc=cc->next;
        }
        cc->next=temp;
    }
}

void delete_end()
{
    ptr *cc;
        cc=root;
        if(root==NULL)
        printf("No element to delete\n");
        else if(root->next==NULL){
        printf("Delete End %d\n",root->ele);
        root=NULL;
        }
        else{
        while(cc->next->next!=NULL)
        {
            cc=cc->next;
        }
        printf("Delete End %d\n",cc->next->ele);
        free(cc->next);
        cc->next=NULL;
        }
}
void delete_start()
{
    if(root==NULL)
    printf("No element to delete\n");
    else{
    printf("Delete Start %d\n",root->ele);
    root=root->next;
    }
}


void delete_inter()
{
    int aa;
    scanf("%d",&aa);
    ptr *cc;
        cc=root;
        if(root==NULL)
        printf("No element to delete\n");
        else if(root->next==NULL){
        printf("Delete End %d\n",root->ele);
        root=NULL;
        }
        else{
        while(cc->next->next!=NULL)
        {
            cc=cc->next;
        }
        printf("Delete End %d\n",cc->next->ele);
        cc->next=NULL;
        }
}


void print()
{
    ptr *cc;
        cc=root;
        if(root==NULL)
        printf("No element to display\n");
        else{
        while(cc!=NULL)
        {
            printf("%d ",cc->ele);
            cc=cc->next;
        }
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
        case 2: delete_end();
                 break;
        case 3: print();
                break;
        case 4: delete_start();
                 break;
        case 5:delete_inter();
                 break;
        default:printf("Invalid input\n");
               break;

    }
    }
}