#include<iostream>
using namespace std;

bool Subset(int array1[], int array2[], int SizeArray1, int SizeArray2)
{
    int i = 0;
    int j = 0;

    if (SizeArray2 < SizeArray1)
        return 0;

    while (i < SizeArray1 && j < SizeArray2)
    {
        if (array2[j] < array1[i]) 
        {
            j++;
        }
        else if (array2[j] > array1[i]) 
        {
           return 0;
        }
        else if (array2[j] == array1[i])
        {
            j++;
            i++;
        }
    }
    if (i < SizeArray1)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    const int SizeArray1  = 5;
    const int SizeArray2 = 10;
    int array1[SizeArray1] = {2, 3, 5, 9, 10};
    int array2[SizeArray2] = {1, 2, 3, 5, 9, 10, 11, 13, 15, 17};
   
    if (Subset(array1, array2, SizeArray1, SizeArray2))
    {
        cout<<"Array 1 is subset of Array 2 ";
    }
    else
    {
        cout<<"Array 1 is not a subset of Array 2 ";
    }
    return 0;
}
