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
private:
    void preorderLeftFirstTraversal(TreeNode* root, std::vector<int>& travers, int l = 0, int r = 0);
    void preorderRigthFirstTraversal(TreeNode* root, std::vector<int>& travers, int l = 0, int r = 0);
public:
    bool isSymmetric(TreeNode* root);
};



void Solution::preorderLeftFirstTraversal(TreeNode* root, std::vector<int>& travers, int l , int r )
{

    if (!root)
    {
        return;
    }
   
    travers.push_back(root->val);
    //travers.push_back(h);
    if (root->left)
    {
        travers.push_back(l-1);
        //travers.push_back(r);
        preorderLeftFirstTraversal(root->left, travers, l-1, r);
    }
    travers.push_back(100);
    if (root->right)
    {
        //travers.push_back(l);
        travers.push_back(r+1);
        preorderLeftFirstTraversal(root->right, travers, l, r+1);
    }

}

void Solution::preorderRigthFirstTraversal(TreeNode* root, std::vector<int>& travers, int l , int r )
{
    if (!root)
    {
        return;
    }
    travers.push_back(root->val);
   // travers.push_back(h);
    if (root->right)
    {
        //travers.push_back(l);
        travers.push_back(r-1);
        preorderRigthFirstTraversal(root->right, travers, l, r-1);
    }
    travers.push_back(100);
    if (root->left)
    {
        travers.push_back(l+1);
        //travers.push_back(r);
        preorderRigthFirstTraversal(root->left, travers, l+1, r);
    }
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
  
    
    std::vector<int> traversLeft;
    //int height = 0;
    preorderLeftFirstTraversal(root->left, traversLeft);

    std::vector<int> traversRight;
    //height = 0;
    preorderRigthFirstTraversal(root->right, traversRight);
    if (traversLeft.size() != traversRight.size())
    {
        return false;
    }
    for (int i = 0; i < traversLeft.size(); i++)
    {
        if (traversLeft[i] != traversRight[i])
            return false;
    }
    return true;
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

