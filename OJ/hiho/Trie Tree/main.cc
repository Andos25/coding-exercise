#include <iostream>
#include <map>
using namespace std;

struct Node{
    int count;
    map<char, Node*> nextlist;
};

void insert(string str, Node *head)
{
    Node *node = head;
    ++(head->count);
    for(int i=0; i!=str.length(); ++i)
    {
        if(node->nextlist.count(str[i])==0)
        {
            Node *p = new Node;
            p->count = 1;
            node->nextlist[str[i]] = p;
            node = p;
        }
        else
        {
            node = node->nextlist[str[i]];
            ++(node->count);
        }
    }
}

int query(string str, Node *head)
{
    Node *node = head;
    for(int i=0; i!=str.length(); ++i)
    {
        if(node->nextlist.count(str[i])==0)
        {
            return 0;
        }
        else
        {
            node = node->nextlist[str[i]];
        }
    }
    return node->count;
}

int main()
{
    int m;
    cin>>m;
    cin.get();
    string str;
    Node *head = new Node;
    head->count = 0;
    for(; m!=0; m--)
    {
        getline(cin, str);
        insert(str, head);
    }
    cin>>m;
    cin.get();
    int result[m], i=0;
    for(; i!=m; ++i)
    {
        getline(cin, str);
        result[i] = query(str, head);
    }
    for(int j=0; j!=i; ++j)
        cout<<result[j]<<endl;
}