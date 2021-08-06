/*      Write a program to check given year is leap year or not       */
#include<bits/stdc++.h>
using namespace std;

int main(){
    int year ;
    //year = 2023;
    cin >> year;
    if(((year%4 == 0) && (year%100 != 0)) ||(year%400 ==0)){
        cout << year <<" is a leap year";
    }
    else{
       cout << year <<" is not a leap year"; 
    }
}