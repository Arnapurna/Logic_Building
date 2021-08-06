/*      Write a program to check given no is even or odd       */
#include<bits/stdc++.h>
using namespace std;

int main(){
    int no;
    //no = 15;
    cin >> no;
    if(no %2 == 0){
        cout << no << " is even";
    }
    else{
        cout << no << " is odd";   
    }
}