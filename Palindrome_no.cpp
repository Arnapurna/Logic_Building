/*      Write a program to check given no is Palindrome or not       */

//     Palindrome number : A palindromic number is a number (such as 16461) that remains the same when its digits are reversed.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int no , rem , new_no = 0 , temp_no;
    //no = 16461;
    cin >> no ;
    temp_no = no;
    while (temp_no >0){
        rem = temp_no % 10 ;
        temp_no = temp_no / 10;
        new_no = new_no * 10 + rem;
    }
    if(new_no == no){
        cout << no <<" is Palindrome";
    }
    else{
        cout << no <<" is not a Palindrome";
    }
    
}