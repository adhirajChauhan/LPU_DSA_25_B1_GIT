#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
 
int main()
{
     map<int, string> m1;

     m1[100] = "Person1";
     m1[99] = "Person2";
    //  m1[99] = "Person3";


    //  cout << m1[99] << endl;
    //  cout << m1.size() << endl;

    for (auto i : m1){
        cout << i.first << " " << i.second << endl;
    }
}