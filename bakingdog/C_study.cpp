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
    
    int k = N;
    int i = 1;
    while(k--)
    {
        int b = k;
        while(b--)
        {
                cout << " ";
        }
        
        int s = 2 * i - 1;
        
        while(s--)
        {
            cout << "*";
        }
        
        cout << '\n';
        i++;
    }
    return 0;
}