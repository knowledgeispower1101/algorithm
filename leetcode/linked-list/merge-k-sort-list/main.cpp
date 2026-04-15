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
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        if (lists.empty())
            return nullptr;
        if (lists.size() == 1)
            return lists[0];
        for (int i = 1; i < lists.size(); i++)
        {
            lists[i] = merge(lists[i], lists[i - 1]);
        }
        return lists.back();
    }

private:
    ListNode *merge(ListNode *nodeA, ListNode *nodeB)
    {
        ListNode dummyNode;
        ListNode *current = &dummyNode;
        while (nodeA != nullptr && nodeB != nullptr)
        {
            if (nodeA->val <= nodeB->val)
            {
                current->next = nodeA;
                nodeA = nodeA->next;
            }
            else
            {
                current->next = nodeB;
                nodeB = nodeB->next;
            }
            current = current->next;
        }
        if (nodeA != nullptr)
        {
            current->next = nodeA;
            return dummyNode->next;
        }
        current->next = nodeB;
        return dummyNode.next;
    }
};

int main()
{

    return 0;
}