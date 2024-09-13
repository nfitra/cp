#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main()
{
    int T, N;
    string s;
    cin >> T;
    int len[T];
    vector<vector <string>> v;
    for(int x=0; x<T; x++)
    {
        cin >> N;
        len[x] = N*2;
        vector<string> v1;
        for(int y=0; y<N*2; y++)
        {
            cin >> s;
            v1.push_back(s);
        }
        v.push_back(v1);
    }

//    for(int x=0; x<T; x++)
//    {
//        for(int y=0; y<N; y++)
//        {
//            cout << v[x][y] << endl;
//        }
//    }
    int fin[T] = {0};
    for(int x=0; x<T; x++)
    {
        bool blocked = false;
        bool exist[len[x]] = {false};
        bool top[len[x]] = {false};
        bool bot[len[x]] = {false};
        bool oneadded = false;
        for(int z=0; z<N; z++)
        {
            bool pick = false;
            bool side = true;
            string ss="";
            int line=1;

            for(int y=0; y<len[x]; y++)
            {
                if(pick == true)
                {
                    if(line == 1)
                    {
                        if(top[y] == true)
                        {
                            line = 2;
                        }
                    }
                    if(line == 2)
                    {
                        if(bot[y] == true)
                        {
                            blocked = true;
                            fin[x] = -1;
                            break;
                        }
                        else
                        {
                            bot[y] = true;
                        }
                    }
                    if(v[x][y].compare(ss) == 0)
                    {
//                        cout << v[x][y] << endl;
                        if(top[y] == true)
                        {
                            bot[y] = 1;
                        }
                        else
                        {
                            top[y] = 1;
                        }
                        if(side == false)
                        {
                            fin[x]++;
                        }
                        if(side == true)
                        {
                            if(oneadded == false)
                            {
                                fin[x]++;
                                oneadded = true;
                            }
                        }
                        exist[y] = true;
                        break;
                    }
                }
                if(exist[y] == false && pick == false)
                {
                    if(top[y] == true)
                    {
                        bot[y] = 1;
                    }
                    else
                    {
                        top[y] = 1;
                    }
                    side = true;
                    pick = true;
                    exist[y] = true;
                    ss = v[x][y];
//                    cout << v[x][y] << endl;
                }
                else
                {
                    side = false;
//                    cout << "beda" << endl;
                }

            }
            if(blocked == true)
            {
//                cout << "blocked" << endl;
                break;
            }
//            cout << endl;
        }
    }

    for(int x=0; x<T; x++)
    {
        cout << "Rencana#" << x+1 << "=" << fin[x] << endl;
    }
    return 0;
}
