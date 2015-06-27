#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int stoi(string a)
{
    int i;
    stringstream ss(a);
    ss >> i;
    return i;
}

int main()
{
    string a, b[2];
    vector<int> c;
    while(getline(cin, a))
    {
        if(a.empty())
            break;
        b[0] = "";
        b[1] = "";
        for(int i=0, j=0; i!=a.length(); ++i)
        {
            if(a[i] != ' ')
                b[j] += a[i];
            else
                ++j;
        }
        c.push_back(stoi(b[0]) + stoi(b[1]));
    }
    for(int i=0; i!=c.size(); ++i)
    {
        cout<<c[i]<<endl;
    }
}