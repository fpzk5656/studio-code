#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cstring>
#include <list>
#include <string>

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N = 0;
    cin >> N;
    for(int i = N - 1; i >0; i--)
    {
        int s = i;
        while(s--)
        {
            cout << " ";
        }
        int k = (N - i) * 2 - 1;
        while(k--)
        {
            cout << "*";
        }
        cout << '\n';
    }
    
    for(int i = 0; i < N; i++)
    {
        int s = i;
        if(i > 0)
        {
            while(s--)
            {
                cout << " ";
            }
        }
        int k = (N-i)*2 -1;
        while(k--)
        {
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}