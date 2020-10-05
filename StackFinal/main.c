#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100

struct stack
{
    int stk[MAXSIZE];
    int top;
}s;


int push(int);
int  pop(void);
void display(void);

void main()
{
    s.top=-1;
    printf ("STACK OPERATION\n");
    push(1);
    push(2);
    push(30);
    display();
    pop();
    display();

}
int push(int x)
{
    if (s.top == (MAXSIZE - 1))
    {
        printf ("Stack is Full\n");
        return;
    }
    else
    {
        s.top = s.top + 1;
        s.stk[s.top] = x;
    }
    return 0;
}

int pop ()
{
    int num;
    if (s.top == - 1)
    {
        printf ("Stack is Empty\n");
        return (s.top);
    }
    else
    {
        num = s.stk[s.top];
        printf ("poped element is = %d: s\n", s.stk[s.top]);
        s.top = s.top - 1;
    }
    return(num);
}

void display ()
{
    int i;
    if (s.top == -1)
    {
        printf ("Stack is empty\n");
        return;
    }
    else
    {
        printf ("\n The status of the stack is: ");
        for (i =0;i<=s.top; i++)
        {
            printf ("%d\t", s.stk[i]);
        }
    }
    printf ("\n");
}
