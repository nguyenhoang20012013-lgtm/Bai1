#include<bits/stdc++.h>
using namespace std;
int n, k, a[1000005], ok;
void ktao(){
    for(int i = 1; i <= n; i++) {
        a[i] = 0;
    }
}
void sinh(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == 0) ok = 0;
    else a[i] = 1;
}
bool check(){
    int cnt = 0, dem = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] == 0) ++cnt;
        else cnt = 0;
        if (cnt > k) return false;
        if (cnt == k) ++dem;
    }
    return dem == 1;
}
int main(){
    int s = 0;
    cin >> n >> k;
    ktao();
    ok = 1;
    while(ok){
        if(check()){
            s++;
        }
        sinh();
    }
    cout << s << endl;
    ktao();
    ok = 1;
    while(ok){    
        if(check()){
            for(int i = 1; i <= n; i++){
                if(a[i] == 0) cout << 'A';
                else cout << 'B';
            }
            cout << endl;
        }
        sinh();
    }
}
