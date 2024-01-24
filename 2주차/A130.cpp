#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int a;
    vector<int> v;
    int sum=0;

    for(int i=0; i<N; i++){
        cin >> a;
        if(a!=0){
            v.push_back(a);
        }else{
            v.erase(v.end()-1);
        }
    }

    for(int i=0; i<v.size(); i++){
       sum = sum + v[i];
    }

    cout << sum;

}   