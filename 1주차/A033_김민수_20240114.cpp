#include <bits/stdc++.h>
using namespace std;

int main(){
   int sum=0,n=0,max=0;
   int score;

   for(int i=0; i<5; i++){
    for(int n=0; n<4; n++){
        cin >> score;
        sum=sum+score;
    }
    if(sum > max){
        max=sum;
        n=i;
    }
    sum=0;
   }
   cout << n+1 << ' ' << max;
}
