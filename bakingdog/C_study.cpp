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

}

void erase(int addr)
{

}

void traversal()
{

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