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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *h1,*h2,*ans=NULL;
        if(!list1&&!list2){return NULL;}
        if(list1 && list2==NULL){return list1;}
        if(list2 && list1==NULL){return list2;}
        h1=list1;
        h2=list2;
        ListNode *temp;
        while(h1&&h2)
        {
            if(h1->val>=h2->val){
                if(ans==NULL){
                temp=new ListNode(h2->val);
                ans=temp;}
                else{
                    temp->next=new ListNode(h2->val);
                    temp=temp->next;
                }
                h2=h2->next;
            }else{
                if(ans==NULL){
                temp=new ListNode(h1->val);
                ans=temp;
                }
                else{
                    temp->next=new ListNode(h1->val);
                    temp=temp->next;
                }
                h1=h1->next;
            }
            
        }
        if(h1){
            while(h1){
                temp->next=h1;
                h1=h1->next;
                temp=temp->next;
            }
        }
        if(h2){
            while(h2){
                temp->next=h2;
                h2=h2->next;
                temp=temp->next;
            }
        }
        return ans;
    }
};
