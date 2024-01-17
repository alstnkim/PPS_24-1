#include <bits/stdc++.h>
using namespace std;


int main(void) {
    int n;
    int arr[8]={0};
    for(int i=0; i<8; i++){
        cin >> n;
        arr[i]=n;
    }
    int copy[8]={0};
    for(int i=0; i<8; i++){
        copy[i]=arr[i];
    }
    sort(copy, copy+8);
    int sum=0;
    for(int i=7; i>=3; i--){
        sum = sum + copy[i];
    }
    cout << sum << '\n';

    for(int i=0; i<8; i++){
        for(int n=7; n>=3; n--){
            if(arr[i]==copy[n]){
                cout << i+1 << ' ';
            }
        }
    }
   
}