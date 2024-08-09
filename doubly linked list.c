#include<stdio.h>
#include<stdlib.h>

struct node
{
  struct node *prev;
  int data;
  struct node *next;

} *first = NULL;
void
create (int A[], int n)
{

  struct node *t, *last;
  int i;
  first = (struct node *) malloc (sizeof (struct node));
  first->data = A[0];
  first->prev = first->next = NULL;
  last = first;
  for (i = 1; i < n; i++)
    {
      t = (struct node *) malloc (sizeof (struct node));
      t->data = A[i];
      t->next = NULL;

      last->next = t;
      t->prev = last;
      last = t;
    }
}

void
display (struct node *p)
{

  while (p)
    {
      printf ("%d\n", p->data);
      p = p->next;
    }

}

void
insert (struct node *p, int index, int x)
{

  struct node *t;
  int i;
  if (index == 0)
    {


      t = (struct node *) malloc (sizeof (struct node));
      t->data = x;
      t->prev = NULL;
      t->next = first;
      first->prev = t;
      first = t;
    }
  else if (index > 0)
    {

      t = (struct node *) malloc (sizeof (struct node));
      t->data = x;
      for (i = 0; i < index - 1; i++)
	{
	  p = p->next;
	}
      t->prev = p;
      t->next = p->next;
      p->next->prev = t;
      p->next = t;
    }


}

int
delete (struct node *p, int index)
{

  p = first;
  int x = -1;
  if (index == 1)
    {
      first = first->next;
      x = p->data;
      p->next = NULL;
      first->prev = NULL;
      free (p);
    }

  if (index > 1)
    {

      for (int i = 0; i < index - 1; i++)
	{
	  p = p->next;
	}
      p->prev->next = p->next;
      p->next->prev = p->prev;
      x = p->data;
      free (p);
    }
  return x;
}

void
reverse (struct node *p)
{
  struct node *temp;
  p = first;
  while (p)
    {
      temp = p->next;
      p->next = p->prev;
      p->prev = temp;
      p = p->prev;
      if (p)
	{


	  if (p->next == NULL)
	    first = p;

	}

    }
}

int
main ()
{



  int A[] = { 2, 5, 8, 9, 13, 54 };
  create (A, 6);
  //insert(first,0,89);
// delete(first,4);
  reverse (first);
  display (first);
}
