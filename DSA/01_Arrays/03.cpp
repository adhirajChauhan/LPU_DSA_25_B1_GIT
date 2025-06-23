#include<iostream>
using namespace std;

//Find maximum element //1732
// int findMax(int arr[], int size){
//     int max = arr[0];
//     for(int i = 1; i < size; i++){
//         if(arr[i] > max){
//             max = arr[i];

//         }
//     }
//     return max;
// }

//Count Even and Odd  //1523
// void countEvenOdd(int arr[], int size){
//     int evenCount = 0;
//     int oddCount = 0;

//     for(int i = 0; i < size; i++){
//         if(arr[i] % 2 == 0) evenCount++;
//         else oddCount++;
//     }
//     cout << "Even : " << evenCount << " Odd : " << oddCount << endl;
// }

//Reverse and Array
void reverseArray(int arr[], int size){
    for(int i = size - 1; i >= 0; i--){
        cout << arr[i] << " "; 
    }
}

//Check id array is palindrome  //125 //hw

//Find the second largest element
// int secondLargest(int arr[], int size){
//     int firstMax = INT_MIN, secondMax = INT_MIN;

//     for(int i = 0; i < size; i++){
//         if(arr[i] > firstMax){
//             secondMax = firstMax;
//             firstMax = arr[i];
//         }

//         else if(arr[i] > secondMax && arr[i] != firstMax){
//             secondMax = arr[i];
//         }
//     }
//     return secondMax;
// }

//Find the first repeating element 

//Check if array is sorted

bool isSorted(int arr[], int size){
    for(int i = 1; i < size; i++){
        if(arr[i] < arr[i-1]) return false;
    }
    return true;
}

//(1,0,0,1,1,1,0) Count the number of zeros and one
// {4,7,8,3,1,10,17}, k = 9 -> count the number of elements greater than k

int main()
{
    // int arr[] = {1,2,3,4,5};
    // countEvenOdd(arr, 5);
    // cout << findMax(arr, 5);
    // cout << secondLargest(arr, 2);
    // if(isSorted(arr,5)) cout << "is sorted" << endl;
    // else cout << "not sorted" << endl;
}