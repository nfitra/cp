#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

string toBinary(long long int n)
{
    string r;
    if(n == 0)
    {
        return "0";
    }
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}

int main()
{
    int n;
    cin >> n;
    long long int x;
    while(n--)
    {
        cin >> x;

        string binary = toBinary(x);
        cout << binary << endl;
    }
}
