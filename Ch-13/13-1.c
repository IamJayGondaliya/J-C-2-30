#include <stdio.h>

/*

    Types of array:

        1. Single dimensional array
            - 1D array
            - Collection of values.
        2. Multi dimensional array
            - 2D array
            - 3D array
            - 4D array
            .
            .
            - ND array
            - Collection of arrays.


    1D array:
        - Syntax:
            var:
                DataType varName = value;
            array:
                DataType arrayName[size] = {val1, val2, .., valN};


        array[0]
        array[1]
        array[2]
*/

int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    // Dynamic
    int array[10];

    // User input in array
    for (int i = 0; i < n; i++)
    {
        printf("Enter array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    // Display array
    for (int i = 0; i < n; i++)
    {
        printf("Array[%d]: %d\n", i, array[i]);
    }

    return 0;
}