#include<iostream>
using namespace std;
 
int main()
{
    // int num = 5;

    // if(num > 3){
    //     cout << "1" << endl;
    // }

    // else{
    //     cout << "2" << endl;
    // }

    int a = 5, b = 5;

    if((a++ == 5) && (++b == 6) || (a == 7)){
        cout << "1" << endl;
    }
    else{ cout << "2" << endl;}

    cout << "a = " << a << " b = " << b << endl;

}