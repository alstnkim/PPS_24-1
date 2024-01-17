#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int x;
    cin >> x;
    int n=1;
    int index=1;
    int sum=2;
    int fn=1;

    for(int i=1; i<15000; i++){
        n=n+i;
        if(n>x){
            sum=i+1;
            break;
        }
    }

    for(int i=2; i<sum; i++){
        fn=fn+i-1;
    }

    int sub = x-fn;
    if(sum%2!=0){
        cout << sub+1 << "/" << sum-sub-1;
    }else{
        cout << sum-sub-1 << "/"<< sub+1  ;
    }
    
    
    }
