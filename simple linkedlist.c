#include<stdio.h>
#include<stdlib.h>
struct node
{   int info;
    struct node *link;
};
struct node *start = NULL;
struct node *create()
{
    struct node *n;
    n = (struct node*)malloc(sizeof(struct node));
    return (n);
};
void insert()
{
    struct node *temp,*t;
    temp = create();
    printf("enter your infomations");
    scanf("%d",&temp->info);
    temp->link=NULL;
    if(start==NULL)
    {
        start = temp;
    }
    else
    {
        t = start;
        while(t->link!=NULL)
        {
            t=t->link;
        }
        t->link = temp;
    }
}
void del()
{
    struct node *r;
    if(start==NULL)
    {
        printf("list is empty");
    }
    else
    {
        r = start;
        start = start->link;
        free(r);
    }
}
void viewlist()
{
    struct node *a;
    if(start == NULL)
    {
        printf("list is empty");
    }
    else
    {
        a = start;
        while(a!=NULL)
        {
            printf("%d",a->info);
            a = a->link;
        }
    }
}
int menu()
{
    int ch;
    printf("\n 1.add value of list");
    printf("\n 2.delete first value");
    printf("\n 3.view list");
    printf("\n 4. exit");
    printf("\n enter your choice");
    scanf("%d",&ch);
    return(ch);
}
void main()
{
    while(1)
    {
        switch(menu())
        {
            case 1:insert();
                  break;
            case 2:del();
                  break;
            case 3:viewlist();
                  break;
                  case 4:exit(0);
                  default:
                    printf("invalid choice");
        }
    }
}
