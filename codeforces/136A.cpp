#include <iostream>
#include <unistd.h>
#include <limits>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int p[n];
    for(int x=0; x<n; x++)
    {
        int val;
        cin >> val;
        p[val-1] = x+1;
    }

    for(int x=0; x<n; x++)
    {
        cout << p[x] << " ";
    }
}
