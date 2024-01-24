#include <bits/stdc++.h>
using namespace std;

int check[2000005];
int arr[100005];

int main(void) {
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int x;
    cin >> x;
    int count=0;

    for(int i=0; i<n; i++){ 
    if(check[x-arr[i]]==1){
            count++;
        } 
    check[arr[i]]++;
    }
    
    cout << count;
}