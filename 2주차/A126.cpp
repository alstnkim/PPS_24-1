#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    string s="";
    int c=0;
    int check=0;
    for(int i=1; i<=N; i++){
        s = to_string(i);
        if(s.length()<=2){
            c++;
        }else{
            for(int n=0; n<s.length()-2; n++){
                if(s[n]-s[n+1]==s[n+1]-s[n+2]){
                    check=1;
                }else{
                    check=0;
                    break;
                }
                
            }
            if(check==1){
                c++;
            }
        }
        check=0;
    }
    cout << c;
    
}   