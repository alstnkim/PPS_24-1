#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int c = 0;
  int arr[4] = {1,2,5,7};
  int dp[100001] = {0};
  
  for(int i=1; i<=n; i++){
    int min = i;
    for(int j=0; j<4; j++){
      if(arr[j]<=i){
        if(1+dp[i-arr[j]] < min) min = 1 + dp[i-arr[j]];
      } 
    }
    dp[i] = min;
  }

  cout << dp[n];
}