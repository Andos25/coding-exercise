#include <iostream>
using namespace std;

int calc(string str)
{
    int p[str.size()], mx=0, c=0, n=str.size();
    for(int i=1; i!=n; ++i)
    {
        p[i] = mx > i ? min(p[2*c-i], (mx-i)) : 1;
        for(;str[i+p[i]]==str[i-p[i]]; ++p[i]);
        if(p[i] > mx)
        {
            mx = p[i];
            c = i;
        }
    }
    return (p[c]%2==0) ? p[c]-1 : p[c];
}

string addstr(string ori)
{
    string nstr = "$#";
    int n=ori.size();
    for(int i=0; i!=n; ++i)
    {
        nstr += ori[i];
        nstr += "#";
    }
    return nstr;
}

int run()
{
    int num;
    cin>>num;
    cin.get();
    string input;
    while(num--)
    {
        getline(cin, input);
        cout<<calc(addstr(input))<<endl;
    }
}

int main()
{
    run();
}