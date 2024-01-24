#include <bits/stdc++.h>
using namespace std;

int cal(int n){
  int arr[10] = {0};
  int sum = n;
  int count = 0;
  while(n>0){
    arr[count] = n%10;
    n /= 10;
    count++;
  }

  for(int i=0; i<count; i++){
    sum += arr[i];
  }
  return sum;
}

int main(){
  int n;
  cin >> n;
  int min = n;

  for(int i=n; i>0; i--){
    if(n == cal(i)){
      if(min > i) min = i;
    }
  }
  if(min == n) cout << 0;
  else cout << min;  
}