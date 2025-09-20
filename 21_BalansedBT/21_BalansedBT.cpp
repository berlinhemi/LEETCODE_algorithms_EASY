#include <iostream>
#include <algorithm>
#include <vector>


struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
private:
    int maxDepth(TreeNode* node)
    {
        if (!node)
        {
            return 0;
        }
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);
        return std::max(lDepth, rDepth) + 1;
    }

public:
    bool isBalanced(TreeNode* node) {
        if (!node)
            return true;
        if (!node->left && !node->right)
            return true;
        int diff = std::abs(maxDepth(node->left) - maxDepth(node->right));
        std::cout << "node:" << node->val << " diff:" << diff << std::endl;
        if (diff > 1)
            return false;
        return isBalanced(node->left) && isBalanced(node->right);
    } 
};

int main()
{
    Solution s;
    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);

    root->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    root->right->right->right = new TreeNode(10);
    root->right->right->right->right = new TreeNode(12);

    std::cout << s.isBalanced(root);
}