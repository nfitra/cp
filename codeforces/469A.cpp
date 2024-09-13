#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(int arr[], int n)
{
    if (n==0 || n==1)
        return n;

    int j = 0;

    for (int i=0; i < n-1; i++)
        if (arr[i] != arr[i+1])
            arr[j++] = arr[i];

    arr[j++] = arr[n-1];

    return j;
}

int main()
{
    int n, i, i2;
    cin >> n;

    bool match=0;

    cin >> i;
    int p[i];
    for(int x=0; x<i; x++)
    {
        cin >> p[x];
    }

    cin >> i2;
    int q[i2];
    for(int x=0; x<i2; x++)
    {
        cin >> q[x];
    }

    int arr[i+i2];
    copy(p, p+i, arr);
    copy(q, q+i2, arr+i);
    sort(arr, arr+sizeof(arr) / sizeof(arr[0]));
    int z = removeDuplicates(arr, i+i2);

    if(z == n)
    {
        match = 1;
    }

    if(match == 1)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
}
