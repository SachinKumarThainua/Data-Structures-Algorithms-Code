#include <stdio.h>
#include<stdlib.h>
struct node 
{
  
int data;
   
struct node *next;
 
} *first = NULL;

 
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
int
main () 
{
  

  
int m[] = {2, 3, 6, 7, 9, 18, 25 };
  
create (m, 7);
  
 sortedinsert(first,22);
 display(first);
 
 
 
 

 
return 0;

}


