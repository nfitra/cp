#include <iostream>
using namespace std;

int main()
{
	string n;
	cin >> n;

	int sum = 0;
	for(int x=0; x<n.length(); x++)
    {
        if(n[x] == '4' || n[x] == '7')
        {
            sum += 1;
        }
    }
    if(sum == 4 || sum == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

}
