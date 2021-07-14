/*
Name : Adams Andrew
       -------------
Date : 7/14/2021
       -------------

*/


#include <stdio.h>
void swap(int *c, int *d );
int bubbleSort(int arr[], int size);
int main()
{
    
    int sort[10] = {100 , 90 , 80, 60, 50, 20, 20, 14, 9}; //Array data to be sorted 
    
    
    bubbleSort(sort, 10);
    

    return 0;
}

/*program to swap data
  The swap program takes two variables and swaps them 
  The variables are pointers because we are trying to 
  swap the content of the particular memory address
*/

void swap(int *c,int *d)
{
    int temp; 
    temp=*c; 
    *c=*d; 
    *d=temp;
}

/* Bubble sort algorithm 
  __________________________________________
  __The algorithm takes two variables, Array 
  and array size. 
  __________________________________________
  The algorithm conatinas a nestsed for loop. 
  it continues to run until it has gone 
  through all the contents of the array.
  __________________________________________
*/ 
int bubbleSort(int arr[], int size){  
    
    for (int i = 0; i<size; i++){
        for(int i = 0; i<size ; i++){
            if( arr[i]< arr[i -1]){
                swap(&arr[i], &arr[i-1]);
            }
            
        }
    }
    for(int i = 0; i<size ; i++){
        printf("%d \t", arr[i]);
    }
    
    return arr[10];
}
