#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = (start+end)/2;
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        //right
        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = (start+end)/2;
    }
    return -1;
}
int main()
{
    int arr[] = {3,5,6,8,10,12,15,18};

   cout << "Index of 15 is : " << binarySearch(arr, 8, 15);
}