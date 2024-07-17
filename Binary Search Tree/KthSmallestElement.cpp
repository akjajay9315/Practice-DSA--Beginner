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



// tc -O(N), SC- "O(H)"

class Solution
{

public:
    int solve(TreeNode *root, int &i, int k)
    {
        if (root == NULL)
        {
            return -1;
        }
        // L
        int left = solve(root->left, i, k);

        if (left != -1)
        {
            return left;
        }

        // N
        i++;
        if (i == k)
        {
            return root->val;
        }

        // R
        return solve(root->right, i, k);
    }
    int kthSmallest(TreeNode *root, int k)
    {
        int i = 0;
        int ans = solve(root, i, k);
        return ans;
    }
};
// h/w - Do By Morris Traversal Sc - o(1) & tc- o(n)

// For kth largest element same code but (n-k+1)th smallest term