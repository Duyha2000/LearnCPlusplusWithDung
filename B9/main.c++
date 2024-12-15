#include <iostream>

using namespace std;
void selectionSort(int arr[], int size){
    for (int i = 0; i < size -1; i++){
        int min_Index = i; // 0
        for (int j = i+1; j < size; j++){
            if(arr[min_Index] > arr[j]){
                min_Index = j; // 5
            }
        }
        swap(arr[i], arr[min_Index]);
    }
}

void bubbleSort(int arr[], int size){
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - 1; j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    int size = 6;
    int arr[] = {1,0,3,2,9,-2};
//    selectionSort(arr,size);
    bubbleSort(arr,size);
    for(int ele : arr){
        cout << ele << "\t";
    }

    return 0;
}

