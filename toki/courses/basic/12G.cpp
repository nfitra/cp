#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <limits>
#include <cstring>
#include <cmath>
#include <unordered_map>

#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define lcase(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define ucase(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define ll long long
#define ull unsigned long long
#define sz(s) sizeof(s) / sizeof(s[0])
#define all(s) x.begin(), x.end()
#define loop(n) for (int i = 0; i < n; i++)
#define arrsort(arr) sort(arr, arr + sizeof(arr) / sizeof(arr[0]))

using namespace std;

void gambarPegunungan(int N) {
    if (N == 1) {
        cout << "*" << endl;
        return;
    }
    
    gambarPegunungan(N - 1);
    
    for (int i = 0; i < N; ++i) {
        cout << "*";
    }
    cout << endl;
    
    gambarPegunungan(N - 1);
}

int main() {
    int N;
    cin >> N;
    
    gambarPegunungan(N);
    
    return 0;
}