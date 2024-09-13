#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int nA=0, nD=0;
    for(int x=0; x<n; x++)
    {
        if(s[x] == 'A')
        {
            nA += 1;
        }
        else
        {
            nD += 1;
        }
    }
    if(nA > nD)
    {
        cout << "Anton" << endl;
    }
    else if(nA < nD)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
}
