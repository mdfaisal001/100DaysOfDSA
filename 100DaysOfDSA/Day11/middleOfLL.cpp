/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
private:
    int lengthOfLL(ListNode *head)
    {
        ListNode *mover = head;
        int count = 0;
        while (mover)
        {
            count++;
            mover = mover->next;
        }
        return count;
    }

public:
    ListNode *middleNode(ListNode *head)
    {
        int len = lengthOfLL(head);
        int middle = len / 2;
        ListNode *temp = head;
        for (int i = 0; i < middle; i++)
        {
            temp = temp->next;
        }
        return temp;
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *slowPtr = head;
        ListNode *fastPtr = head; // for(reference)initialized both pointers in head;
        while (fastPtr != nullptr && fastPtr->next != nullptr)
        {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
        }
        return slowPtr;
    }
}; // O(N)