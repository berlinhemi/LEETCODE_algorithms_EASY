// 16_Binary_Tree_Inorder_Traversal.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

struct TreeNode 
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
private:
    void _inorderTraversal(TreeNode* root, std::vector<int>& nodes)
    {
        if (!root)
            return;
        if (root->left)
            _inorderTraversal(root->left, nodes);
        nodes.push_back(root->val);
        if (root->right)
            _inorderTraversal(root->right, nodes);
    }
public:
    std::vector<int> inorderTraversal(TreeNode* root) 
    {
        std::vector<int> nodes;
        _inorderTraversal(root, nodes);
        return nodes;
    }
};

int main()
{
    TreeNode* tn = new TreeNode(1);
    tn->right = new TreeNode(2);
    tn->right->left = new TreeNode(3);
   
    Solution s;
    std::vector<int> v = s.inorderTraversal(tn);
    for (const int e : v)
    {
        std::cout << e << " ";
    }
}

