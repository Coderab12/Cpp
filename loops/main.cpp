#include <iostream>
using namespace std;

int main(){
    int index = 0;
    cout << "for loop \n";
    for (int i = 0; i <= 10; i++)
    {
        cout << i <<"\n";
    }
    cout << "while loop \n";
    while (index <= 10)
    {
        cout << "The value of index is: " << index <<endl;
        ++index;
    }
    cout << "while-do loop \n";
    do
    {
        cout << "The value of index is: " << index <<endl;
    } while (index <= 0);
    
    
    
    return 0;
}
