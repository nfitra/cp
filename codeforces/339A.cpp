#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <array>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int length = s.length();
    char numbers[length/2+1];
    int numbers_len=0;
    for(int x=0; x<length; x++)
    {
        if(x%2==0)
        {
            numbers[numbers_len++] = s[x];
        }
    }
//    numbers[numbers_len++] = '\0';
//    cout << numbers;
    int n= sizeof(numbers) / sizeof(numbers[0]);
    sort(numbers, numbers + n);
    numbers_len = 0;
    for(int x=0; x<length; x++)
    {
        if(x%2==0)
        {
            cout << numbers[numbers_len++];
        }
        else
        {
            cout << '+';
        }
    }
}
