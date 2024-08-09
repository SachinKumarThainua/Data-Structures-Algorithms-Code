#include <stdio.h>
#include<stdlib.h>
struct node 
{
  
int data;
   
struct node *next;
 
} *first = NULL,*second=NULL,*third=NULL;

 
void
create (int m[], int n) 
{
  
int i;
  
struct node *last, *t;
  
first = (struct node *) malloc (sizeof (struct node));
  
first->data = m[0];
  
first->next = NULL;
  
last = first;
  
for (i = 1; i < n; i++)
    
    {
      
t = (struct node *) malloc (sizeof (struct node));
      
t->data = m[i];
      
t->next = NULL;
      
last->next = t;
      
last = t;

} 
} 
void

display (struct node *p) 
{
  
while (p != NULL)
    
    {
      
printf ("%d\n", p->data);
      
p = p->next;
    
}

}


void
rdisplay (struct node *p) 
{
  
 
 
if (p != NULL)
    
    {
      
 
 
 
printf ("%d\n", p->data);
      
rdisplay (p->next);
    
}

}


int
count (struct node *p) 
{
  
int l = 0;
  
while (p != NULL)
    
    {
      
l++;
      
p = p->next;
    
}
  
return l;

}


int
sum (struct node *p) 
{
  
int s = 0;
  
while (p != NULL)
    
    {
      
 
s += p->data;
      
p = p->next;
    
}
  
return s;

}


int
rsum (struct node *p) 
{
  
int rS = 0;
  
if (p == NULL)
    
return 0;
  
  else
    
return p->data + rsum (p->next);

}


int
gmax (struct node *p) 
{
  
int max = -65537;
  
while (p)
    
    {
      
if (p->data > max)
	
max = p->data;
      
p = p->next;
    
}
  
return max;

}


int
rmax (struct node *p) 
{
  
int x = 0;
  
if (p == NULL)
    
return -65537;
  
x = rmax (p->next);
  
if (p->data > x)
    
return p->data;
  
  else
    
return x;

}


struct node *
lsearch (struct node *p, int key) 
{
  
struct node *q = NULL;
  
 
while (p)
    
    {
      
if (key == p->data)
	
	{
	  
q->next = p->next;
	  
p->next = first;
	  
first = p;
	  
return p;
	
}
      
q = p;
      
p = p->next;
    
}
  
return NULL;

 
}


struct node *
rsearch (struct node *p, int key) 
{
  
if (p == NULL)
    
return NULL;
  
if (key == p->data)
    
return p;
  
return 
rsearch (p->next, key);

}
void insert(struct node *p,int index , int x)
{
 struct node *n;
 int i;
 if(index<0 || index>count(p))
 return ;
 n=(struct node *)malloc(sizeof(struct node));
 n->data=x;
 if(index==0)
 {
  n->next=first;
  first=n;
 }
 else
 {
  for(i=0;i<index-1;i++)
  p=p->next;
  n->next=p->next;
  p->next=n;
  
  
 }
}
void sortedinsert(struct node*p,int x)
{
 struct node *t,*q=NULL;
 t=(struct node*)malloc(sizeof(struct node));
 t->data=x;
 t->next=NULL;
 if(first==NULL)
 first=t;
 else
 
 {
  while(p && p->data<x)
  {
   q=p;
   p=p->next;
  }
  if(p==first)
  {
   t->next=first;
   first=t;
  }
  else
  t->next=q->next;
  q->next=t;
 }
 
}
int delete(struct node *p, int index)
{
 struct node *q=NULL;
 int x=-1;
 if(index<1||index>count(p))
 return -1;
 if(index==1)
 {
  p=first;
  x=first->data;
  first=first->next;
  free (p);
  return x;
 }
 else 
 {
  for(int i=0;i<index-1;i++)
  {
   q=p;
   p=p->next;
  }
  q->next=p->next;
 x=p->data;
 free(p);
 return(x);
 }
}
 void removeduplicate(struct node *p)
 {
  p=first;
  struct node*q=p->next;
  while(q!=NULL)
  {
   if(p->data!=q->data)
   {
    p=q;
    q=q->next;
   }
   else
   {
    p->next=q->next;
    free (q);
    q=p->next;
   }
  }
 }

void reverse1(struct node *p)
{
 int *A,i=0;
 A=(int*)malloc(count(p)*sizeof(int));
 while(p!=NULL)
 {
  A[i]=p->data;
 
  i++;
   p=p->next;
 }
 p=first;
 i--;
 while(p)
 {
  p->data=A[i];
  p=p->next;
  i--;
 }
}



  
int checksorted(struct node *p)
{
   int x=-32768;
 while(p)
 {

  
  if(p->data<x)
  return 0;
  x=p->data;
  p=p->next;
 }
 return 1;
}
void reverse2(struct  node *p)
{
 struct node *q=NULL,*r=NULL;
 while(p)
 {
  r=q;
  q=p;
  p=p->next;
  q->next=r;
 }
 first=q;
}
void
reverse3(struct node *q,struct node *p)
{
 if(p)
 {
  
  reverse3(p,p->next);
  p->next=q;
 }
 else
 first=q;
}
void
create2 (int m[], int n) 
{
  
int i;
  
struct node *last, *t;
  
second = (struct node *) malloc (sizeof (struct node));
  
second->data = m[0];
  
second->next = NULL;
  
last = second;
  
for (i = 1; i < n; i++)
    
    {
      
t = (struct node *) malloc (sizeof (struct node));
      
t->data = m[i];
      
t->next = NULL;
      
last->next = t;
      
last = t;

} 
} 
void concat(struct node *p,struct node *q)
{
 third=p;
 while(p->next!=NULL)
 {
  p=p->next;
 }
 p->next=q;
 q=NULL;
}
void mergelink(struct node *p,struct node *q)
{
 struct node *last;
 if(p->data<q->data)
 {
  third=last=p;
  p=p->next;
  last->next=NULL;
 }
 else{
   third=last=q;
  q=q->next;
  last->next=NULL;
 }
 while(p && q)
 {
  if(p->data<q->data)
  {
   last->next=p;
   last=p;
   p=p->next;
   last->next=NULL;
  }
  else{
   last->next=q;
   last=q;
   q=q->next;
   last->next=NULL;
  }
 }
 if(p)
 last->next=p;
 else
 last->next=q;
}
int
main ()
  {
   
  
int m[] = {1 ,2,3,3 ,4 };
  int n[]={4,65,3,46,74,35,35,55};
create (m, 5);
  create2(n,8);
  
 //sortedinsert(first,22);
// display(first);
 //delete(first,1);
 //display(first);
 //delete(first,3);
 //display(first);

 
 //if(checksorted(first))
 //{
  //printf("sorted");
 //}
 //else
 //printf("linked list not sorted");
// removeduplicate(first);
//reverse3(NULL,first);
//display(first);
//concat(first,second);
mergelink(first,second);

display(third);
return 0;

}


