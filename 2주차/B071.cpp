#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int arr[n+1] = {0};
  int temp[n+1] = {0};

  for(int i=1; i<=n; i++){
    cin >> arr[i];
  }

  for(int i=1; i<=n; i++){
    int max = arr[i];
    for(int j=1; j<=i; j++){
      if(arr[j]+temp[i-j] > max) max = arr[j] + temp[i-j]; 
    }
    temp[i] = max;
  }

    cout << temp[n];
}