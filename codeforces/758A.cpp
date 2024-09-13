#include <iostream>
#define mini(cont) *min_element(cont.begin(), cont.end())
#define maxi(cont) *max_element(cont.begin(), cont.end())

using namespace std;

int main()
{
    int t;
    cin >> t;

    int arr[t];
    int maxArr = 0;
    for(int i=0; i<t; i++) {
        cin >> arr[i];
        if(maxArr < arr[i])
            maxArr = arr[i];
    }

    int fin = 0;
    for(int i=0; i<t; i++) {
        if(arr[i] != maxArr) {
            fin += maxArr - arr[i];
        }
    }
    cout << fin << endl;
}

