#include <bits/stdc++.h>
using namespace std;

int main(){
   int P;
   cin >> P;
   int m = 1000-P;
   int c=0;
   while(m>0){
    if(m>=500){
        m=m-500;
        c ++;
        continue;
    }
    if(m>=100){
        m=m-100;
        c ++;
        continue;
    }
    if(m>=50){
        m=m-50;
        c ++;
        continue;
    }
    if(m>=10){
        m=m-10;
        c ++;
        continue;
    }if(m>=5){
        m=m-5;
        c ++;
        continue;
    }
    if(m>=1){
        m=m-1;
        c ++;
        continue;
    }
   }

   cout << c;
    
}   