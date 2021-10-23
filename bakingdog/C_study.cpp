#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cstring>
#include <list>
#include <string>

int s[2000001];
int k[1000001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N = 0;
    cin >> N;
    //int k[N];
    for(int i = 0; i < N; i++)
    {
        int c = 0;
        cin >> c;
        k[i] = c;
        s[c] = 1 + i;
    }
    int x = 0;
    cin >> x;
    int cnt = 0;
    for(int i = 0; i < N; i++)
    {
        int t = x - k[i];
        
        //S[t]에 숫자가 있고, S[t]에 주어진 번호가 S[k[i]보다 더 크다면
        if(s[t] > 0 && s[t] > s[k[i]])cnt++;
    }
    
    cout << cnt;
    
    return 0;
}