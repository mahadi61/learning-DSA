#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int array[n+1]; 
    
    // storing the value in the array
    for(int i=0; i<n; i++){
      scanf("%d", &array[i]);
    }
    // printing the value of the array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    int value, pos;
    scanf("%d %d", &value, &pos);

    // inserting the value in the given position
    for (int i = n ; i >= pos; i--) {
        array[i] = array[i - 1];
    }

    array[pos]= value;

    // printing the updated array
    for (int i = 0; i < n+1; i++)
    {
        printf("%d ", array[i]);
    }
    
    return 0;
}