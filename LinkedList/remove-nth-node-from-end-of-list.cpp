
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

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode *t = head;
        while(t)
        {
            count++;
            t = t->next;
        }

        if(count == n)
            return head->next;
        
        ListNode *t1 = head;
        int i = 0;
        while(i < count - n - 1)
        {
            t1 = t1->next;
            i++;
        }

        if(count - n - 1 < 0)
            return NULL;
        
        t1->next = t1->next->next;
        return head;
    }
};
