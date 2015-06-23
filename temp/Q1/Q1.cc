#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y, z, a=0, b=0, c=0, count=0;
    string sq;
    cin>>x>>y>>z;
    cin>>sq;
    for(int i=0; i!=sq.length(); ++i)
    {
        ++count;
        switch(sq[i])
        {
            case 'R':
                ++a;
                break;
            case 'Y':
                ++b;
                break;
            case 'B':
                ++c;
                break;
        }
        if(abs(a-b)==x && abs(b-c)==y && abs(c-a)==z)
        {
            count = 0;
            a = 0;
            b = 0;
            c = 0;
        }
        if(abs(a-b)==x && abs(b-c)==z && abs(c-a)==y)
        {
            count = 0;
            a = 0;
            b = 0;
            c = 0;
        }
        if(abs(a-b)==y && abs(b-c)==z && abs(c-a)==x)
        {
            count = 0;
            a = 0;
            b = 0;
            c = 0;
        }
        if(abs(a-b)==y && abs(b-c)==x && abs(c-a)==z)
        {
            count = 0;
            a = 0;
            b = 0;
            c = 0;
        }
        if(abs(a-b)==z && abs(b-c)==x && abs(c-a)==y)
        {
            count = 0;
            a = 0;
            b = 0;
            c = 0;
        }
        if(abs(a-b)==z && abs(b-c)==y && abs(c-a)==x)
        {
            count = 0;
            a = 0;
            b = 0;
            c = 0;
        }
    }
    cout<<count<<endl;
}