#include<stdio.h>
#include<stdlib.h>
struct node {
 int data;
 struct node *next;
}*front=NULL,*rear=NULL;

void enqueue(int x){
 struct node *t;
 t=(struct node*)malloc(sizeof (struct node));
 if(t==NULL)
 printf("queue is full");
 else{
  t->data=x;
  t->next=NULL;
  if(front==NULL)
  front=rear=t;
  else{
   rear->next=t;
  rear=t;
  }
 }
}
int dequeue(){
 int x=-1;
 struct node *t;
 if(front==NULL){
  printf("queue is empty\n");
 }
 else{
  t=front;
  front=front->next;
  x=t->data;
  free(t);
 }
 return x;
}
void display()
{
 
 struct node *p;
 p=front;
 while(p){
  printf("%d\n",p->data);
  p=p->next;
 }
}
int main(){

 dequeue();
 display();
  dequeue();
 enqueue(23);
display();
}