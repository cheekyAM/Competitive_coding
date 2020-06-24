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
public:
    int countNodes(TreeNode* root) {
        if(root==NULL)
            return 0;
        queue<TreeNode*> q;
        int cnt=0;
        q.push(root);
       
        while(q.size() !=0){
            TreeNode* n=q.front();
             cnt++;
            q.pop();
            if(n->left)
                q.push(n->left);
            if(n->right)
                q.push(n->right);
        }
        return cnt;
    }
};
