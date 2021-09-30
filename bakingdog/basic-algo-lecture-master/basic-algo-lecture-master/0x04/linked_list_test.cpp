#include <iostream>
using namespace std;

const int MX = 1000005;
int dat[MX], pre[MX], nxt[MX];
int unused = 1;

void insert(int addr, int num)
{
  dat[unused] = num;
  pre[unused] = addr;

  nxt[unused] = nxt[addr];

  // 삽입할 위치의 다음 원소가 존재할 때만
  if(nxt[addr] != -1)pre[nxt[addr]] = unused;
  nxt[addr] = unused;

  unused++;
}

void erase(int addr)
{
  nxt[pre[addr]] = nxt[addr];
  // 지우는 원소가 제일 마지막 원소라 다음 것이 -1일 경우를 제외하기
  if(nxt[addr] != -1)pre[nxt[addr]] = pre[addr];
  //dat[addr] = -1; 어차피 안쓰기 때문에 굳이 -1로 해줄 필요 없다함
  // 지우는 원소의 노드에 저장되었는 주소들만 다른 노드가 가져가는 수준이라
  // 메모리가 남을 염려가 있지만.. 코딩테스트에서는 딱히 문제가 없다함 
  // 코딩 테스트 특유의 제한된 함수 사용 횟수 때문에..그래서 배열로 제한에 넉넉하게 뚝딱 만든 야매 연결리스트임
  // 실무에서는 사용해서는 안되는..
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
