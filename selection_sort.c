#include <stdio.h>

void selection_sort(int array[], int length);

int main(void)
{
    int numbers[] = {4, 7, 5, 6, 1, 9, 2, 8, 3};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    selection_sort(numbers, length);

    for (int i = 0; i < length; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0; 
}

void selection_sort(int array[], int length)
{
    for (int i = 0; i < length; i ++)
    {
        int min = i;
        for (int j = i; j < length; j++)
        {
            if (array[min] > array[j])
            {
                min = j;
            }
        }
        int temp = array[i];
        array[i] = array[min];
        array[min] = temp;
        
    }
}