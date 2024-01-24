#include <bits/stdc++.h>
using namespace std;
   

int main(){
   int N,n;
   cin >> N;
   vector <int> v;
   vector<pair<int, int>> v1;
   int sum=0;
   double a = 0.0;
   int b=0,c=0,d=0;
   int count = 0;
   int arr[8001] = {0};

   for(int i=0; i<N; i++){
    cin >> n;
    v.push_back(n);
    sum = sum + n;   
   }

    a = (sum+0.0)/(N+0.0);
    int answer = round(a);
    sort(v.begin(),v.end());
    b = v[(N-1)/2];
    d = v.back()-v[0];

     for (int i = 0; i < N;i++){
        arr[v[i] + 4000]++;
    }
    int max=0;
    for(int i=0; i<8001; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    for (int i = 0; i < 8001;i++){
        if(arr[i] == max){
            count++;
            c = i - 4000;
        }
        if(count == 2){
            break;
        }
    }
    cout <<  answer << '\n' << b << '\n' << c << '\n' << d;
}   