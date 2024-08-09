#include<stdio.h>
#include<stdlib.h>
struct stack {
 int size ;
 int top;
 int *s;
};
void create(struct stack *st )
{
  printf("enter size :");
  scanf("%d",& st->size);
  st->top=-1;
  st->s=(int *)malloc(st->size*sizeof(int));
  
}
void display(struct stack st)
{
 int i;
 for(i=st.top;i>=0;i--)
 printf("%d\n",st.s[i]);
 printf("\n");
 
}
void push(struct stack *st,int x){
 if(st->top==st->size-1)
 printf("stack overflow");
 else
 {
  st->top++;
  st->s[st->top]=x;
 }
}
int pop(struct stack *st){
 
 int x=-1;
 if(st->top==-1){
  printf("stack underflow\n");
 }
 else
 {
  x=st->s[st->top--];
  
 }
 return x;
 
}
 int peek(struct stack st,int index){
  int x=-1;
  if(st.top-index+1<0)
  printf("invalid index");
  else
  x=st.s[st.top-index+1];
  return x;
 }
int main()
{
 struct stack st;
 create(&st);

 //printf("%d\n",pop(&st));
 //printf("%d\n",pop(&st));
 // printf("%d\n",pop(&st));
// push(&st,90);
 
  push(&st,50);
  push(&st,50);
 push(&st,30);
 display(st);
 
printf("%d",peek(st,3));
 return 0;
}


