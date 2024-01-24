#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, l;
  cin >> n >> l;
  vector<int> v;

  for(int i=0; i<n; i++){
    int temp;
    cin >> temp;
    v.push_back(temp);
  }


  sort(v.begin(),v.end());

  for(int i=0; i<n; i++){
    if(l >= v[0]){
      l++;
      v.erase(v.begin());
    }else break;
  }

  cout << l;
}