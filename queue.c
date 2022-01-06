#include<stdio.h>
void enqueue();
void dequeue();
void display();
int rear=-1;
int front=-1;
int queue[100],n;
void main()
{
int ch;
printf("Enter the size of the queue\n");
scanf("%d",&n);
do
{
    printf("\n\nSELECT CHOICE\n1.Enqueue\n2.Dequeue\n3.Display\nEnter your choice\n");
    scanf("%d",&ch);
    switch(ch)
        {
        case 1:enqueue();
                break;
        case 2:dequeue();
                break;
        case 3:display();
                break;
        default:printf("Invalid choice\n");
        }
    }
    while(ch<4);
}

void enqueue()
{
    int item;
    if(rear==n-1)
        {
        printf("The queue is full\n");
        }
    else
        {
        if (front == - 1)
            {
                front = 0;
            }
    printf("Inset the element in queue : \n");
    scanf("%d", &item);
    rear = rear + 1;
    queue[rear] = item;
    printf("Element inserted in the queue successfully\n");

    }
}

void dequeue()
{
    if(front==-1||front>rear)
    {
        printf("The queue is empty\n");
    }
    else
    {
        printf("Element deleted is %d\t\n",queue[front]);
        front=front+1;
    }
}

void display()
{
int i;
if(front==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("The elements in the queue is \n");
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",queue[i]);
        }
    }
}
