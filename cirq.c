#include<stdio.h>
void enqueue();
void dequeue();
void display();
int isfull();
int isempty();
int front=-1;
int rear=-1;
int n,x,i,items[20];
void main()
{
    int ch;
    printf("\nEnter the size of the queue:");
    scanf("%d",&n);
    do{
        printf("\n 1.Enqueue \n 2.Dequeue \n 3.Display");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:enqueue();
                break;
            case 2:dequeue();
                break;
            case 3:display();
                break;
            default:printf("\nInvalid choice");
                break;
        }
    }
    while(ch<4);
}

int isfull()
{
    if((front==rear+1)||(front==0&&rear==n-1))
    {
            return 1;
    }
    else
    {
          return 0;
    }
}

 int isempty()
    {
        if(front==-1)
            return 1;
        else
            return 0;
    }


void enqueue()
{
    if(isfull()){
        printf("\nQueue is full");
    }
    else{
        if(front==-1)
            front=0;
            rear=(rear+1)%n;
            printf("\nEnter element:");
            scanf("%d",&x);
            items[rear]=x;
            printf("\nInserted element is %d",x);
    }
}

void dequeue()
{
    if(isempty())
    {
        printf("\n Queue is empty");
    }
    else{
        x=items[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=(front+1)%n;
        }
        printf("\nDeleted element is %d",x);
    }
}

void display()
{
    if(isempty())
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\nElement in the queue are\n");
        for (i=front;i!=rear;i=(i+1)%n)
        {
             printf("%d",items[i]);
        }
        printf("%d\t",items[i]);
    }
}
