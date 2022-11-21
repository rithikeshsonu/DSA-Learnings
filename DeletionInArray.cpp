#include<iostream>
using namespace std;

void DisplayArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void deletion(int arr[], int arr_size, int index){
    // start moving each element to its left starting from next to target index
    for(int i = index; i < arr_size-1; i++){
        arr[i] = arr[i + 1]; 
    }
}

int main()
{
    int arr[100] = {1, 2, 3, 4, 5};
    int arr_size = 5, element = 17, index = 2;
    DisplayArray(arr, arr_size);
    deletion(arr, arr_size, index);
    arr_size--;
    DisplayArray(arr, arr_size);
    return 0;
}