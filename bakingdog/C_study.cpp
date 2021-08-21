#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

// 바킹독의 풀이 (시간복잡도 절약 버전)
// int func2(int arr[], int N)
// {
//   // 어차피 들어올 숫자는 0이상 100이하니까
//   // 체크할 배열 101칸짜리를 하나 만들고
//   int occur[101] = {};

//   for (int i = 0; i < N; i++)
//   {
//     //occur[arr[i]] = 1;을 해주어서 매개로 들어온 숫자의 인덱스에 1을 할당한다.

//     //해서 새로 만든 배열의 인덱스에 들어온 숫자로 깎았을 때
//     //합치면 100이 될 수 있는 수가 인덱스번호에 1이 들어있다면 100이 될 수 있단 뜻이니 OK
//     if (occur[100 - arr[i]] == 1)
//     {
//       return 1;
//     }
//     occur[arr[i]] = 1;
//   }
//   return 0;
// }

int main()
{
  // 바킹독 0x03 연습문제
  //주어진 길이 N의 int배열 arr에서 합이 100인 서로 다른 위치의 두 원소가 존재하면
  //1을, 존재하지않으면 0을 반환하는 함수 func2(int arr[], int N)을 작성하라
  //arr의 각 수는 0이상 100이하이고 N은 1000이하이다.
  
  // int arr[] = {1,48,52};
  // int arr1[] = {50,42};
  // int arr2[] = {4,13,63,87};
  
  // int result = func2(arr,3);
  // int result1 = func2(arr1,2);
  // int result2 = func2(arr2,4);
  
  // cout << result << endl;
  // cout << result1 << endl;
  // cout << result2 << endl;

  int arr[] = {8, 4, 6, 8};
  int num1 = -1;
  int num2 = -1;
  // 네칸짜리 배열에서 최댓값 찾기
  int mx = arr[0];
  for(int i = 1; i < 4; i++)
  {
    if(mx < arr[i])
    {
      mx = arr[i];
    }
  }
  
  cout << mx;
  cout << *max_element(arr,arr+4);
  return 0;
}