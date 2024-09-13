#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x, div, sis;
    cin >> x;
    cout << x << " ";
    div = x/5;
    sis = x % 5;
    if(div > 10) {
        div = 10;
        sis = x - 50;
    }
    cout << div << " " << sis << endl;
}
