#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int p, q=n*100, sum=0;

	while(n--)
    {
        cin >> p;
        sum += p;
    }
    float avg = (float)sum/q * 100;
    cout << avg << endl;
}
