#include <bits/stdc++.h>
using namespace std;


int main(void) {
  int T,N;
  cin >> T;
  long long n=0.0;

  for(int i=0; i<T; i++){
    cin >> N;
    for(int k=0; k<N; k++){
      n=(n+0.5)*2.0;
    }
    cout << n << '\n';
    n=0.0;
  }

 
}
