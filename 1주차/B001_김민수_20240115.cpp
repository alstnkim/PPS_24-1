#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int ch[101];

int main(){
    int c, l, a, b, x, cnt=0;
    vector<int> V[101];
    queue<int> Q;

    cin >> c >> l;
    
    for(int i=0; i<l; i++){
        cin >> a >> b;
        V[a].push_back(b);
        V[b].push_back(a);
    }
    
    Q.push(1);
    ch[1] = 1;

    while(!Q.empty()){
        x = Q.front();
        Q.pop();
        cnt++;

        for(int i=0; i<V[x].size(); i++){
            if(ch[V[x][i]] == 0) {
                ch[V[x][i]] = 1;
                Q.push(V[x][i]);
            }
        }
    }
	
    cout << cnt-1;
    return 0;
}