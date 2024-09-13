#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int five[3] = {2,3,5};

    int n = sizeof(five) / sizeof(*five);

    bool exists = find(five, five+n, N) != five+n;
    if (exists)
    {
        cout << 4 << endl;
    }
    else
    {
        cout << 3 << endl;
    }
}
