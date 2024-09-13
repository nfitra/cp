#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string a;
    for(int x=0; x<n; x++)
    {
        if(x%2==0)
        {
            a += "I hate ";
        }
        else
        {
            a += "I love ";
        }
        if(x!=n-1)
        {
            a += "that ";
        }
    }
    a += "it";
    cout << a << endl;
}
