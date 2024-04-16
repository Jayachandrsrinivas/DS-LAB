#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX],top=-1;
void push(int);
void pop();
void display();
 int main()
 {
  int choice,item;
  while(1)
    {
     printf("\n menu \n");
     printf("1.push \n");
     printf("2. pop\n");
     printf("3. display\n");
     printf("4. exit\n");
     printf("enter the your choice");
     scanf("%d",&choice);
     switch(choice)
     {
     case 1: printf("enter the element");
             scanf("%d",&item);
             push(item);
             break;
     case 2 :pop();
             break;
     case 3 : display();
              break;
     case 4 : exit(0);
              break;
      default : printf(" invalid choice \n");
      }
    }
 }
  void push(int item)
    {
     if( top==MAX-1)
     printf(" stack overflow");
     else
     {   
       top++;
       stack[top]=item;
       printf("enter the element to be inserted");
     }
   }
  void pop()
  {
   if(top==-1)
   printf(" stackunderflow ");
   else
     {
      printf(" element deleted:%d\n",stack[top--] );
      }
     }
     
    void display()
    {
      int i;
      if(top==-1)
      printf("stack is empty\n");
      else
      {
       printf(" stack content ;\n");
       for(i=top;i>=0;i--)
          printf("%5d",stack[i]);
        }
    }
