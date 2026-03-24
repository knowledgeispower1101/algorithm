#include <iostream>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode()
    {
        this->val = 0;
        this->next = nullptr;
    }
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
};
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *result = new ListNode(0);
        ListNode *dummy = result;
        int carry = 0;
        while (l1 != nullptr || l2 != nullptr)
        {
            int val1 = l1 != nullptr ? l1->val : 0;
            int val2 = l2 != nullptr ? l2->val : 0;
            int value = val1 + val2 + carry;
            dummy->next = new ListNode(value % 10);
            dummy = dummy->next;
            carry = value / 10;
            if (l1 != nullptr)
                l1 = l1->next;
            if (l2 != nullptr)
                l2 = l2->next;
        }
        if (carry > 0)
        {
            dummy->next = new ListNode(carry);
        }
        return result->next;
    }
};

void printList(ListNode *head)
{
    while (head != nullptr)
    {
        cout << head->val;
        if (head->next != nullptr)
            cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    ListNode *l1 = new ListNode(9);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    ListNode *l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    Solution sol;
    ListNode *result = sol.addTwoNumbers(l1, l2);
    printList(result);
    return 0;
}