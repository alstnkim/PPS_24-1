#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int a,b;
    int min=0;
    int m = 1;
    bool flag=true;

    for(int i=0; i<N; i++){
        cin >> a >> b;
        if(a>b){
            min=b;
        }else{
            min=a;
        }
        while(flag){
            for(int n=2; n<=min; n++){
                if(a%n==0 && b%n==0){
                    m = m*n;
                    a = a/n;
                    b = b/n;
                    min = min/n;
                    flag = true;
                    break;
                }else{
                    flag = false;
                }
            }
            if (min==1){
                flag=false;
            }
        }
        cout << m*a*b << '\n';
        min=0;
        m=1;
        flag = true;
    }
}   