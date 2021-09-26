#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cstring>

// 바킹독 0x3강

int main()
{
    string S;
    cin >> S;
    for(char i = 'a'; i <= 'z'; i++)
    {
        int count = 0;
        for(int j = 0; j < S.size(); j++)
        {
            if(i == S[j])
                count++;
        }
        cout << count << ' ';
    }
    return 0;
}