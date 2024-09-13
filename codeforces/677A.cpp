#include <iostream>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;

    int a[n], num=0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i] > h)
        {
            num += 2;
        }
        else
        {
            num++;
        }
    }
    cout << num << endl;
}
