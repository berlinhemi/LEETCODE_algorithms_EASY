#include <iostream>
#include <algorithm>

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};


class Solution
{
public:
    int minDepth(TreeNode* node);
};


int Solution::minDepth(TreeNode* node)
{

    if (!node)
    {
        return 0;
    }
    int lDepth = minDepth(node->left);
    int rDepth = minDepth(node->right);
    if (std::min(lDepth, rDepth) == 0)
        return std::max(lDepth, rDepth) + 1;
    return std::min(lDepth, rDepth) + 1;
}


int main()
{
    Solution s;
    TreeNode* root = new TreeNode(1);

   // root->left = new TreeNode(2);
    //root->left->left = new TreeNode(3);
   // root->left->right = new TreeNode(4);

    root->right = new TreeNode(2);
    //root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);
    root->right->right->right = new TreeNode(4);

    std::cout << s.minDepth(root);
}

