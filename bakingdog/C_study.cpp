#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cstring>
#include <list>
#include <string>

int sexual[1000];
int grade[1000];
int roomCnt[2][7];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N = 0;
    cin >> N;    // 학생 수
    int k = 0;
    cin >> k;    // 방 최대 인원
    int s,y = 0;
    // 성별은 0, 1로 구분/ 학년은 1~6까지
    
    for(int i = 0; i < N; i++)
    {
        // 성별
        cin >> s;
        // 학년
        cin >> y;
        
        //sexual[s]++;
        //grade[y]++;
        roomCnt[s][y]++;
    }
    int count = 0;
    
    for(int i = 0; i < 2; i++)
    {
        for(int j = 1; j < 7; j++)
        {
            count += (roomCnt[i][j] / k);
            roomCnt[i][j] %= k;
            if(roomCnt[i][j] > 0)
            {
                count++;
            }
        }
    }
    
    cout << count;
    return 0;
}