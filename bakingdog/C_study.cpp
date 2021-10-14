#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cstring>
#include <list>
#include <string>

int S[21];

// 이게 안쓰일 수도 있음
bool desc(int a, int b)
{
    return a > b;
}

main()
{
    for(int i = 1; i < 21; i++)
    {
        S[i] = i;
    }
    
    int N = 10;
    
    while(N--)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);

        int k[2];
        cin >> k[0];
        cin >> k[1];
        const int mx = (k[1]+1) - k[0];
        int L[mx];
        int count = mx -1;
        for(int i = k[0]; i < k[1]+1; i++)
        {
            L[count--] = S[i];
        }
        int t = 0;
        for(int i = k[0]; i < k[1]+1; i++)
        {
            S[i] = L[t++];
        }
    }
    
    for(int i = 1; i < 21; i++)
    {
        cout << S[i] << ' ';
    }
    
    return 0;
}