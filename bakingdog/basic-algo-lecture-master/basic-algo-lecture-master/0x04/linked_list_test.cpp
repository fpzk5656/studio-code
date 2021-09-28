#include <iostream>
using namespace std;

const int MX = 1000005;
int dat[MX], pre[MX], nxt[MX];
int unused = 1;

void insert(int addr, int num)
{
  // 예를 들어 13이 2번지이고, 
  // 13 뒤에 20이라는 숫자를 넣고 싶다면
  // (2, 20)을 넣는 것이다.

  // addr의 다음 인덱스의 이전 인덱스에 추가한 것의 주소를 준다
  pre[nxt[addr]] = unused;
  // 추가한 것에 숫자 넣고,
  // 이전 인덱스 주소는 addr로
  dat[unused] = num;
  pre[unused] = addr;

  // 추가한 것의 다음 주소는 addr의 다음 주소를 받고
  // addr의 다음주소는 추가한 인덱스로 한다
  nxt[unused] = nxt[addr];
  nxt[addr] = unused;

  unused++;
}

void erase(int addr)
{
  nxt[pre[addr]] = nxt[addr];
  pre[nxt[addr]] = pre[addr];
  dat[addr] = -1;
}

void traverse(){
  int cur = nxt[0];
  while(cur != -1){
    cout << dat[cur] << ' ';
    cur = nxt[cur];
  }
  cout << "\n\n";
}

void insert_test(){
  cout << "****** insert_test *****\n";
  insert(0, 10); // 10(address=1)
  traverse();
  insert(0, 30); // 30(address=2) 10
  traverse();
  insert(2, 40); // 30 40(address=3) 10
  traverse();
  insert(1, 20); // 30 40 10 20(address=4)
  traverse();
  insert(4, 70); // 30 40 10 20 70(address=5)
  traverse();
}

void erase_test(){
  cout << "****** erase_test *****\n";
  erase(1); // 30 40 20 70
  traverse();
  erase(2); // 40 20 70
  traverse();
  erase(4); // 40 70
  traverse();
  erase(5); // 40
  traverse();
}

int main(void) {
  fill(pre, pre+MX, -1);
  fill(nxt, nxt+MX, -1);
  insert_test();
  erase_test();
}
