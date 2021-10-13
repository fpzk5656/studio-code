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
    
    int y = 0;

    int m = 0;
    //Y 30초10원 M 60초 15원
    for(int i = 0; i < N; i++)
    {
        int k = 0;
        cin >> k;
        
        int thirty = 0;
        int minute = 0;
        
        thirty += k / 30;
        if(k != 0 && (k % 30) < 30)thirty++;
            
        minute += k / 60;
        if(k != 0 && (k % 60) < 60)minute++;
        
        y += thirty * 10;
        m += minute * 15;
    }
    
    if(m > y)
    {
        cout << "Y" << ' ' << y;
    }
    else if(m < y)
    {
        cout << "M" << ' ' << m;
    }
    else
    {
        cout << "Y" << ' ' << "M" << ' ' << m; 
    }

    return 0;
}