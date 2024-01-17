#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[45]={0};
    int n;
    int count=0;
    for(int i=0; i<10; i++){
        cin >> n;
        arr[n%42]++;
    }
    for(int i=0;i<45;i++){
        if(arr[i]!=0){
            count++;
        }
    }
    cout << count;

}
