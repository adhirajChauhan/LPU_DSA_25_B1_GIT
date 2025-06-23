#include<iostream>
using namespace std;
 
int main()
{
    // int arr[5] = {10, 20, 30, 40};

    // cout << arr[4] << endl;

    int arr[5] = {10,20,30,40,50};

    // cout << "Enter 5 numbers : " << endl;
    // for(int i = 0 ; i < 5; i++){
    //     cin >> arr[i];
    // }

    // cout << "Numbers are : ";
    // for(int i = 0; i < 5; i++){
    //     cout << arr[i] << " ";
    // }

    int sum = 0;
    for(int i : arr){
        sum += i;
    }
    cout << sum << endl;
}