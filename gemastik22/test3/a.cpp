#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    long long int a,b,c,d;

    cin >> a >> b;
    cin >> c >> d;

    long long int hasil1 = a*d;
    long long int hasil2 = b*c;

    if(hasil1 < hasil2)
    {
        cout << "lebih kecil" << endl;
    }
    else if(hasil1 > hasil2)
    {
        cout << "lebih besar" << endl;
    }
    else
    {
        cout << "sama" << endl;
    }
}
