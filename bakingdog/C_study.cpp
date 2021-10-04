#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cstring>
#include <list>
#include <string>

// 바킹독 0x4강

const int MX = 1000005;
char dat[MX];
int pre[MX];
int nxt[MX];
int unused = 1;

void insert(int addr, int num)
{
    // 새로운 원소를 생성
    dat[unused] = num;
    // 새 원소의 pre값에 삽입할 위치의 주소를 대입
    pre[unused] = addr;
    // 새 원소의 nxt값에 삽입할 위치의 nxt값을 대입
    nxt[unused] = nxt[addr];
    // 삽입할 위치의 nxt 값과 삽입할 위치의 다음 원소의 pre 값을 새 원소로 변경
    if(nxt[addr] != -1) pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    // unused 1 증가
    unused++;
}

void erase(int addr)
{
    // addr의 이전 주소의 nxt 값을 addr의 nxt로
    // addr의 nxt값이 -1이 아니먄, nxt의 pre값을 addr의 pre로
    nxt[pre[addr]] = nxt[addr];
    if(nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
}

void traversal()
{
    int cur = nxt[0];
    while(cur != -1)
    {
        cout << dat[cur] << ' ';
        cur = nxt[cur];
    }
    cout << "\n\n";
}

// 백준 1406 : 에디터 문제
// 야매 연결리스트로 해결하기 문제
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    fill(pre, pre+MX, -1);
    fill(nxt, nxt+MX, -1);
    string init;
    cin >> init;
    int cursor = 0;
    for(auto c : init)
    {
        insert(cursor, c);
        cursor++;
    }
    int q;
    cin >> q;
    while(q--)
    {
        char op;
        cin >> op;
        if(op == 'P')
        {
            char add;
            cin >> add;
            insert(cursor, add);
            cursor = nxt[cursor];
        }
        else if(op == 'L')
        {
            if(pre[cursor] != -1)
                cursor = pre[cursor];
        }
        else if(op == 'D')
        {
            if(nxt[cursor] != -1)
                cursor = nxt[cursor];
        }
        else 
        {
            if(pre[cursor] != -1)
            {
                erase(cursor);
                cursor = pre[cursor];
            }
        }
    }
    traversal();
    return 0;
}