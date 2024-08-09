/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void swap(int *x,int *y){
 
 int temp=*x;
 *x=*y;
 *y=temp;
}
 void bubble(int a[],int n){
  int i,j,flag=0;
  for(i=0;i<n-1;i++){
   for(j=0;j<n-1-i;j++){
    if(a[j]>a[j+1])
    swap(&a[j],&a[j+1]);
    flag=1;
   }
   if(flag==0)
   break;
  }
 }
int main()
{
 
int aa[]={4,9,8,33,4,54,67,54,76,5},n=10;
bubble(aa,10);
for(int i=0;i<n;i++){
 printf("%d\n",aa[i]);
}
  return 0;
}
