#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cstring>
#include <list>
#include <string>

// 난장이 9명 중에 일곱 난장이 찾기

int mx[101];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int sum = 0;
    for(int i = 0; i < 9; i++)
    {
        int k = 0;
        cin >> k;
        sum += k;
        
        mx[k] = 1;
    }
    
    sum -= 100;
    
    for(int i = 1; i < 101; i++)
    {
        if(mx[i] == 1 && mx[sum - i] == 1)
        {
            mx[i] = 0;
            mx[sum - i] = 0;
            break;
        }
    }
    for(int i = 1; i < 101; i++)
    {
        if(mx[i] == 1)cout << i << '\n';
    }
    
    return 0;
}