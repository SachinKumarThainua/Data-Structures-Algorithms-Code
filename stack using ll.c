#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node *next;
}*top=NULL;

void push(int x){
 struct node *t;
 t=(struct node *)malloc(sizeof(struct node));
 if(t==NULL)
 printf("stack overflow");
 else
 {
 t->data=x;
 t->next=top;
 top=t;
}
}
int pop( ){
 struct node *t;
 int x;
 if(top==NULL)
 printf("stack is empty\n");
 else
 {
  t=top;
  top=top->next;
  x=t->data;
  free(t);
  
 }
 return x;
 
}
void display(){
 struct node *p;
 p=top;
 while(p){
  printf("%d\n",p->data);
  p=p->next;
 }
}








int main(){

 push(35);
  push(2);
   push(55);
    push(35);
     push(35);
      push(54); push(7);
       push(35);
       pop();
        pop();
         pop();
          pop();
           pop();
            pop();
             pop();
              pop();
               pop();
                pop();
                 pop();
                 
 display();
}