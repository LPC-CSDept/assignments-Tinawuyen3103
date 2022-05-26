#include <iostream>
using namespace std;

bool Subset(int array1[], int array2[], int SizeArray1, int SizeArray2)
{
    int i = 0, j = 0;
    for (i = 0; i < SizeArray2; i++) {
        for (j = 0; j < SizeArray1; j++) {
            if (array1[i] == array2[j])
                break;
        }
        if (j == SizeArray1)
        return 0;
    }
    return 1;
}