#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n=5, inp;
    vector <int> v;
    while(n--)
    {
        cin >> inp;
        v.push_back(inp);
    }
    for (auto ir = v.begin() + 1; ir != v.end(); ++ir)
    {
        cout << *ir - *(ir-1) << " ";
    }
}

