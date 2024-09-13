#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	string a,b;
	cin >> a >> b;
	string c;
	for(int x=0; x<a.length(); x++)
    {
        if(a[x] == b[x])
        {
            c += '0';
        }
        else
        {
            c += '1';
        }
    }
    cout << c << endl;
}

