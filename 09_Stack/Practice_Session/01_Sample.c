#include<stdio.h>
#include<stdlib.h>
struct Stack{
    int* arr;
    int top;
    int capacity;
};

struct Stack* createstack();
void push(struct Stack** , int);
int isOverflow(struct Stack*);
int isUnderflow(struct Stack*);
void pop(struct Stack**);
void Display(struct Stack*);

int main()
{
    struct Stack* stack_ptr=NULL;
    int choice,num;
    do{
        puts("\n1.Create A stack :");
        puts("\n2Display The Stack :");
        puts("\n3.Push into Stack .");
        puts("\n4.Pop from Stack .");
        puts("\n0.Exit.");
        puts("\nEnter your choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: stack_ptr=createstack();
                break;
            case 2:Display(stack_ptr);
                break;
            case 3:
                puts("\nenter number to push :");
                scanf("%d",&num);
                push(&stack_ptr,num);
                break;
            case 4: pop(&stack_ptr);
                break;
        }
    }while(choice!=0);
    return 0;
}

struct Stack* createstack()
{
    int cap;
    struct Stack* stack_ptr=NULL;
    
    stack_ptr=(struct Stack*)malloc(sizeof(struct Stack));
    puts("\nEnter Capacity :");
    scanf("%d",&cap);
    stack_ptr->capacity=cap;
    stack_ptr->arr=(int*)malloc(cap*sizeof(int));
    stack_ptr->top=-1;
    return stack_ptr;
}

void push(struct Stack** stack, int val)
{
    if(isOverflow(*stack))
    {
        puts("\nStack Overflow, no Space Available..\n");
        return ;
    }
    else
    {
        (*stack)->top++;
        (*stack)->arr[(*stack)->top]=val;
    }
}

int isOverflow(struct Stack* stack)
{
    return stack->top == stack->capacity;
}

void pop(struct Stack** stack)
{
    int val;
    if(isUnderflow(*stack))
    {
        puts("\nStack Underflow, nothing to pop.");
        return ;
    }
    else{
    val=(*stack)->arr[(*stack)->top];
    (*stack)->top--;
    }
}

int isUnderflow(struct Stack* stack)
{
    return stack->top== -1;
}

void Display(struct Stack* stack_ptr)
{
    puts("\nTOP ---> ");
    while(stack_ptr->top!=-1)
    {
        printf("%d ---> ",stack_ptr->arr[stack_ptr->top]);
        stack_ptr->top--;
    }
}
