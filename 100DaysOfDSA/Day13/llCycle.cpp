/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        ListNode *slowptr = head;
        ListNode *fastptr = head->next;
        if (head == NULL)
            return false;
        while (fastptr != NULL && fastptr->next != NULL)
        {
            slowptr = slowptr->next;
            fastptr = fastptr->next->next;
            if (fastptr == slowptr)
            {
                return true;
            }
        }

        return false;
    }
}; // 0(N)  optimal

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        ListNode *temp = head;
        unordered_set<ListNode *> map;
        while (temp != NULL)
        {
            if (map.find(temp) != map.end())
            {
                return true;
            }
            map.insert(temp);
            temp = temp->next;
        }
        return false;
    }
}; // better