#include <iostream>
using namespace std;
// function prototyping
int findEleArr(int[], int);

int main()
{
    int a[] = {12, 5, 3, 9};
    cout << findEleArr(a, 2);
    return 0;
}

int findEleArr(int arr[], int index)
{
    int *p = arr;
    return *(p + index);
}