#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> v;
    if(N==1)
    {
        v.push_back(1);
    }
    for(int x=0; x<N; x++)
    {
        v.push_back(x+1);
    }

//    for(int x=0; x<N; x++)
//    {
//        cout << v[x] << endl;
//    }
//    cout << v.begin() << endl;

    int x=0, y=0, gil=1;
    while(1)
    {
        while(v.size())
        {
            if(y==gil-1)
            {
                if(x==v.size())
                {
                    x=0;
                }
//                cout << v[x] << endl;
//                cout << endl;
                v.erase(v.begin()+x);
                y=0;
                gil++;
                break;
            }
            if(x == v.size())
            {
                x=0;
                break;
            }
//            cout << v[x] << endl;
            x++;
            y++;
        }
//        for(int x=0; x<v.size(); x++)
//        {
//            cout << v[x] << endl;
//        }
//        cout << endl;
//        cout << v.size() << endl;
        if(v.size() == 1) {
            break;
        }
    }
    cout << v[0] << endl;
}
