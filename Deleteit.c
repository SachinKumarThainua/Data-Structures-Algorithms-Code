#include <stdio.h>
#include<stdlib.h>

struct Array
{
  int A[7];
  int size;
  int length;
};
void
display (struct Array arr)
{
  int i;
  printf ("Elements are\n");
  for (i = 0; i < arr.length; i++)
    {
      printf ("//n%d", arr.A[i]);
    }
}

void
append (struct Array *arr, int x)
{
  if (arr->length <= arr->size)
    {
      arr->A[arr->length] = x;
      arr->length++;
    }
}

void
insert (struct Array *arr, int index, int x)
{
  if (index >= 0 && index <= arr->length)
    {
      for (int i = arr->length; i > index; i--)
	{
	  arr->A[i] = arr->A[i-1];
	}
    }
  arr->A[index] = x;
  arr->length++;
}
int deleteit(struct Array *arr,int index){
 int x;
 x=arr->A[index];

 for(int i=index;i<arr->length-1;i++){
  arr->A[i]=arr->A[i+1];
 }
 arr->length--;
  return x;
}
int
main ()
{
  struct Array arr = { {2, 3, 4, 5, 6}, 7, 5 };
  append (&arr, 20);
  insert (&arr, 0, 35);
  insert (&arr, 6, 67);
 
  printf("\n%d\n",deleteit(&arr,0));
   display (arr);
  return 0;
}