#include<stdio.h>
#include<stdlib.h>

struct node{
    int ele;
    struct node *left;
    struct node *right;
};

typedef struct node ptr;
ptr * root = NULL;

void insert()
{
    ptr *temp;
    temp=(ptr*)malloc(sizeof(ptr));
    scanf("%d",&temp->ele);
    printf("Insert %d\n",temp->ele);
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        ptr *cc;
        ptr *p;
        cc=root;
        while(cc!=NULL){
            p=cc;
        if(temp->ele > cc->ele)
        {
            
            cc=cc->right;
        }
        else
        {
        
            cc=cc->left;
        }
        }

        if(p->ele > temp->ele)
        {
            p->left=temp;
        }
        else
        {
            p->right=temp;
        }
    }
}



void print()
{
     
    if (root->left)

        print(root->left);

    printf("%d->", root->ele);

    if (root->right)

        print(root->right);

}
void delete()
{

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