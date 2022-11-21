#include<iostream>
using namespace std;

void DisplayArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void insert(int arr[], int arr_size, int element, int capacity, int index){
    if(arr_size >= capacity){
        //return -1;
        cout << "Insertion failed" << endl;
    }
    // start moving each element to its right starting from extreme right until your target index
    for(int i = arr_size-1; i >= index; i--){
        arr[i + 1] = arr[i]; 
    }
    //place your element at target index
    arr[index] = element;
    //return 1;
    cout << "Insertion successful" << endl;
}

int main()
{
    int arr[100] = {1, 2, 3, 4, 5};
    int arr_size = 5, element = 17, index = 3;
    DisplayArray(arr, arr_size);

    insert(arr, arr_size, element, 100, index);

    arr_size++;

    DisplayArray(arr, arr_size);
    return 0;
}