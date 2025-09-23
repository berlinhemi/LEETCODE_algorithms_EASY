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


class Solution {
private:
    void treeWalkPathSum(TreeNode* node, int sum, bool& result)
    {
        
        sum -= node->val;
        std::cout << "node: " << node->val << " sum: " << sum << std::endl;
        // Ensure that node is leaf
        if (sum == 0 && !node->left && !node->right)
            result = true;
        if (node->left && !result)
            treeWalkPathSum(node->left, sum, result);
        std::cout << "[r]node: " << node->val << " sum: " << sum << std::endl;
        if (node->right && !result)
            treeWalkPathSum(node->right, sum, result);
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) 
    {
        bool result = false;
        if(root)
            treeWalkPathSum(root, targetSum, result);
        return result;
    }
};


int main()
{
    Solution s;

    TreeNode* root = new TreeNode(5);

    root->left = new TreeNode(4);
    root->left->left = new TreeNode(11);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);

    root->right = new TreeNode(8);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);
    root->right->right->right = new TreeNode(1);

    std::cout << s.hasPathSum(root, 1 );
}
