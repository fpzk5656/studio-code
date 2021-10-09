#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cstring>
#include <list>
#include <string>

int A[3];

// sort 사용해보기
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i = 0; i < 3; i++)
    {
        cin >> A[i];
    }
    sort(A, A+3);
    
    for(int i = 0; i < 3; i++)
    {
        cout << A[i] <<' ';
    }
    
    return 0;
}