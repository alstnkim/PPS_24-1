#include <iostream>
using namespace std;

 int main(){
      int n;
      cin >> n;
      int a=0;
      int b=0;
      int c=0;
      int flag = 0;

      if(n%10!=0){
        cout << -1;
      }else{
        while(n!=0){
          if(n>=300){
            a++;
            n -= 300;
          }else if(n>=60){
            b++;
            n -= 60;
          }else if(n>=10){
            c++;
            n -= 10;
          }else{
            flag = 1;
            break;
          }
        }
        if(flag == 0){
          cout << a << " " << b << " " << c;
        }else cout << -1;
      }
}