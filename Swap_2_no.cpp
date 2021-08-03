/*      Write a program to swap two numbers using third variable       */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a , b , temp;
    a = 10; b = 20;
   // cin >> a >> b ;
    cout << "Before swapping "<< "a = "<< a << " " << "b = " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping "<< "a = "<< a << " " << "b = " << b << endl; 

}