#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
 
int main(){
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *temp;
    struct node *newnode;
    struct node *yuvraj;
    struct node *last;

head=(struct node*)malloc(sizeof(struct node));
first=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
newnode=(struct node*)malloc(sizeof(struct node));
yuvraj=(struct node*)malloc(sizeof(struct node));
last=(struct node*)malloc(sizeof(struct node));

head->data=10;
first->data=20;
second->data=30;
head->next=first;
first->next=second;
second->next=NULL;
 

 newnode->data=5;
 newnode->next=head;
 head=newnode;
 yuvraj->data=1;
 yuvraj->next=head;
 last->data=100;
last->next=NULL; 
 head=yuvraj;
 temp=head;

while(temp!=NULL){
    //printf("%d \n",temp->data);
    temp=temp->next;
     
}
temp->next=last;
 newnode->data=5;
 newnode->next=head;
 head=newnode;
 printf()
 

return 0;

}