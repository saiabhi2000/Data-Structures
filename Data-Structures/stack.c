#include<stdio.h>

int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
void peek(void);
void IsEmpty();
void IsFull();
int main()
{
    top=-1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.PEEK \n\t 5.IsEMPTY \n\t 6. Is Full \n\t7.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                peek();
                break;
            }
            case 5:
            {
                IsEmpty();
                break;
            }
            case 6:
            {
                IsFull();
                break;
            }
            
            case 7:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            
			default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4/5/6/7)");
            }
                 
        }
    }
    while(choice!=7);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");
         
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
}
void peek()
{
if(top>=0)
{
	printf("The peek element is :%d\n",stack[top]);
}
else{
	printf("Stack is Empty");
}	
}
void IsEmpty()
{
	if(top<=-1)
	printf("Stack is  Empty\n");
	else
	printf("Stack is not Empty \n");
}
void IsFull()
{
	if(top>=n-1)
	printf("Stack is Full \n");
	else
	printf("Stack is not FUll\n");
}
