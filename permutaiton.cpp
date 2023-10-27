// accepted

#include <iostream>
using namespace std;

void solve(){
    int n; cin >> n;
    if(n == 1) cout << 1 << endl;
    if(n > 1 && n < 4) cout << "NO SOLUTION" << endl;
    else{
        for(int i = 1; i <= n; i++){
            if(i % 2 == 0){
                cout << i << " ";
            }
        }
        for(int i = 1; i <= n; i++){
            if(i & 1){
                cout << i << " ";
            }
        }
    }
}

int main(){
    solve();
    return 0;
}