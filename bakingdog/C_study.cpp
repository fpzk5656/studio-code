#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cstring>

// 바킹독 0x3강

// 배열 임의의 원소 추가
void insert(int idx, int num, int arr[], int& len)
{
  for(int i = len; i > idx; i--)
  {
    arr[i] = arr[i-1];
  }
  arr[idx] = num;
  len++;

  for(int i = 0; i < len; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

// 배열 임의의 원소 삭제
void erase(int idx, int arr[], int& len)
{
  for(int i = idx; i < len; i++)
  {
      arr[i] = arr[i+1];
  }
  len--;

  for(int i = 0; i < len; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
}




int main()
{
  int arr[10] = {10, 50, 40, 30, 70, 20};
  int len = 6;
  insert(3, 60, arr, len);
  erase(4, arr, len);

  // 전체를 특정값으로 초기화 하는 방법
int a[21];
int b[21][21];

// 1.memset (비추천) cstring 헤더
memset(a, 0, sizeof a);
memset(b, 0, sizeof b);

// 2.for (추천)
for(int i = 0; i < 21; i++)
	a[i] = 0;
for(int i = 0; i < 21; i++)
	for(int j = 0; j < 21; j++)
    	b[i][j] = 0;
        
// 3.fill (추천)
fill(a, a+21, 0);
for(int i = 0; i < 21; i++)
	fill(b[i], b[i]+21, 0);



  return 0;
}