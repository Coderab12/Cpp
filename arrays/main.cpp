#include <iostream>
using namespace std;

void print_array(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
}
int copy_array(int arr[],int size){
    int copy_array[size];
    for (int i = 0; i < size; i++)
    {
        copy_array[i] = arr[i];
    }
}

int main(){
    int arr[4] = {1,2,3,4};
    print_array(arr,4);
    return 0;
}
