//Selection sort -> this algo works by repeatedly finding the minimum element
#include<iostream>
using namespace std;

// void selectionSort(int arr[], int size){
//     for(int i = 0; i < size - 1; i++){
//         int min = i;
//         for(int j = i + 1; j < size;j++){
//             if(arr[j] < arr[min]) min = j;
//         }
//         swap(arr[min], arr[i]);
//     }
// }


//bubble sort

// void bubbleSort(int arr[], int n){
//     for(int i = 0; i < n - 1; i++){
//         bool swapped = false;

//         for(int j = 0; j < n - i -1 ;j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//                 swapped = true;
//             }
//         }
//         if(swapped == false){
//             break;
//         }
//     }
// }


void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int j =i - 1;
        int key = arr[i];

        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

 
int main()
{
    int arr[5] = {5,2,8,1,3}; 

    // selectionSort(arr,5);
    // bubbleSort(arr,5);

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
}