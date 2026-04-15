#include <iostream>

using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode()
    {
        val = 0;
        next = nullptr;
    }

    ListNode(int value)
    {
        val = value;
        next = nullptr;
    }

    ListNode(int value, ListNode *nextNode)
    {
        val = value;
        next = nextNode;
    }
};

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *current = head;
        int count = 0;
        while (current->next != nullptr)
        {
            count++;
            current = current->next;
        }
        ListNode *dummy = new ListNode(0);
        current = dummy;
        dummy->next = head;
        for (int i = 0; i <= count - n; i++)
        {
            current = current->next;
        }
        current->next = current->next->next;
        return dummy->next;
    }
};
