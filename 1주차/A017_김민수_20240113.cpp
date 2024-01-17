#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[10]={};
    while(N!=0){
        arr[N%10]++;
        N=N/10;
    }
    
    int max=ceil((arr[6]+arr[9])/2.0);

    for(int i=0; i<10; i++){
        if(i!=6 && i!=9){
            if(arr[i]>max){
            max=arr[i];
        }
        }
    }

    cout<<max;


}