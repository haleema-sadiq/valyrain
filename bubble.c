#include<stdio.h>
int main()
{

   int n, swap, i, j, arr[30];

   printf("How many numbers are u going to enter?: ");
   scanf("%d",&n);

   printf("Enter %d numbers: ",n);

   for(i=0;i<n;i++)
   scanf("%d",&arr[i]);

   /* This is the main logic of bubble sort algorithm 
    */
   for(i=n-2;i>=0;i--)
   {
      for(j=0;j<=i;j++)
      {
        if(arr[j]>arr[j+1]){
           swap=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=swap;
        }
      }
   }

   printf("Sorted elements: ");
   for(i=0;i<n;i++)
      printf(" %d",arr[i]);

   return 0;
}
