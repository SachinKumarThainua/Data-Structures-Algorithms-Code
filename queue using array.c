/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
struct queue {
 int size;
 int front;
 int rear;
 int *Q;
 
};
void create(struct queue *q,int size){
 q->size=size;
 q->front=q->rear=-1;
 q->Q=(int *)malloc(q->size*sizeof(int));
 
}
void enqueue (struct queue *q,int x){
 if(q->rear==q->size-1)
 printf("queue is full\n");
 else{
 q->rear++;
 q->Q[q->rear]=x;}
}
int dequeue(struct queue *q){
 int x=-1;
 if(q->rear==q->front)
 printf("queue is empty");
 else{
 q->front++;
 x=q->Q[q->front];
 }
 return x;
 
}
void display(struct queue q){
 int i;
 for(i=q.front+1;i<=q.rear;i++)
 printf("%d\n",q.Q[i]);
}



int main()
{
  struct queue q;
  create(&q,5);
    printf("%d\n\n",dequeue(&q));
  enqueue(&q,10);
  enqueue(&q,20);
   enqueue(&q,3);
    enqueue(&q,4);
     enqueue(&q,5);
     // enqueue(&q,9);
    
display(q);
    return 0;
}
