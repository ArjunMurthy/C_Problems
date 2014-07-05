/*
 * linkedlist.c
 *
 *  Created on: Jul 5, 2014
 *      Author: Arjun Ananthamurthy
 */

#include<stdio.h>
#include<stdlib.h>

//#define NULL 0
struct Node
{
	int data;
	struct Node* next;
};

struct Node *head;
void insert(int data)
{
 
  struct Node* temp1= (struct Node*) malloc(sizeof(struct Node));
  temp1->data=data;
  temp1->next=NULL;
  if(head==NULL) 
   head=temp1;
 else
 {
 struct Node *temp2= head;
  while(temp2->next!=NULL)
  {
   temp2=temp2->next; 
  }
  temp2->next=temp1;
 }
}

void delete(int position);
void print()
{
      printf("\n elements are [");
	struct Node* temp=head;
	while(temp->next!=NULL)
        {
		printf("%d,",temp->data);
		temp=temp->next;
	}
    printf("%d",temp->data); 
    printf("]\n");
}

void printAddress()
{
  struct Node* temp=head;
  while(temp->next!=NULL)
  {
    printf("\n address of %d is %d",temp->data,temp->next);
    temp=temp->next;
  }
 printf("\n address of %d is %d\n",temp->data,temp->next);
}

int main()
{
	int n,i,x;
	head= NULL;
	printf("\nhow many elements\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter the element %d : ",i+1);
		scanf("%d",&x);
		insert(x);
	}
       print();
       printAddress();
       return 0;
}
