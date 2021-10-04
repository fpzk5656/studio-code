#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cstring>
#include <list>
#include <string>

struct ListNode
{
    string val;
    ListNode* next;
};

class List
{
    public:
        ListNode* head;

        void push(string val)
        {
            ListNode* node = new ListNode();
            node->val = val;
            node->next = nullptr;

            if(head == nullptr)
            {
                head = node;
            }
            else
            {
                ListNode* t = head;
                while(t->next != nullptr)
                {
                    t = t->next;
                }
                t->next = node;
            }
        }

        bool isCycle(ListNode* head)
        {
            ListNode* slower = head;
            ListNode* faster = head;
            bool flag = false;

            while(slower && faster && faster->next)
            {
                slower = slower->next;
                faster = faster->next->next;
                if(slower == faster)
                {
                    flag = true;
                    break;
                }
            }
            return flag;
        }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    return 0;
}