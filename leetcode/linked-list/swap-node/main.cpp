#include <iostream>
using namespace std;
class Node
{
    int val;
    ListNode *next;
    ListNode()
    {
        this->val = 0;
        this->next = nullptr;
    };
    ListNode(int val)
    {
        this->val = val;
        this->next = nullptr;
    }
    ListNode(int val, ListNode *next)
    {
        this->val = val;
        this->next = next;
    }
}

class Solution
{
    ListNode *swapPair(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode *current = head;
        while (current->next != nullptr)
        {
            int temp = current->next->val;
            current->next->val = current->val;
            current->val = temp;
            if (current->next->next == nullptr)
                break;
            current = current->next->next;
        }
        return head;
    }
};
