#include <stdio.h>

void bubble_sort(int array[], int length);

int main(void)
{
    int numbers[] = {3, 4, 7, 5, 6, 1, 8, 9, 2};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    bubble_sort(numbers, length);

    for (int i = 0; i < length; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}

void bubble_sort(int array[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}