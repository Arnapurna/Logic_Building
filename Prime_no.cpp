/*      Write a program to check given no is prime no or not.           */

    //    Prime no : Any whole no greater than 1 , that is divisible only by 1 and itself.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 15 ;
    int count = 0;
    //cin >> n ;

    if(n <= 1){
        cout << "Not Prime" ;
    }
    for(int i = 2; i <=n ;i++){
        if (n % i == 0){
            count++;
        }
    }
    if(count == 1){
        cout << "Prime";
    }
    else{
        cout << "Not Prime";
    }
}