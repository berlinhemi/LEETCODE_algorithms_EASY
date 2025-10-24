// 16_Binary_Tree_Inorder_Traversal.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
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
    void _postOrderTraversal(TreeNode* root, std::vector<int>& nodes)
    {
        if (!root)
            return;
        if (root->left)
            _postOrderTraversal(root->left, nodes);
        if (root->right)
            _postOrderTraversal(root->right, nodes);
        nodes.push_back(root->val);
    }
public:
    std::vector<int> postOrderTraversal(TreeNode* root)
    {
        std::vector<int> nodes;
        _postOrderTraversal(root, nodes);
        return nodes;
    }
};

int main()
{
    TreeNode* tn = new TreeNode(1);
    tn->left = new TreeNode(3);
    tn->left->left = new TreeNode(5);
    tn->right = new TreeNode(10);
    tn->right->left = new TreeNode(20);
    tn->right->right = new TreeNode(30);

    Solution s;
    std::vector<int> v = s.postOrderTraversal(tn);
    for (const int e : v)
    {
        std::cout << e << " ";
    }
}

