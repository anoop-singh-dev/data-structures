/* A data structure based on dynamic memory allocation of linked list which is Cicular in Nature */

#include<stdio.h>
#include<stdlib.h>
struct circular
{	int i;
    	struct circular *next;
};
struct circular *temp;
struct circular *head;
struct circular *p;
struct circular *mid;
struct circular *move;
int cnt=0;			//Counter use for the count the elements.
void create(void);		//Function use for the creation of the List.
void insert(void);		//Function use for the insertion of the elements.
void display(void);		//Function use for the displaying of the elements.
void del(void);			//Function use for the deleting the elements.
void main()
{	int ch=0;
    	while(ch!=5)
    	{	printf("\n1. CREATE");
        	printf("\n2. INSERT");
        	printf("\n3. DELETE");
        	printf("\n4. DISPLAY");
        	printf("\n5. EXIT");
        	scanf("%d",&ch);
	        if(ch==1)
	 	{	create();
            		cnt++;
            		cnt++;
        	}
        	if(ch==2)
        	{	insert();
            		cnt++;
        	}
        	if(ch==3)
        	{	del();
            		cnt--;
        	}
        	if(ch==4)
        	{	display();
        	}
        	if(ch==5)
        	{	break;
        	}
    	}
}
void create()
{	head=(struct circular *)malloc(sizeof(struct circular));
    	head->next=head;
    	printf("\nENTER THE DATA: ");
    	scanf("%d",&head->i);
    	temp=head;
	temp->next = (struct circular *)malloc(sizeof(struct circular));
    	temp = temp->next;
    	temp->next = head;
    	printf("\nENTER THE DATA: ");
    	scanf("%d",&temp->i);
}
void insert()
{	int add,t;
    	printf("\n\t ENTER ANY NUMBER BETWEEN 1 AND %d",cnt);
    	scanf("%d",&add);
    	p = head;
    	t = 1;
    	while(t<add)
    	{	p = p->next;
        	t++;
    	}
    	printf("%d",p->i);
    	mid=(struct circular *)malloc(sizeof(struct circular));
    	printf("\nENTER THE DATA: ");
    	scanf("%d",&mid->i);
    	mid->next = p->next;
    	p->next = mid;
}
void display()
{	p = head;
    	printf("%d-->",p->i);
    	p = p->next;
    	while(p!=head)
    	{	printf("%d-->",p->i);
        	p = p->next;
    	}
}
void del(void)
{	int add,t;
	printf("\n\t ENTER ANY NUMBER BETWEEN 1 AND %d",cnt);
    	scanf("%d",&add);
    	p = head;
    	t = 1;
    	while(t<add-1)
    	{	p = p->next;
        	t++;
    	}
   	printf("%d",p->i);
    	mid = p->next;
    	p->next = mid->next;
}
