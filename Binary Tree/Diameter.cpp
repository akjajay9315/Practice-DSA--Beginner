/* Normal recursive solution , we call height as well as diametere function ....i.e.opt-1, 
left me diametre,right me diametre, and height left plus height right + 1.

so optimised solution is....*/

class Solution {
public:
    pair<int,int> diameterFast(TreeNode* root) {
        if(root == NULL){
            pair<int,int> p = make_pair(0,0);
            return p;
        }
        pair<int,int> left = diameterFast(root->left);
        pair<int,int> right = diameterFast(root->right);

        int opt1 = left.first;
        int opt2 = right.first;
        int opt3 = left.second + right.second + 1;

        pair<int,int> ans;
        ans.first= max(opt1, max(opt2,opt3));
        ans.second= max(left.second, right.second) + 1;

        return ans;
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        return diameterFast(root).first;
    }
    
};
// this solution not running in leetcode

// but this works--------
class Solution
{
private:
    int height(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int l = height(root->left);
        int r = height(root->right);
        return max(l, r) + 1;
    }

public:
    int diameterOfBinaryTree(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int o1 = diameterOfBinaryTree(root->left);
        int o2 = diameterOfBinaryTree(root->right);
        int o3 = height(root->left) + height(root->right);
        return max(o1, max(o2, o3));
    }
};