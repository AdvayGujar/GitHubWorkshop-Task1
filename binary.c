#include<stdio.h>
#define MAX 100
int s[MAX],cs[100],top=-1,n;
int isEmpty()
{
    if(top==-1)
        return 1;
    return 0;
}

int isFull()
{
    if (top==MAX-1)
        return 1;
    return 0;
}

int pop()
{
    if (isEmpty())
    {
        printf("Stack is Empty\n");
        return 0;
    }
    else
    {
        return s[top--];
    }
}

char cpop()
{
    if (isEmpty())
    {
        printf("Stack is Empty\n");
        return 0;
    }
    else
    {
        return s[top--];
    }
}

void push(int n)
{
    if (isFull())
    {
        printf("Stack Overflow");
    }
    else
    {
        s[++top]=n;
    }
    
}

void cpush(char n)
{
    if (isFull())
    {
        printf("Stack Overflow");
    }
    else
    {
        s[++top]=n;
    }
    
}

void convert()
{
    while (n!=0)
    {
        push(n%2);
        n/=2;
    }
    while (!isEmpty())
    {
        printf("%d",pop());
    }
}

void rev()
{
    
    char a[100];
    int i;
    printf("Enter a Sring: ");
    gets(a);
    for(i=0;a[i]!='\0';i++)
        cpush(a[i]);
    while(!isEmpty())
        printf("%c",cpop());
}

int main()
{
    n=0;
    
    int choice;
    
    do
    {
        printf("\n\n1: binary conversion\n2: string reverse\n3: Exit\n");
        printf("Enter a choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("\n\nEnter a number: ");
            scanf("%d",&n);
            printf("The binary representation of %d is ",n);
            convert();
            printf("\n");  
            break;
        case 2:
            printf("\n\n"); 
            rev();
            printf("\n");
            break;

        case 3:
            printf("\n\nExit from code\n");
            break;
        default:
            printf("Invalid Option\n\n");
            break;
        }
    } while (choice != 3);
    
     
    return 0;
}
