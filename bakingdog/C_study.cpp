#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cstring>
#include <list>
#include <string>

int S[10];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N = 0;
    cin >> N;
    
    // 만약 인덱스 마다 이미 채워져있다고 쳐
    // 2가 3개, 3이 4개야. 그럼 셋트는 당연히 4개가 필요하지
    while(N > 0)
    {
        S[N%10]++;
        N /= 10;
    }
    int num = 0;
    int sixOrNine = ((S[6] + S[9]) / 2) + ((S[6] + S[9]) % 2);
    for(int i = 0; i < 10; i++)
    {
        if(i != 6 && i != 9)
        {
            if(S[i] > num)num = S[i];
        }
    }
    
    if(num < sixOrNine)num = sixOrNine;
    
    cout << num;
    // 6과 9는 개수 합산해서 2로 나누고,
    // 나눈 숫자로 가장 큰 셋트수와 비교해서 결정한다
    
    return 0;
}