#include <bits/stdc++.h>
using namespace std;

void search(int n, int row, int col, vector<string> &v, int arr[5][5], string s){
    if(n==6){
      v.push_back(s);
      }
    else{
        char ch = arr[row][col] + '0';
        s += ch;
        if(row<4) search(n+1, row+1, col, v, arr, s);
        if(row>0) search(n+1, row-1, col, v, arr, s);
        if(col<4) search(n+1, row, col+1, v, arr, s);
        if(col>0) search(n+1, row, col-1, v, arr, s);
    }
}

int main(){
    int arr[5][5];
    vector<string> v;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> arr[i][j];
        }
    }

    
    for(int i=0; i<5; i++){
      for(int j=0; j<5; j++){
        search(0,i,j,v,arr,"");
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(),v.end()), v.end());
      }
    }



    sort(v.begin(), v.end());
    v.erase(unique(v.begin(),v.end()), v.end());

    cout << v.size() << endl;
}