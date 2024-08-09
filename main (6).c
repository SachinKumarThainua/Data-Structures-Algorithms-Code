/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct Rectangle
{
  int length;
  int breadth;
};
int
area (struct Rectangle r1)
{
 r1.length=40;
 r1.breadth=20;
  return r1.length*r1.breadth;

}

int
main ()
{
  struct Rectangle r={10,5};
  printf ("%d", area (r));
  return 0;
}
