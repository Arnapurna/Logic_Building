/*      Write a program to no of digits in any no       */
#include<bits/stdc++.h>
using namespace std;

int main(){
    int no , rem , count=0;
    //no = 345;
    cin >> no;
    while(no > 0){
        rem = no %10;
        count++;
        no = no/10;
    }
    cout << count;
}