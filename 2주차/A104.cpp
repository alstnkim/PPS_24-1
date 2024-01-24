#include <bits/stdc++.h>
using namespace std;

 int main(){
  int n;
  cin >> n;
  int max = 0;
  int sum = 0;
  for(int i=0; i<n; i++){
    int cost;
    cin >> cost;
    if(max < cost) max = cost;
    sum += cost;
  }
  
  cout << sum - max;
}
