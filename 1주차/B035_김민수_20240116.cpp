#include <iostream>
using namespace std;

 int main(){
    int n,sum;
    cin >> n;
    cin >> sum;
    int answer = 0;
    int a[100] = {0};
    for(int i=0; i<n; i++){
      cin >> a[i];
    }
    while(sum != 0){
      for(int i=n-1; i>=0; i--){
        if(sum>=a[i]){
          answer++;
          sum -= a[i];
          break;
        }
      }
    }
    cout << answer;
}