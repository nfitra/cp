#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector <int> v;
    cin >> n;
    while(n--)
    {
        int x, y;
        cin >> x >> y;
        for(int a=x; a<=y; a++)
        {
            if(a % 2 == 0 && a % 5 == 0)
            {
                v.push_back(a);
            }
        }

        for (auto ir = v.begin(); ir != v.end(); ++ir)
        {
            cout << *ir << " ";
        }
        cout << endl;
        v.clear();
    }
}
