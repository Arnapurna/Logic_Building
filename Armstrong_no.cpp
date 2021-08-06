/*      Write a program to check given no is Armstrong or not       */

//      An integer no is called Armstrong number , if sum of cubes of each digit is equal to the number itself.
//      e.g,  153 is an Armstrong number because    153 = 1*1*1 + 5*5*5 + 3*3*3

#include<bits/stdc++.h>
using namespace std;

int main(){
    int no , rem ,temp_no ,result = 0;
    //no = 153; 
    cin >> no ;
    temp_no = no;
    while(temp_no>0){
       rem =  temp_no % 10;
       result = result + rem * rem *rem ;
       temp_no = temp_no / 10 ;
    }
    if(no == result){
        cout << no << " is an Armstrong no";
    }
    else{
         cout << no << " is not an Armstrong no";
    }
}