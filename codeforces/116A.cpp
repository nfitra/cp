#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a, b, sum=0, min_=0;
    while(n--)
    {
        cin >> a >> b;
        sum -= a;
        sum += b;
        if(sum > min_)
        {
            min_ = sum;
        }
    }
    cout << min_ << endl;
}
