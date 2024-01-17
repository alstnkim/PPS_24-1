#include <bits/stdc++.h>
using namespace std;


int main() {
   string s;
   cin >> s;
   string copy = s;
   int c=0;
   int n = s.length();

   while(s!=""){
    if(s[0]=='d' && s[1]=='z' && s[2]=='='){
        c++;
        s.erase(0,3);
        continue;
        }
    if(s[0]=='c' && s[1]=='='){
        c++;
        s.erase(0,2);
    }else if(s[0]=='c' && s[1]=='-'){
        c++;
        s.erase(0,2);
    }else if(s[0]=='d' && s[1]=='-'){
        c++;
        s.erase(0,2);
    }else if(s[0]=='l' && s[1]=='j'){
        c++;
        s.erase(0,2);
    }else if(s[0]=='n' && s[1]=='j'){
        c++;
        s.erase(0,2);
    }else if(s[0]=='s' && s[1]=='='){
        c++;
        s.erase(0,2);
    }else if(s[0]=='z' && s[1]=='='){
        c++;
        s.erase(0,2);
    }else{
        c++;
        s.erase(0,1);
    }
   }
    cout << c;
}