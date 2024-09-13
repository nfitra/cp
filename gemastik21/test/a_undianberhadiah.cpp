#include <iostream>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

void simpleSort(int numbers[], int ARRAY_SIZE)
{
    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        for (int j = i + 1; j < ARRAY_SIZE; ++j)
        {
            if (numbers[i] > numbers[j])
            {
                int temp =  numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
}

int main() {
    int N,X;
    string b1;

    getline(cin, b1);
    if(b1 == "")
        return 0;

    int i = 0;
    stringstream ssin(b1);
    while (ssin.good()){
        if (i == 0)
            ssin >> N;
        else
            ssin >> X;
        i++;
    }

    if(!(1 <= N && N <= 1000))
        return 0;
    if(!(0 <= X && X<= 99999))
        return 0;


    int a[N], thres[N];

    for(int i=0; i<N; i++) {
        cin >> a[i];
    }

    for(int i=0; i<N; i++) {
        if(a[i] < X){
            thres[i] = X-a[i];
        }
        else if(a[i] > X){
            thres[i] = a[i] - X;
        }
    }

    int low=thres[0], z=0;
    for(int i=1; i<N; i++){
        if(low > thres[i]){
            low = thres[i];
            z++;
        }
    }


    int last[z], y=0;
    for(int i=0; i<N; i++){
        if(low == thres[i]){
            last[y] = a[i];
            y++;
        }
    }

    simpleSort(last, y);

    for(int i=0; i<y; i++){
        cout << last[i] << endl;
    }

}
