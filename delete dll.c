#include<stdio.h>
#include<stdlib.h>
struct node {
 struct node *prev;
 int data;
 struct node *next;
}*first=NULL;
void create (int A[],int n){
 struct node *t,*last;
 int i;
 first=(struct node *)malloc(sizeof(struct node));
 first->data=A[0];
 first->prev=first->next=NULL;
 last=first;
 for(i=1;i<n;i++){
  
 t=(struct node *)malloc(sizeof(struct node));
 t->data=A[i];
 t->next=NULL;
 t->prev=last;
 last->next=t;
 last=t;
 }
 
  
}
void display(struct node *p){
 while(p)
 
 {
  printf("%d",p->data);
  p=p->next;
  printf("\n");
  
  
  
 }
 printf("\n");
 
}
void insert(struct node *p,int index ,int x){
 struct node *t;
 int i;
 if(index==0){
  t=(struct node*)malloc(sizeof(struct node));
  t->data=x;
         
  t->next=first;
  first->prev=t;
  first=t;
 }
 else{
  for(i=0;i<index-1;i++)
  p=p->next;
  t=(struct node*)malloc(sizeof(struct node));
  t->data=x;
  t->prev=p;
  t->next=p->next;
  p->next=t;
  if(p->next){
   p->next->prev=t;
  }
  
  
 }
  
}
int delete(struct node *p,int index)
{
  struct node *q;
  int x=-1,i;
  
  if(index==1){
   first=first->next;
   if(first)
    first->prev=NULL;
    x=p->data;
    free(p);
   
  }
  else{
   for(i=0;i<index-1;i++)
   p=p->next;
   p->prev->next=p->next;
   if(p->next)
   p->next->prev=p->prev;
   x==p->data;
   free(p);
   
   
  }
  return x;
}
int main(){
 
 int A[5]={1,2,3,4,5};
 create(A,5);
// insert(first,0,25);
 delete(first,5);
 
 display(first);
 return 0;
}