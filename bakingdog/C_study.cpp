#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cstring>

// 바킹독 0x3강

int bowl[26];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string S;
    cin >> S;

    for(auto c:S)
    bowl[c-'a']++;

    for(int i = 0; i < 26; i++)
    {
        cout << bowl[i] << ' ';
    }

    return 0;
}