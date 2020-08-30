//
// Created by Seo_Hyun on 18-Jan-20.
//

#include<bits/stdc++.h>

using namespace std;

int n;
int a[1005];

int main() {
    freopen("photo.in", "r", stdin);
    freopen("photo.out", "w", stdout);
    cin >> n;
    for (int i = 0; i < n - 1; ++i) cin >> a[i];
    vector<int> v;
    vector<bool> c;
    for (int i = 1; i <= n; ++i) {
        int j;
        v.clear();
        c.clear();
        v.resize(n+1);
        c.resize(n+1);
        v[0] = i;
        for (j = 1; j < n; ++j) {
            if (a[j - 1] - v[j - 1] < 1 || a[j - 1] - v[j - 1] > n || c[a[j - 1] - v[j - 1]]) break;
            v[j] = a[j - 1] - v[j - 1];
            c[a[j - 1] - v[j - 1]] = true;
        }
        if (j == n) {
            for (int j = 0; j < n; ++j) {
                if (j) cout << ' ';
                cout << v[j];
            }
        }
    }
}