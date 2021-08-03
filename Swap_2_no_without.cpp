/*      Write a program to swap two numbers without using third variable       */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a , b ;

    cin >> a >> b ;          // Let  a = 10 , b = 20 ;

    cout << "Before swapping "<< "a = "<< a << " " << "b = " << b << endl;
    a = a+b ;         
    if(a > b){          // This approach is works on +ve nos.
        b = a-b ;
        a = a-b;
    }
    else{               // This approach is works if one or both nos are -ve
        b = a - b;     
        a = a - b;
    }
    cout << "After swapping "<< "a = "<< a << " " << "b = " << b << endl;
}