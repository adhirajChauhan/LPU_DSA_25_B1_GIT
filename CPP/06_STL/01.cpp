#include<iostream>
#include<vector>
using namespace std;
 
int main()
{
    vector<int> v1;

//Adding
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);


//Access
    // cout << v1[0];
    // cout << v1.at(1);

//iterate
    // for(int i = 0; i < v1.size() ; i++){
    //     cout << v1[i] << endl;
    // }

    for(int i : v1){
        cout << i << endl;
    }


    // Take n integers as input and store them in a vector, then print in reverse
}