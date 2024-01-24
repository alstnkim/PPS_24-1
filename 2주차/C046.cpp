#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    string s;
    string answer="";

    for(int i=0; i<N; i++){
        cin >> s;
        for(int n=0; n<s.length(); n++){
            if(s[n]=='Z'){
                answer = answer + 'A';
            }else{
                answer = answer + (char)(s[n]+1);
            }
        }
        cout << "String #" << i+1 << '\n' << answer << '\n' << '\n';    
        answer = "";
    }
}   