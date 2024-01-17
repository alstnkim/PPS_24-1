#include <iostream>
using namespace std;

string sum(string a, string b){
  string answer;
  answer = "";
  int lenA = a.length();
  int lenB = b.length();
  for(int i=0; i<lenA-lenB; i++){
    b = "0" + b;
  }
  int carry = 0;
  for(int i=a.length()-1; i>=0; i--){
    int x,y,sum;
    x = a[i]-'0';
    y = b[i]-'0';
    sum = x+y+carry;
    if(sum >= 10){
      carry = 1;
      sum = sum%10;
    }else carry = 0;

    char digit = sum + '0';
    answer = digit + answer;
  }

  if(carry==1){
    answer = "1" + answer;
  }

  return answer;
}

 int main(){
      int n;
      cin >> n;
      string a = "1";
      string b = "1";
      string answer;
      if(n>2){
        for(int i = 2; i<n; i++){
          answer = sum(b,a);
          a = b;
          b = answer;
        }
        cout << answer;
      }else cout << "1";
}