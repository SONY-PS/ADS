#include<stdio.h>

typedef struct node

{

int value;

struct node* link;

}node1;

int val,pos,i;

node1* start = NULL;

void in_b();

void in_bw();

void in_end();

void display();

void d_beg();

void d_bw();

void d_end();

void main()

{

int ch;

while(1)

{

printf("\n\t\t\t\t\tLinked List Operations\t\t\t\t\t\t\n1-Insert node in the beginning\n2-Insert node in between\n3-Insert node  at the end\n4-Display\n5-Delete node from beginning\n6-Delete node in between\n7-Delete node at the end\n8-Exit\nEnter your choice : \n");

scanf("%d",&ch);

switch(ch)

{

case 1:in_b();

        break;

case 2:in_bw();

        break;

case 3:in_end();

        break;

case 4:display();

        break;

case 5:d_beg();

        break;

case 6:d_bw();

        break;

case 7:d_end();

        break;

case 8:exit(0);

default:printf("Invalid input");

}

}

}

void in_b()

{

node1* nptr=malloc(sizeof(node1));

printf("Enter the element : ");

scanf("%d",&val);

nptr->value=val;

if(start==NULL)

{

start=nptr;

nptr->link=NULL;

}

else

{

nptr->link=start;

start=nptr;

}

printf("Node inserted\n");

}

void display()

{

node1* temp;

if(start==NULL)

{

printf("List Empty");

}

printf("Elements are:\n");

temp=start;

while(temp!=NULL)

{

printf("%d\n",temp->value);

temp=temp->link;

}

}

void in_bw()

{

    node1 *temp;

    node1* nptr=malloc(sizeof(node1));

    printf("Enter the element and position to be inserted :\n");

    scanf("%d%d",&val,&pos);

    nptr->value=val;

    nptr->link=NULL;

    temp=start;

    if(pos==1)

    {

        nptr->link=start;

        start=nptr;

    }

    else

    {

        for(i=1;i<pos-1;i++)

        {

            temp=temp->link;

        }

        nptr->link=temp->link;

        temp->link=nptr;

    }

    printf("Node inserted\n");

}

void in_end()

{

    node1* temp;

     node1* nptr=malloc(sizeof(node1));

     printf("Enter the element : ");

     scanf("%d",&val);

     nptr->value=val;

     nptr->link=NULL;

     temp=start;

     while(temp->link!=NULL)

     {

         temp=temp->link;

 

     }

     temp->link=nptr;

     printf("Node inserted\n");

}

void d_beg()

{

    node1* temp;

    if(start==NULL)

    printf("List empty");

    else

    {

        temp=start;

        start=start->link;

        free(temp);

        printf("Node deleted");

    }

}

void d_bw()

{

    node1* temp,*prev;

    printf("Enter position of the node to be deleted ");

    scanf("%d",&pos);

    temp=start;

    if(pos==1)

        start=start->link;

    for(i=1;i<pos;i++)

    {

        prev=temp;

        temp=temp->link;

    }

    prev->link=temp->link;

    free(temp);

    printf("Node deleted");

}

void d_end()

{

    node1* temp,*prev;

    temp=start;

    while(temp->link!=NULL)

    {

        prev=temp;

        temp=temp->link;

    }

    prev->link=NULL;

    free(temp);

    printf("Node deleted");

}  