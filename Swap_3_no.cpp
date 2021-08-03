/*      Write a program to swap three numbers without using fourth variable       */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a , b , c;
    a = 40 ;
    b = 50 ;
    c = 60 ;
    cout << "Before swapping "<< "a = "<< a << " ," << "b = " << b << " ," << "c = " << c << endl;
    
    a = a + b + c ;             // This approach is only works if all 3 nos are either +ve or -ve.
    b = a - (b + c);           
    c = a - (b + c);
    a = a - (b + c);

    cout << "After swapping "<< "a = "<< a << " " << "b = " << b << " ," << "c = " << c << endl;
}