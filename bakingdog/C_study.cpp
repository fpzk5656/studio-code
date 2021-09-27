#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cstring>

// 바킹독 0x4강

// 야매 연결리스트
const int MX = 1000005;
int dat[MX], pre[MX], nxt[MX];
int unused = 1;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    //fill(시작위치, 끝위치, 초기화할 숫자)
    fill(pre, pre + MX, -1);
    fill(nxt, nxt + MX, -1);
    
    return 0;
}