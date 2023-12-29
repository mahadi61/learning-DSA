#include<stdio.h>

int main()
{
   int n;
   scanf("%d", &n);

   int array[n];

   for(int i=0; i< n; i++){
    scanf("%d", &array[i]);
   }

   for(int i=0; i< n; i++){
    printf("%d ", array[i]);
   }

   int del;
   scanf("%d", &del);
   for(int i=0; i<n; i++){
    if(array[i] == del){
        for (int j = i; j < n-1; j++)
        {
            array[j] = array[j+1];
        }
        
    }
   }
    printf("\n");
    for(int i=0; i< n-1; i++){
    printf("%d ", array[i]);
   }

    return 0;
}
