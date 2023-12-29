#include<stdio.h>

int main()
{
    // 1st array
   int a;
   scanf("%d", &a);
   int array1[a];
   for(int i=0; i<a;i++){
    scanf("%d", &array1[i]);
   }
  // 2nd array 
   int b;
   scanf("%d", &b);
   int array2[b];
   for(int i=0; i<b;i++){
    scanf("%d", &array2[i]);
   }

   //new array for copy
   int n = a+b;
   int new_array[n];
   for (int i = 0; i < n; i++)
   {
     new_array[i]= array1[i];
   }
   
   for (int i = 0; i < b; i++)
   {
    new_array[a+i] = array2[i];
   }


   for(int i=0; i<n; i++){
    printf("%d ", new_array[i]);
   }
    return 0;
}
