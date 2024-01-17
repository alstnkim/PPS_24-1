#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int n;
    vector <int> v;
    vector <int> v1;
    vector <int> v2;
    vector <int> v3;
    vector <int> v4;
    string s1="",s2="";
    int sum=0;

    int check=1;
    for(int i=0; i<N; i++){
        cin >> n;  
        
        while(n>0){
            v1.push_back(n%10);
            n=n/10;
        }
        v2 = v1;
        reverse(v1.begin(), v1.end());
        for(int n=0; n<v1.size(); n++){
            s1 = s1+to_string(v1[n]);
            s2 = s2+to_string(v2[n]);

        }
        sum = stoi(s1)+stoi(s2);

         while(sum>0){
            v3.push_back(sum%10);
            sum=sum/10;
        }
        v4 = v3;
        reverse(v3.begin(),v3.end());

        for(int k=0; k<v3.size(); k++){
            if(v3[k]!=v4[k]){
                check=0;
                break;
            }
        }
        
        if(check){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }

       check=1;
        v1=v;
        v2=v;
        v3=v;
        v4=v;
        s1="";
        s2="";
        sum=0;

    }
  
}   