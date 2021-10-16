#include <stdio.h>

int main()
{
    int array[] = { 4,-7,5,0,-12,9,34,5 };
    int iMin, temp;

    for (int j = 0; j < sizeof(array) / sizeof(array[0]) - 1; j++) {
        iMin = j;

        for (int i = j + 1; i < sizeof(array) / sizeof(array[0]); i++) {
            if (array[iMin] > array[i]) {
                iMin = i;
            }
        }

        if (iMin != j) {
            temp = array[iMin];
            array[iMin] = array[j];
            array[j] = temp;
        }
    }

    for (int k = 0; k < sizeof(array) / sizeof(array[0]); k++) {
        printf("%d ", array[k]);
    }
    
    return 0;
}
