#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cstring>
#include <list>
#include <string>

const int MX = 1000005;
int dat[MX];
int pos = 0;

void pushX(int X)
{
    dat[pos++] = X;
}
void pop()
{
    if(pos != 0)
    {
    cout << dat[pos-1] << '\n'; 
        pos--;
    }
    else
    {
      cout << -1 << '\n';   
    }
}
void size()
{
    cout << pos << '\n';
}
void empty()
{
    if(pos == 0)cout << 1 << '\n';
    else
    {
        cout << 0 << '\n';
    }
}
void top()
{
    if(pos != 0)
    {
    cout << dat[pos-1] << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }
}

int main()
{
    int k = 0;
    cin >> k;
    
    while(k > 0)
    {
        string N = "";
        cin >> N;
    
        if(N == "push")
        {
            int X;
            cin >> X;
            pushX(X);
        }
        else if(N == "pop")
        {
            pop();
        }
        else if(N == "size")
        {
            size();
        }
        else if(N == "empty")
        {
            empty();
        }
        else if(N == "top")
        {
            top();
        }
        k--;
    }
    
    return 0;
}