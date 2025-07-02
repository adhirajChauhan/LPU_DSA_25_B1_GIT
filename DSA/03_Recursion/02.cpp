#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    //base
    if(size == 0||size == 1) return true;

    if(arr[0] > arr[1]) return false;

    else{
        return isSorted(arr+1, size -1);
    }
}

int getSum(int arr[], int size){
    if(size == 0) return 0;
    if(size == 1) return arr[0];

    int remainingPart = getSum(arr+1, size -1);
    int sum = arr[0] + remainingPart;
    return sum;

}

bool linearSearch(int arr[], int size, int k){
    if(size == 0) return false;

    if(arr[0] == k) return true;
    else{
        return linearSearch(arr+1, size -1, k);
    }
}

bool binarySearch(int arr[], int s, int e, int k){
    if(s > e) return false;
    int mid = (s+e)/2;
    if(arr[mid] == k) return true;
    if(arr[mid] < k){
        return binarySearch(arr, mid +1, e, k);
    }
    else{
        return binarySearch(arr, s, mid - 1, k);
    }
}
 
int main()
{
 
}