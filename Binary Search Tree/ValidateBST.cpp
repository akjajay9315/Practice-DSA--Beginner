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

// BUT this solution not accepted in lc due to int_max int_min
class Solution
{
private:
    bool isBST(TreeNode *root, int min, int max)
    {
        if (root == NULL)
        {
            return true;
        }
        if (root->val > min && root->val < max)
        {
            bool left = isBST(root->left, min, root->val);
            bool right = isBST(root->right, root->val, max);
            return left && right;
        }
        else
        {
            return false;
        }
    }

public:
    bool isValidBST(TreeNode *root)
    {
        return isBST(root, INT_MIN, INT_MAX);
    }
};

// wrong answer ----- 

class Solution
{
public:
    bool isValidBST(TreeNode *root)
    {
        int l = INT_MAX;
        int r = INT_MIN;
        if (root == NULL)
        {
            return true;
        }
        if (root->left != NULL)
        {
            l = root->left->val;
        }
        if (root->right != NULL)
        {
            r = root->right->val;
        }

        bool check = isValidBST(root->left) & isValidBST(root->right) & (root->val >= l && root->val < r);

        return check;
    }
};