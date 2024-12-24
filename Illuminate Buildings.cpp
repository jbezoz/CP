#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    map<int,int> m;
    cin >> n;
    int v[n], temp[n];
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        m[v[i]] = !m.count(v[i]) ? i : m[v[i]];
        temp[i] = i - m[v[i]];
        m[v[i]] = i;
    }
    for(int i : temp) {
        cout << i << " ";
    }
    for(int i = 0; i < n; i++) {
        int start = 0, end = 0;
        int count = 0;
        for(int j = 1; j < n;) {
            if(v[i] == v[j]) {
                count++;
                j += j;
            }
        }
    }
}

