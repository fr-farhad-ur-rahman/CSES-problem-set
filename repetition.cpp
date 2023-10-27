// wrong answer
#include <iostream>
#include <map>
using namespace std;

void solve(){
    map <char, int> mp;

    string s; cin >> s;
    for(char c: s){
        mp[c]++;
    }

    int mx = 0;
    for(const auto& p: mp){
        mx = max(mx, p.second);
    }
    cout << mx << endl;
}

int main(){
    solve();
    return 0;
}
