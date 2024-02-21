// 18_Symmetric_Tree.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
    bool walk(TreeNode* l, TreeNode* r);
public:
    bool isSymmetric(TreeNode* root);
};


bool Solution::walk(TreeNode* l, TreeNode* r)
{
    if (!l || !r) 
        return l == r;
    if (l->val != r->val)
        return false;
    return walk(l->left, r->right) && walk(l->right, r->left);
}

bool Solution::isSymmetric(TreeNode* root)
{
    if (root == nullptr)
        return true;
    if (root->left == nullptr && root->right == nullptr)
        return true;
    if (root->left == nullptr && root->right != nullptr)
        return false;
    if (root->left != nullptr && root->right == nullptr)
        return false;
    
    return walk(root->left, root->right);
}




int main()
{
    TreeNode* root = new TreeNode(1);

    /*root->left = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = nullptr;
    root->left->left->left = nullptr;
    root->left->left->right = new TreeNode(5);

    root->right = new TreeNode(3);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(4);*/

    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);

    root->right = new TreeNode(2);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);

    //root->left = new TreeNode(2);
    //root->left->left = nullptr;
    //root->left->right = new TreeNode(3);

    //root->right = new TreeNode(2);
    //root->right->left = nullptr;
    //root->right->right = new TreeNode(3); 

    Solution s;

    std::cout << (s.isSymmetric(root) ? "Yes" : "No");

}

