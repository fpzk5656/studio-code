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
    
    for(int i = 1; i < N+1; i++)
    {
        for(int k = 0; k < i; k++)
        {
            cout << "*";
        }
        for(int k = (2*N) - (i * 2); k > 0; k--)
        {
            cout << " ";
        }
        for(int k = 0; k < i; k++)
        {
            cout << "*";
        }
        cout << '\n';
    }
    
    for(int i  = N - 1; i >= 0; i--)
    {
        for(int k = 0; k < i; k++)
        {
            cout << "*";
        }
        for(int k = 0; k < (N*2) - (i*2); k++)
        {
            cout << " ";
        }
        for(int k = 0; k < i; k++)
        {
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}