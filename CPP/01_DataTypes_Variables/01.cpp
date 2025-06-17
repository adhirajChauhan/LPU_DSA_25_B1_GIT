#include<iostream>
using namespace std;


// int -> 4 byte -> 5
// float -> 4 byte -> 5.7
//double -> 8 byte -> 5.77777
// char -> 1 byte -> 'a'
// bool -> 1 byte -> true/false





int main()
{
    int num;
    cout << "Enter a number : " << endl;
    cin >> num;

    cout << "Number is : " + num;
}