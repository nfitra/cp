#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;

int *inttoarr(int length, int number)
{
    int arr[length];
    for (int i = length-1; i >= 0; i--) {
        arr[i] = number % 10;
        number /= 10;
    }
    return arr;
}


int main()
{
    int x = 2424244;
    string s = to_string(x);
    int len = s.length();

    int arr[len];
    for (int i = len-1; i >= 0; i--) {
        arr[i] = x % 10;
        x /= 10;
    }

//    int *arr = inttoarr(len, x);
    int arr2[len];
    int div = arr[0];
    for(int x=1; x<len; x++)
    {

        int hasil = div + arr[x];
        div = arr[x];
        cout << hasil << endl;

    }
}
