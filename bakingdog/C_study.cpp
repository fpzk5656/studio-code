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

// dat[i] i번지 원소의 값
// pre[i] i번지 원소의 이전 원소 값
// nxt[i] i번지 원소의 다음 원소 값
// unused 는 현재 사용되지 않는 인덱스. 즉, 새로운 원소가 들어갈 수 있는 위치라 추가할 때마다 ++ 

// 연결리스트 이므로 배열의 인덱스 번호랑 내용물이 순서대로 위치한게 아닐 수 있다...연결리스트 안에선

void traverse()
{
    // 더미 인덱스 다음것부터 시작해서 연결된 다음 것들을 계속 출력
    int cur = nxt[0];
    while(cur != -1)
    {
        cout << dat[cur] << ' ';
        cur = nxt[cur];
    }
    cout << "\n\n";
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    //fill(시작위치, 끝위치, 초기화할 숫자)
    fill(pre, pre + MX, -1);
    fill(nxt, nxt + MX, -1);
    

    traverse(); // 출력 함수
    return 0;
}