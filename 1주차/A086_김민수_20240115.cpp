#include <bits/stdc++.h>
using namespace std;


int main() {
    int m,n;
    cin >> m >> n;
    string s="";
    vector<pair<string, int>> v;
    int a,b;

    for(int i=m; i<=n; i++){
            a = i/10;
            b = i - a*10;
            if(a==0){
            }else if(a==1){
                s = s+"one";
            }else if(a==2){
                s = s+"two";
            }else if(a==3){
                s = s+"three";
            }else if(a==4){
                s = s+"four";
            }else if(a==5){
                s = s+"five";
            }else if(a==6){
                s = s+"six";
            }else if(a==7){
                s = s+"seven";
            }else if(a==8){
                s = s+"eight";
            }else if(a==9){
                s = s+"nine";
            }

            if(b==0){
                s = s+"zero";
            }else if(b==1){
                s = s+"one";
            }else if(b==2){
                s = s+"two";
            }else if(b==3){
                s = s+"three";
            }else if(b==4){
                s = s+"four";
            }else if(b==5){
                s = s+"five";
            }else if(b==6){
                s = s+"six";
            }else if(b==7){
                s = s+"seven";
            }else if(b==8){
                s = s+"eight";
            }else if(b==9){
                s = s+"nine";
            }
        	v.push_back(pair<string,int>(s, i));
            s="";
    }
    
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++){
        if(i!=0 && i%10==0){
            cout << '\n';
        }
        cout << v[i].second << " ";
    }


}