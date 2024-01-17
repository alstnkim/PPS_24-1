#include <bits/stdc++.h>
using namespace std;

int main(void) {
   int N;
   cin >> N;
   int arr[26]={};
   string s;
   char ch;
   int check=0;

   for(int i=0; i<N; i++){
        cin >> s;
        arr[s[0]-97]++;
   }
   for(int i=0; i<26; i++){  
     if(arr[i]>=5){
          ch=(char)(i+97);
          cout << ch;
          check=1;
     }
   }

   if(check==0){
     cout << "PREDAJA";
   }
}
