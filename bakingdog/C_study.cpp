#include <iostream>
using namespace std;
#include <vector>


int func2(int arr[], int N)
{
  for(int i = 0; i < N; i++)
  {
    if(i < N)
    {
      for(int j = i + 1; j < N; j++)
      {
        if(arr[i] + arr[j] == 100)
        return 1;
      }
    }
  }

  return 0;
}


int main()
{
  // 바킹독 0x03 연습문제
  //주어진 길이 N의 int배열 arr에서 합이 100인 서로 다른 위치의 두 원소가 존재하면
  //1을, 존재하지않으면 0을 반환하는 함수 func2(int arr[], int N)을 작성하라
  //arr의 각 수는 0이상 100이하이고 N은 1000이하이다.
  
  int arr[] = {1,48,52};
  int arr1[] = {50,42};
  int arr2[] = {4,13,63,87};
  
  int result = func2(arr,3);
  int result1 = func2(arr1,2);
  int result2 = func2(arr2,4);
  
  cout << result << endl;
  cout << result1 << endl;
  cout << result2 << endl;
  return 0;
}