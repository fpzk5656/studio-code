#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cstring>
#include <list>

// 바킹독 0x4강

int main()
{
    list<int> L = {1,2}; // 1 2
    list<int>::iterator t = L.begin(); // t는 1을 가리키는 중
    L.push_front(10); // 10 1 2
    cout << *t << '\n'; // t가 가리키는 값 = 1을 출력
    L.push_back(5); // 10 1 2 5
    L.insert(t, 6); // t가 가리키는 곳 앞에 6을 삽입, 10 6 1 2 5
    t++;    // t를 1칸 앞으로 전진, 현재 t가 가리키는 값은 2
    t = L.erase(t); // t가 가리키는 값을 제거, 그 다음 원소인 5의 위치를 반환
                    // 10 6 1 5, t가 가리키는 값은 5
    cout << *t << '\n';  // 5
    for(auto i : L) cout << i << ' ';   //iterator가 치기 싫다면, auto t = L.begin();를 해왔어도 괜찮다 함
    cout << '\n';
    for(list<int>::iterator it = L.begin(); it != L.end(); it++)    //C++11 미만이라면, 이렇게 돌리는 수 밖에..
        cout << *it << ' ';

    return 0;
}