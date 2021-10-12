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
    
    long long A = 0;
    long long B = 0;
    long long C = 0;
    cin >> A;
    cin >> B;
    if(A > B)swap(A,B);
    if(A == B || (A - B == 0))
    {
        
    }
    else
    {
        C = B - A - 1;
    }
    
    cout << C << '\n';
    A += 1;
    
    long long s[C];
    long long k = 0;
    
    while(A < B)
    {
        //cout << A << ' ';
        s[k++] = A;
        A++;
    }
    
    for(int i = 0; i < C; i++)
    {
        cout << s[i] << ' ';
    }
        
    return 0;
}