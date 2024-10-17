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
    ListNode *reverseList(ListNode *head)
    {
        ListNode *current = head;
        vector<int> reversed;
        while (current != NULL)
        {
            reversed.push_back(current->val);
            current = current->next;
        }
        // brute
        current = head;
        while (current != NULL)
        {
            current->val = reversed.back();
            reversed.pop_back();
            current = current->next;
        }
        return head;
    }
};

// optimized with three pointersa and reverse the pointers

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
    ListNode *reverseList(ListNode *head)
    {
        ListNode *current = head;
        ListNode *mover = NULL;
        ListNode *prev = NULL;
        while (current != NULL)
        {
            mover = current->next;
            current->next = prev;
            prev = current;
            current = mover;
        }
        return prev;
    }
};