//
// Created by Seo_Hyun on 18-Jan-20.
//

#include<bits/stdc++.h>

using namespace std;

int main() {
    freopen("race.in", "r", stdin);
    freopen("race.out", "w", stdout);
    int k, n;
    int ox;
    cin >> ox >> n;
    for (int i = 0; i < n; ++i) {
        int x = ox;
        cin >> k;
        for (int j = 1;; ++j) {
            int t = j;
            if (j >= k) t += j;
            if (t > x) {
                if(i) printf("\n");
                if (j <= k) {
                    if (!x) printf("%d", j - 1);
                    else printf("%d", j);
                } else if (!x) printf("%d", 2 * j - k - 1);
                else if (x <= j) printf("%d", 2 * j - k);
                else printf("%d", 2 * j - k + 1);
                break;
            }
            x -= t;
        }
    }
}