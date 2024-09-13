#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int a, b, num=1;
	for(int x=0; x<n; x++)
    {
        cin >> a;
        if(b != a && x > 0)
        {
            num++;
        }
        b = a;
    }
    cout << num << endl;
}
