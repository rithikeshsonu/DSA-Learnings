#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    int temp = 0;
    for(int k = 0; k < n-1; k++){ //for n passes
        int flag = 0;
        for(int i = 0; i < n-k-1; i++){ //for iteration through whole array
            if(arr[i] > arr[i+1]){
                swap(arr[i], arr[i+1]);
                flag = 1;
            }
        }
        if(flag == 0) break; //flag will only remain 0 if the if condition isn't executed. if condition wil not be executed only if the elements are sorted.
    }
}
int main(){
    int a[] = {4, 6, 2, 8, 1, 3};

    bubbleSort(a, 6);
    
    for(int i = 0; i < 6; i++){
        cout << a[i] << " ";
    }
}