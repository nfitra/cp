#include <iostream>
using namespace std;

int main()
{
	long long int n;
	cin >> n;

	long long int num = (n+1) / 2;
    if(n%2!=0)
    {
        num*=-1;
    }
    cout << num << endl;
}
