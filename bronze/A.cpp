#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);
    int n, s;
    cin >> n >> s;
    vector<string> v;
    v.resize(n);
    for(int i=0;i<n;++i) {
        cin >> v[i];
    }
    int sn=0;
    for(int i=0;i<n;++i) {
        if(sn && sn+v[i].length()>s) {
            printf("\n");
            sn=0;
        }
        if(sn) printf(" ");
        printf("%s", v[i].c_str());
        sn+=v[i].length();
    }
    return 0;
}
