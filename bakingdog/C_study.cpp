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

int main()
{
 cout << func1(16) << endl;
 cout << func1(34567);

  return 0;
}