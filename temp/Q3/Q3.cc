#include <iostream>
#include <cmath>
using namespace std;

int get_min_coin(int x1, int x2, int y1, int y2)
{
    int a, b, c;
    a = abs(x1-x2);
    b = abs(y1-y2);
    c = a > b ? b : a;
    return c;
}

int main() 
{
    int count;
    cin >> count;
    int x[100000], y[100000], matrix[100000][100000], result[100000];
    for(int i=0; i!=count; ++i)
        cin>>x[i]>>y[i];
    
    for(int i=0; i!=count; ++i)
    {
        for(int j=0; j!=count; ++j)
        {
            if(i==j)
                matrix[i][j]=0;
            else
                matrix[i][j]=get_min_coin(x[i],x[j],y[i],y[j]);
        }
    }
    for(int i=0; i!=count; ++i)
        result[i] = matrix[0][i];
        
    for(int i=0; i!=count; ++i)
    {
        for(int j=0; j!=count; ++j)
        {
            if(i==j)
                continue;
            else
            {
                result[j] = result[j]>result[i]+matrix[i][j]?result[i]+matrix[i][j]:result[j];
            }
        }
    }
    cout<<result[count-1]<<endl;
}