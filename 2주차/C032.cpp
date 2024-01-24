#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin >> N;
    long long a=1;
    long long n=1;
    
    while(a<N){
        a=a+6*n;
        n++;
    }
    cout << n ;
    
}   