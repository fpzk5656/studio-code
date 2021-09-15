#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

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
}

int main()
{
  int arr[10] = {10, 50, 40, 30, 70, 20};
  int len = 6;
  insert(3, 60, arr, len);
  erase(4, arr, len);

  return 0;
}