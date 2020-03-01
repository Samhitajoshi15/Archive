#include<stdio.h>
#include<malloc.h>

struct node{
  struct node*prev;
  int data;
  struct node*next;
};
struct node*start=NULL;

//creating the linked list
struct node* cll(struct node* start)
{
  int n;
  printf("Enter the node value\n");
  scanf("%d",&n);
  struct node*newnode, *ptr;
  printf("\nEnter -1 to exit");
  while(n!=-1)
  {
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=n;
    if(start==NULL){
      newnode->next=newnode;
      newnode->prev=newnode;
      start=newnode;
    }
    else{
      ptr=start;
      while(ptr->next!=start){
        ptr=ptr->next;
      }
      ptr->next=newnode;
      newnode->prev=ptr;
      newnode->next=start;
      start->prev=newnode;
    }
    printf("\nEnter the node value\n");
    scanf("%d",&n);
  }
  return start;
}

//Displaying the LL
void dll(struct node* start)
{
  struct node*ptr;
  ptr=start;
  while(ptr->next!=start)
  {
    printf("%d -> ",ptr->data);
    ptr=ptr->next;
  }
}

int main()
{
  int ch;
  printf("Enter your choice:\n");
  printf("---------------------\n");
  printf("1. Create DCLL\n2. Display DCLL\n\n");
  scanf("%d",&ch );
  printf("Enter any -1 to exit from the program\n");
  while(ch!=-1){
    switch(ch){
    case 1: start= cll(start);
    break;

    case 2: dll(start);
    break;
  
}
  }
  return 0;
}
