class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {

        unordered_set<ListNode*> st;

        for (ListNode* p = headA; p != NULL; p = p->next) {
            st.insert(p);
        }

        for (ListNode* p = headB; p != NULL; p = p->next) {
            if (st.find(p) != st.end()) {
                return p;
            }
        }

        return NULL;
    }
};