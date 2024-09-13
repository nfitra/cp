#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int a;
	bool hard=0;
	while(n--)
    {
        cin >> a;
        if(a == 1)
        {
            hard = 1;
        }
    }
    if(hard)
    {
        cout << "HARD" << endl;
    }
    else
    {
        cout << "EASY" << endl;
    }
}
