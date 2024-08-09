#include<stdio.h>
#include<stdlib.h>
struct node{
char data;
 struct node *next;
}*top=NULL;

void push (char x){
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
char pop( ){
 struct node *t;
 char x=-1;
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
int isBalanced(char *exp){
 int i;
 for(i=0;exp[i]!='\0';i++){
  if(exp[i]=='(')
  push(exp[i]);
  else if( exp[i]==')'){
   if(top==NULL)
   return 0;
   else
   pop();
  }
 }
 if(top==NULL)
 return 1;
 else
 return 0;
}
int main(){
char *exp="(((a+b)*(c+d)))";
printf("%d",isBalanced(exp));

      
 
}