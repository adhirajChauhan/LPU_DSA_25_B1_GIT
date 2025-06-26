#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int s = 0;
    int e = n - 1;
    int mid = (s+e)/2;
    int ans = -1;

    while(s <= e){
        if(arr[mid] = key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = (s+e)/2;
    } 
    return ans;
}
 
int main()
{
    int arr[] = {1,3,3,3,3,5,7,8,8};

    //Find the first and last occurance of 3
    //find the total occurance of 3
}