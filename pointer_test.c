#include<stdio.h>
void main()
{
  int a[10]={1,2,3,4};
  int *ptr;
  ptr=a;
  for(int i=0;i<4;i++)
  {
    printf("\n%d",*ptr);
    ptr=ptr+1;
  }

}
