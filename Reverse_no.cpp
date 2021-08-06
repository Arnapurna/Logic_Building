/*      Write a program to Reverse a no         */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int no , remainder , rev_no = 0 ;
    //no = 909903;
    cin >> no ;

    while (no>0)
    {
        remainder = no % 10;
        no = no / 10;
        rev_no = rev_no *10 + remainder;
    }
    cout << rev_no;
    
}
