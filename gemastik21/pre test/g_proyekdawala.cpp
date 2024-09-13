#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selectionSort(long long int c[], long long int n, string desa[][2])
{
    long long int i, j, min_idx;

    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (c[j] > c[min_idx])
            min_idx = j;

        swap(c[min_idx], c[i]);
        swap(desa[min_idx][0], desa[i][0]);
        swap(desa[min_idx][1], desa[i][1]);
    }
}

int main() {
    long long int p;
    cin >> p;
    if (!(1 < p && p < 101))
        return 0;

    long long int x[p][2], y[p][2], r[p][2], a[p], c[p];
    string desa[p][2];
    for (long long int idx=0; idx<p; idx++) {
        cin >> desa[idx][0] >> x[idx][0] >> y[idx][0] >> r[idx][0] >> desa[idx][1] >> x[idx][1] >> y[idx][1] >> r[idx][1];
        if(!((0 < x[idx][0] || x[idx][0] < 100000) && (0 < x[idx][1] || x[idx][1] < 100000)))
            return 0;
        if(!((0 < y[idx][0] || y[idx][0] < 100000) && (0 < y[idx][1] || y[idx][1] < 100000)))
            return 0;
        if(!((0 < r[idx][0] || r[idx][0] < 100000) && (0 < r[idx][1] || r[idx][1] < 100000)))
            return 0;
        a[idx] = x[idx][0] - x[idx][1];
        c[idx] = y[idx][0] - y[idx][1];

        c[idx] = pow(a[idx], 2) + pow(c[idx], 2);
        c[idx] = sqrt(c[idx]);
    }

    long long int n = sizeof(c)/sizeof(c[0]);
    selectionSort(c, n, desa);

    for (long long int idx=0; idx<p; idx++) {
        cout << desa[idx][0] << " " << desa[idx][1] << " " << c[idx] << endl;
    }

    return 0;
}
