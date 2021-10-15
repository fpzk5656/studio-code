#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cstring>
#include <list>
#include <string>

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N = 0;
    cin >> N;
    while(N--)
    {
        int A = 0;
        int B = 0;
        cin >> A;
        cin >> B;
        cout << A+B << '\n';
    }
    return 0;
}