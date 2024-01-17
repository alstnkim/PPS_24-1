#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int a=0;
    int arr[10]={};

    for(int i=0; i<N; i++){
        for(int n=0; n<10l; n++){
            cin >> a;
            arr[n] = a;
        }
        sort(arr, arr+10);
        cout << arr[7] << '\n';
    }
    
}   