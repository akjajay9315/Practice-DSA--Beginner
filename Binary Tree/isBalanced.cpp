class Solution
{
public:
    bool isBalanced(TreeNode *root)
    {
        if (root == NULL)
            return true;

        if (Height(root) == -1)
            return false;
        
        return true;
    }

    int Height(TreeNode *root)
    {
        // Base case...
        if (root == NULL)
            return 0;

        int leftHeight = Height(root->left);
        int rightHight = Height(root->right);
        if (leftHeight == -1 || rightHight == -1 || abs(leftHeight - rightHight) > 1)
            return -1;
        return max(leftHeight, rightHight) + 1;
    }
};
// unoptimised solution/
// this is optimised solution----------------
class Solution
{
public:
    pair<bool, int> isBalancedFast(TreeNode *root)
    {
        if (root == NULL)
        {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }
        pair<bool, int> left = isBalancedFast(root->left);
        pair<bool, int> right = isBalancedFast(root->right);

        bool leftAns = left.first;
        bool rightAns = right.first;
        bool diff = abs(left.second - right.second) <= 1;

        pair<bool, int> ans;
        ans.second = max(left.second, right.second) + 1;

        if (leftAns && rightAns && diff)
        {
            ans.first = true;
        }
        else
        {
            ans.first = false;
        }
        return ans;
    }
    bool isBalanced(TreeNode *root)
    {
        return isBalancedFast(root).first;
    }
};