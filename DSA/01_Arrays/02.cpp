#include<iostream>
using namespace std;
 
int sumOfArray(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size - 1; i++){
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[5] = {10,20,30,40,50};

    // sumOfArray(arr);
}