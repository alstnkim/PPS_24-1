#include <bits/stdc++.h>
using namespace std;

vector<string> split(string str, char Delimiter) {
    istringstream iss(str);             
    string buffer;                   
    vector<string> result;
    while (getline(iss, buffer, Delimiter)) {
        result.push_back(buffer);               
    }
    return result;
}

int main(){
  int m ,n;
  cin >> m >> n; 
  string str;
  int arr[n][2]={{0}};
  int test[n]={0};
  int test1[n]={0};
  int temp[n][2]={{0}};
  int answer[5]={0};

  vector<string> result;
  for(int i = 0; i<5*m+1; i++){
    cin >> str;

    if(i%5!=0){ 
      result = split(str, '#');
      for(int j=1; j<result.size(); j++){
      if(result[j]=="****") test[j-1]++;
      }
    }else{
      if(i==0) continue;
      for(int k=0; k<n; k++){
        if(test[k]==4) answer[0]++;
        else if(test[k]==3) answer[1]++;
        else if(test[k]==2) answer[2]++;
        else if(test[k]==1) answer[3]++;
        else if(test[k]==0) answer[4]++;
      }
      fill_n(test,n,0);
    }
  }

  for(int i=4; i>=0; i--){
    cout << answer[i] << " ";
  }
}