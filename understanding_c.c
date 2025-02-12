#include <stdio.h>

void sort(int array[], int size)
{
    // Outer loop to control the number of passes
    for(int i = 0; i < size - 1; i++)    
    {
    // Inner loop to compare adjacent elements
        for(int j = 0; j < size - i - 1; j++)
        {
    // Swap if the current element is greater than the next element
            if(array[j] > array[j+1])
            {
              int temp = array[j];
              array[j] = array[j+1];
              array[j+1] = temp;
            }
        }
    }
}
  // Print the sorted array
void printArray(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}
int main()
{
    int array[] = {12, 13, 11, 16, 14, 15, 19, 18, 17, 20};
    int size = sizeof(array)/sizeof(array[0]);    

    sort(array, size);
    printArray(array, size);

    return 0;    
}