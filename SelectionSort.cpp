#include<iostream>
using namespace std;
void selectionSort(int Arr[], int n){ //input an array and it's size
int min_element = 0, temp = 0;
    for(int i = 0; i < n; i++){
        min_element = Arr[i]; 
        for(int j = i+1; j < n; j++){
            if(Arr[j] < min_element){ // Swap
                temp = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = temp;
            }
        }
    }
}
int main(){
    int A[] = {7, 5, 2, 3, 1, 4};

    selectionSort(A, 6);

    for(int i = 0; i < 6; i++){
        cout << A[i] << " ";
    }
}