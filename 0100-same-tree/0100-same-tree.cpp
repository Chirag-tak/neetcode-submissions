/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    bool treverse(TreeNode *p,TreeNode *q){
         if(p && !q){
            return false;
        }
        if(q && !p){
            return false;
        }
        if(!p && !q){
            return true;
        }
        while(p && q){
            if(p->val==q->val){
                return (treverse(p->right,q->right) && treverse(p->left,q->left));
            }else{
                return false;
            }
        }
        return false;
    }
public:

    bool isSameTree(TreeNode* p, TreeNode* q) {
    return treverse(p,q);
    }
};