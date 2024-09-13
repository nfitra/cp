#include <iostream>
using namespace std;

int main()
{
	int k,l,m,n,d;
	cin >> k >> l >> m >> n >> d;
	int num=d;
	for(int x=1; x<=d; x++)
    {
        if(x%k==0)
        {
            continue;
        }
        else if(x%l==0)
        {
            continue;
        }
        else if(x%m==0)
        {
            continue;
        }
        else if(x%n==0)
        {
            continue;
        }
        else
        {
            num--;
        }
    }
    cout << num << endl;
}
