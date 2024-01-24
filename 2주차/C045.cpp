#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    int n = N/14;
    int m = N%14;
    int t = 0;
    int r=0;
    int rn=0;
    string answer;

    if(m==1 || m==13){
        answer = "baby";
    }else if(m==2 || m==0){
        answer = "sukhwan";
    }else if(m==5){
        answer = "very";
    }else if(m==6){
        answer = "cute";
    }else if(m==9){
        answer = "in";
    }else if(m==10){
        answer = "bed";
    }else if(m==3 || m==7 || m==11){
        answer = "tu";
        t =1;
        r=2;
    }else if(m==4 || m==8 || m==12){
        answer = "tu";
        t=1;
        r=1;
    }
    if(t==1){
        rn = r+n;
        if(rn<5){
            for(int i=0; i<rn; i++){
                answer = answer + "ru";
            }
        }else{
            answer = answer + "+ru*" + to_string(rn);
        }
    }
    cout << answer;
}   