#include <iostream>
using namespace std;

// basic arithmetic functions
int sum(int a, int b)
{
    return a + b;
}
int multi(int a, int b)
{
    return a * b;
}
int sub(int a, int b)
{
    return a - b;
}
double divide(double a, double b)
{
    return double(a / b);
}
// recursive function
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    // int a = 77;
    // int b = 92;
    // cout << "your program ran\n";
    // cout << "The sum of " << a << " and " << b << " is:\n" <<sum(a,b)<<"\n";
    // cout << "The difference between " << a << " and " << b << " is:\n" <<sub(a,b)<<"\n";
    // cout << "The product of " << a << " and " << b << " is:\n" <<multi(a,b)<<"\n";
    // cout << "division between " << a << " and " << b << " results:\n" <<divide(a,b)<<"\n";
    // cout << factorial(100);
    int arr[5] = {1, 2, 3, 4, 5};
    int *arrPtr = arr; // pointer to the beginning of the array

    int thirdElement = *(arrPtr + 2); // access the third element using pointer arithmetic

    cout << thirdElement;
    return 0;
}