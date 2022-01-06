#include <stdio.h>
int stack[100],top,i,n;
void main()
{
    void pop();
    void push();
    void display();
    void peek();
    int ch,i;
    top=-1;
    printf("\n Enter the size of stack: ");
    scanf("%d",&n);
    printf("\n Enter the elements of stack: ");
    for(i=0;i<n;i++)
       {
           top=top+1;
           scanf("%d",&stack[i]);
       }
    do
    {
        printf("\n 1.Display  2.Pop  3.Push  4.Peek   5.Exit");
        printf("\nSelect the choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:display();
                    break;
            case 2:pop();
                    break;
            case 3:push();
                    break;
            case 4:peek();
                    break;
            case 5:exit(1);
            default:printf("\n Invalid choice");


        }
    }while(ch<=5);
}

void display()
{
    if(top<0)
    {
        printf("\n Stack is empty");
    }
    else
    {
        for(i=top;i>-1;i--)
        {
            printf("%d,",stack[i]);
        }
    }
}

void peek()
{
    int data;
    data=stack[top];
    printf("\n %d",data);
}

void push()
{
    int data;
    printf("enter data to be inserted: ");
    scanf("%d",&data);
    if(top<n)
    {
        top=top+1;
        stack[top]=data;
    }
    else
    {
        printf("Insertion is not possible to an full full stack");
    }
}

void pop()
{
    if(top>0)
    {
        printf("Popped element is %d",stack[top]);
        top=top-1;
    }

    else
    {
        printf("Deletion not possible in an empty stack");
    }
}
