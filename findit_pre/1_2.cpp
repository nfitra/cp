#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> v;

    v.push_back(1);
    for(int y=1; y<N; y++)
    {
        while(1)
        {
            for(int x=1; x<=N; x++)
            {
                bool exists = std::find(std::begin(v), std::end(v), x) != std::end(v);
                if(!exists)
                {
                    v.push_back(x)
                }
            }
        }
    }
    for(int x=0; x<N; x++)
    {

        cout << v[x] << endl;
    }
    cout << v.begin() << endl;
//    cout << x << endl;
}
