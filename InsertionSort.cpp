#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    int value = 0, hole;
    for(int i = 1; i < n; i++){
        value = arr[i];
        hole = i;

        while (hole > 0 && arr[hole-1] > value) //
        {
            arr[hole] = arr[hole-1];
            hole--;
        }

        arr[hole] = value;
    }
}
int main(){
    int a[] = {5, 2, 8, 9, 3, 1, 6};

    insertionSort(a, 7);

    for(int i = 0; i < 7; i++){
        cout << a[i] << " ";
    }
}