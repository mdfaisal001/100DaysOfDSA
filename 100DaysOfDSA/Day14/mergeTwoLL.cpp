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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *dummy = new ListNode(-1);
        ListNode *temp = dummy;
        ListNode *ptr1 = list1;
        ListNode *ptr2 = list2;

        while (ptr1 != NULL && ptr2 != NULL)
        {
            if (ptr2->val >= ptr1->val)
            {
                temp->next = ptr1;
                ptr1 = ptr1->next;
            }
            else
            {
                temp->next = ptr2;
                ptr2 = ptr2->next;
            }
            temp = temp->next;
        }
        if (ptr1)
        {
            temp->next = ptr1;
        }
        else
        {
            temp->next = ptr2;
        }
        return dummy->next;
    }
};