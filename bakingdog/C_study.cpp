#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

//다시 복귀

// 바킹독 0x0강
// 문제 1
// N 이하의 자연수 중에서 3의 배수이거나, 5의 배수인 수를 모두 합한 값을
// 반환하는 함수 func1(int N)을 작성하라. N은 5만 이하의 자연수이다.

int func1(int N)
{
  int length = N;
  int result = 0;
  for(int i = 0; i < length; i++)
  {
    if(i % 3 == 0 || i % 5 == 0)
    {
        result += i;
    }
  }
  return result;
}

// int func2(int arr[], int N)
// {
//   for(int i = 0; i < N; i++)
//   {
//     // 0부터 N까지 한번씩 더해보는 것
//     for(int j = i+1; j < N; j++)
//     {
//         if(arr[i] + arr[j] == 100)
//         return 1;
//     }
//   }

//   return 0;
// }

// 좀 더 빠른 시간복잡도
int func2(int arr[], int N)
{
  int record[101];

  for(int i = 0; i < 101; i++)
  {
    record[i] = 0;
  }

  for(int i = 0; i < N; i++)
  {
    //arr[0] 이 32고
    //arr[2] 이 68 이라 치면
    int compare = 100 - arr[i];
    if(record[compare] == 1)
    {
      return 1;
    }
    record[arr[i]] = 1;
  }

  return 0;
}

int main()
{
  cout << func1(16) << endl;
  cout << func1(34567) << endl;


  int a[3] = {1,52,48};
  int b[2] = {50,42};
  int c[4] = {4,13,63,87};

  cout << func2(a,3) << endl;
  cout << func2(b,2) << endl;
  cout << func2(c,4) << endl;
  return 0;
}