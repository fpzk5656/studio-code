#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cstring>
#include <list>
#include <string>

// 난장이 9명 중에 일곱 난장이 찾기
// (바킹독의 풀이 연구)

int num[9], result[7];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    for(int i = 0; i < 9; i++) cin >> num[i];

    // 9명 중에 2명을 뺀 조합 고려
    for(int a = 0; a < 8; a++)
    {
        int total = 0;

        for(int b = 0; b < 9; b++)
        {
            total = 0;  // 돌릴 때마다 0으로 초기화
            // 나머지 7명 저장
            for(int c = 0, i = 0; c < 9; c++) if(c != a && c != b) result[i++] = num[c]; // c가 a랑 b와 같지 않을 때만 result에 저장
            for(int i = 0; i < 7; i++)total += result[i];  // result 원소들 값을 합한다

            // 7명 키의 합이 100인 경우
            if(total == 100) break;
        }
        if(total == 100) break;
    }

    // 정렬 후 출력
    sort(result, result + 7);
    for(int i = 0; i < 7; i++) cout << result[i] << '\n';

    return 0;
}