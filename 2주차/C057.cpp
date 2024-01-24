#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int n=0;
    string s;
    vector<pair<int,string>> v;

   for(int i=0; i<N; i++){
        cin >> s;
        n=s.length();
        v.push_back(pair<int, string>(n,s));
   }

    sort(v.begin(), v.end());
    for (int i = 0; i < N; i++){
        if(i>0 && v[i].second==v[i-1].second){
        }else{
            cout <<  v[i].second << '\n';
        }
    }
}   