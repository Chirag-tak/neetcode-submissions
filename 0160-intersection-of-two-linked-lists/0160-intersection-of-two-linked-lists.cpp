/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode *head1 = headA, *head2 = headB;

        if (!headA || !headB) {
            return NULL;
        }

        while (head1) {
            while (head2) {
                if (head1== head2) {
                    return head1;
                }
                    head2 = head2->next;
            }
            head1=head1->next;
            head2 = headB;
        }
        return NULL;
    }
};