#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N;
    cin >> N;
    int A[50]={};
    int B[50]={};
    int tmp;

    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    for(int i=0; i<N; i++){
        cin >> B[i];
    }
    for(int i=0; i<N; i++){
        for(int n=0; n<N-1; n++){
            if(A[n] > A[n+1]){
                tmp=A[n];
                A[n]=A[n+1];
                A[n+1]=tmp;
                }
            if(B[n] < B[n+1]){
                tmp=B[n];
                B[n]=B[n+1];
                B[n+1]=tmp;
                }  
            }
    }
    int S=0;
    for(int i=0; i<N; i++){
        S=S+A[i]*B[i];
    }
    cout << S;

    }
