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
    int height(TreeNode* root) {
        
        int leftCount = 0;
        int rightCount = 0;

        if (root == nullptr)
            return 0;
 leftCount = height(root->left);
if (leftCount == -1) return -1;

rightCount = height(root->right);
if (rightCount == -1) return -1;


        if(leftCount-rightCount>1 || leftCount-rightCount <-1)
        {
            return -1;
        }else return 1+max(leftCount,rightCount);
    }
    bool isBalanced(TreeNode* root) {
        if(root== nullptr) return true;
        int h = height(root);
        if(h==-1){
            return false;
        }
        return true;
    }
};