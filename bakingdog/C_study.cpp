#include <iostream>
using namespace std;

//배열에서 선택한 인덱스에 원소가 추가되고, 삭제되는 함수 만들기
void insert(int idx, int num, int arr[], int& len)
{
  for(int i = len; i > idx; i--)
  {
    arr[i] = arr[i - 1];
  }
  arr[idx] = num;
  len++;

  for(int i = 0; i < len; i++)
  {
    if(i == len-1)
    {
      cout << arr[i]<< "\n\n";
    }
    else
    {
    cout << arr[i] << "\n";
    }
  }
}
void erase(int idx, int arr[], int& len)
{
 len--;
  for(int i = idx; i < len; i++)
  {
    arr[i] = arr[i+1];
  }

  for(int i = 0; i < len; i++)
  {
    if(i == len-1)
    {
    cout << arr[i] << "\n\n";
    }
    else
    {
      cout << arr[i] << "\n";
    }
  }
}

int main()
{
    int arr[10] = {10,50,40,30,70,20};
    int len = 6;
    insert(3, 60, arr, len); // 10 50 40 60 30 70 20
    erase(4, arr, len); // 10 50 40 60 70 20
    return 0;
}