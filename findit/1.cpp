#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        unsigned long long int n, m, time=10;
        cin >> n;
        if(n <= 8)
        {
            m = n % 8;
            time += 16;
        }
        else if(n <= 10)
        {
            m = n % 10;
            time += 20;
        }
        else if(n <= 12)
        {
            m = n % 12;
            time += 24;
        }
        else
        {
            unsigned long long int over = n/12;
            cout << over << endl;
            time += (24 * (over));
            m = n % 12;
            cout << m << endl;
            if(m != 0)
            {
                if(m <= 8)
                {
                    time += 16;
                }
                else if(m <= 10)
                {
                    time += 20;
                }
                else
                {
                    time += 24;
                }
            }
        }

        cout << time << endl;
        cout << time % 2022 << endl;
    }
}
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        unsigned long long int n, m, time=10;
        cin >> n;
        if(n <= 8)
        {
            m = n % 8;
            time += 16;
        }
        else if(n <= 10)
        {
            m = n % 10;
            time += 20;
        }
        else if(n <= 12)
        {
            m = n % 12;
            time += 24;
        }
        else
        {
            unsigned long long int over = n/12;
            cout << over << endl;
            time += (24 * (over));
            m = n % 12;

            cout << m << endl;
            if(m != 0)
            {
                if(m <= 8)
                {
                    time += 16;
                }
                else if(m <= 10)
                {
                    time += 20;
                }
                else
                {
                    time += 24;
                }
            }
        }

        cout << time << endl;
        cout << time % 2022 << endl;
    }
}
