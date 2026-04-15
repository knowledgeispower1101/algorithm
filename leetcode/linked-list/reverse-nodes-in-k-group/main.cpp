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
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        ListNode dummy(0);
        dummy.next = head;

        ListNode *groupPrev = &dummy;

        while (true)
        {
            ListNode *kth = getKth(groupPrev, k);
            if (!kth) break;

            ListNode *groupNext = kth->next;

            ListNode *prev = groupNext;
            ListNode *curr = groupPrev->next;

            while (curr != groupNext)
            {
                ListNode *tmp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = tmp;
            }

            ListNode *tmp = groupPrev->next;
            groupPrev->next = kth;
            groupPrev = tmp;
        }

        return dummy.next;
    }

private:
    ListNode *getKth(ListNode *start, int k)
    {
        while (start != nullptr && k > 0)
        {
            start = start->next;
            k--;
        }
        return start;
    }
};