#include <iostream>
using namespace std;

void generate_next(string mode, int *next)
{
    int j;
    bool flag;
    next[0] = 0;
    next[1] = 0;
    for(int i=1; i!=mode.length(); ++i)
    {
        j = i;
        flag = true;
        while(j>0)
        {
            j = next[j];
            if(mode[j]==mode[i])
            {
                next[i+1] = j + 1;
                flag = false;
                break;
            }
        }
        if(flag)
        {
            next[i+1] = 0;
        }
    }
}

int match(string mode, string str, int *next)
{
    int count=0;
    for(int i=0, j=0; i!=str.size(); ++i)
    {
        if(j<mode.size() && mode[j]==str[i])
        {
            ++j;
        }
        else
        {
            while(j > 0)
            {
                j = next[j];
                if(mode[j] == str[i])
                {
                    ++j;
                    break;
                }
            }
        }
        if(j==mode.size())
        {
            ++count;
        }
    }
    return count;
}

int main()
{
    string str, mode;
    int number;
    cin >> number;
    cin.get();
    while(number--!=0)
    {
        getline(cin, mode);
        int next[mode.length()+1];
        generate_next(mode, next);
        getline(cin, str);
        cout<<match(mode, str, next)<<endl;
    }
}