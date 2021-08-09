//Wap to find the addresses of an array and its elements
#include<stdio.h>
int main()
{
  int a[10],n, *ptr;
  printf("\n ENTER THE SIZE OF THE ARRAY");
  scanf("%d",&n);

  printf("\n enter the array elements:");
  for(int i=0;i<n;i++)
  {
    scanf("%d", &a[i]);
  }
  ptr=&a[0];
  printf("\n %d", ptr);
  for(int i=0; i<n; i++)
  {
    printf(" %d ",ptr);
    ptr++;
  }
}
