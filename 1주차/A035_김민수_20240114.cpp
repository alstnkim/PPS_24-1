#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    float n, answer;
    string s;
    for(int i=0;i<N;i++){
        cin >> n;
        answer = n;
        getline(cin, s);
        for(int k=0; k<s.length() ; k++){
           
            if(s[k]=='@'){
                answer = answer*3.0;
            }else if(s[k]=='%'){
                answer = answer+5.0;
            }else if(s[k]=='#'){
                answer = answer-7.0;
            }
        }
        cout << fixed;
         cout.precision(2);
        cout << answer << '\n';
    }


}
