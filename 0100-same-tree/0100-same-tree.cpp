class Solution {
    bool treverse(TreeNode* p, TreeNode* q) {
        if (!p && !q) return true;
        if (!p || !q) return false;

        if (p->val != q->val)
            return false;

        return treverse(p->left, q->left) &&
               treverse(p->right, q->right);
    }

public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return treverse(p, q);
    }
};