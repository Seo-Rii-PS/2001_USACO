//
// Created by Seo_Hyun on 18-Jan-20.
//

#include<bits/stdc++.h>

using namespace std;

struct data {
    int x, s;

    bool operator<(const data &r) const {
        return x * (r.s + 1) < r.x * (s + 1);
    }
};

int n, k, d;
priority_queue<data> pq;
vector<int> v;

int main() {
    freopen("berries.in", "r", stdin);
    freopen("berries.out", "w", stdout);
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        pq.push({t, 0});
    }
    for (int i = 0; i < k; ++i) {
        data t = pq.top();
        pq.pop();
        ++t.s;
        pq.push(t);
    }
    while (!pq.empty()) {
        data t = pq.top();
        pq.pop();
        if(!t.s) continue;
        for (int i = 0; i < t.s; ++i) v.push_back(t.x / t.s + (t.x % t.s > i));
    }
    sort(v.begin(), v.end());
    for(int i=0;i<k/2;++i) d+=v[i];
    printf("%d\n", d);
}