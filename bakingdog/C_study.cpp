#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cstring>
#include <list>
#include <string>

int ppp[10000];
int mmm[10000];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N = 0;
    cin >> N;
    
    for(int i = 0; i < N; i++)
    {
        int t = 0;
        cin >> t;
        if(t > -1)
        {
            ppp[t]++;
        }
        else
        {
            t *= -1;
            mmm[t]++;
        }
    }
    int v = 0;
    cin >> v;
    
    if(v > -1)
    {
        cout << ppp[v];
    }
    else
    {
        v *= -1;
        cout << mmm[v];
    }
    return 0;
}