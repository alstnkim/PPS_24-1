#include <bits/stdc++.h>
using namespace std;

int main(){
    double x,y;
    int N;
    cin >> x >> y >> N;
    double a,b;
    double min = x/y;
    double price;

    for(int i=0; i<N; i++){
        cin >> a >> b;
        if(min > a/b){
            min = a/b;
        }
    }

    price = min *1000;
    cout<<fixed;
    cout.precision(2);
    cout << price;

    
}   