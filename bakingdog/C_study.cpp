#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cstring>
#include <list>
#include <string>

int k[10];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int A,B,C = 0;
    cin >> A;
    cin >> B;
    cin >> C;
    int N = A * B * C;
    while(true)
    {
        int a = N%10;
        k[a]++;
        if(N < 10)break;
        N /= 10;
    }
    
    for(int i = 0; i < 10; i++)
    {
        cout << k[i] << '\n';
    }
    
    return 0;
}