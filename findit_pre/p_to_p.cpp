#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    int T, N;
    cin >> T;
    string *arr = arr[T];
    for(int x=0; x<T; x++)
    {
        strcpy(*(arr+x), "123");
    }

    for(int x=0; x<T; x++)
    {

        cout << arr[x] << endl;
    }
}
