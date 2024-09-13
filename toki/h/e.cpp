#include <iostream>
#include <vector>
#include <sstream>
#include <string.h>
#include <iterator>
#include <algorithm>
#include <cctype>

using namespace std;

vector<string> split(string text, char delim)
{
    string line;
    vector<string> vec;
    stringstream ss(text);
    while(getline(ss, line, delim))
    {
        vec.push_back(line);
    }
    return vec;
}

int main()
{
    string s;
    getline(cin, s);

    transform(s.begin(), s.end(), s.begin(),
              [](unsigned char c)
    {
        return tolower(c);
    });

    s.erase(std::remove(s.begin(), s.end(), ','), s.end());
    s.erase(std::remove(s.begin(), s.end(), '.'), s.end());

    vector<string> v = split(s, ' ');
//    sort( v.begin(), v.end() );
//    v.erase( unique( v.begin(), v.end() ), v.end() );

    string noun[] = {"girl", "letter", "teacher", "Joe", "train", "station", "evening", "fish", "tacos"};
    string pronoun[] = {"me", "she", "i", "that", "he", "we", "all", "it"};
    string verb[] = {"brought", "disappeared", "realized", "was", "waited", "agreed", "loves", "end", "felt", "like", "ate"};
    string adjective[] = {"young", "long", "late", "magnificent"};
    string adverb[] = {"very", "then", "quickly", "too", "much"};
    string article[] = {"the", "a", "an"};
    string preposition[] = {"from", "on", "before", "while", "at", "in"};
    string conjuction[] = {"and", "so"};


    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0;
    for(auto x : v)
    {
        for(int z=0; z<9; z++)
        {
            if(noun[z] == x)
            {
                a+=1;
                break;
            }
        }

        for(int z=0; z<8; z++)
        {
            if(pronoun[z] == x)
            {
                b+=1;
                break;
            }
        }

        for(int z=0; z<11; z++)
        {
            if(verb[z] == x)
            {
                c+=1;
                break;
            }
        }

        for(int z=0; z<4; z++)
        {
            if(adjective[z] == x)
            {
                d+=1;
                break;
            }
        }
        for(int z=0; z<5; z++)
        {
            if(adverb[z] == x)
            {
                e+=1;
                break;
            }
        }
        for(int z=0; z<3; z++)
        {
            if(article[z] == x)
            {
                f+=1;
                break;
            }
        }
        for(int z=0; z<6; z++)
        {
            if(preposition[z] == x)
            {
                g+=1;
                break;
            }
        }
        for(int z=0; z<2; z++)
        {
            if(conjuction[z] == x)
            {
                h+=1;
                break;
            }
        }
    }

    if(a > 0)
        cout << "Noun = " << a << endl;
    if(b > 0)
        cout << "Pronoun = " << b << endl;
    if(c > 0)
        cout << "Verb = " << c << endl;
    if(d > 0)
        cout << "Adjective = " << d << endl;
    if(e > 0)
        cout << "Adverb = " << e << endl;
    if(f > 0)
        cout << "Article = " << f << endl;
    if(g > 0)
        cout << "Preposition = " << g << endl;
    if(h > 0)
        cout << "Conjunction = " << h << endl;
}
