// 17_Same_Tree.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
    void inorderTraversal(TreeNode* root, std::vector<int>& travers);
    std::vector<int> runTravers(TreeNode* root);

public:
    bool isSameTree(TreeNode* p, TreeNode* q);
};


void Solution::inorderTraversal(TreeNode* root, std::vector<int>& travers)
{
    if (!root)
        return;
    if (root->left)
    {
        travers.push_back(-1);
        inorderTraversal(root->left, travers);
    }
    travers.push_back(root->val);
    if (root->right)
    {
        travers.push_back(1);
        inorderTraversal(root->right, travers);
    }
           
}

std::vector<int> Solution::runTravers(TreeNode* root)
{
    std::vector<int> travers;
    inorderTraversal(root, travers);
    return travers;
}
   
bool Solution::isSameTree(TreeNode* p, TreeNode* q)
{
    std::vector<int> travers1 = runTravers(p);
    //inorderTraversal(p, travers1);
    std::vector<int> travers2 = runTravers(q);
    // inorderTraversal(q, travers2);
    if (travers1.size() != travers2.size())
    {
        return false;
    }
    for (int i = 0; i < travers1.size(); i++)
    {
        if (travers1[i] != travers2[i])
            return false;
    }
    return true;
}


int main()
{
    TreeNode* tn1 = new TreeNode(1);
    tn1->right = new TreeNode(2);
    tn1->right->left = new TreeNode(3);

    TreeNode* tn2 = new TreeNode(1);
    tn2->right = new TreeNode(2);
    tn2->right->left = new TreeNode(3);

    Solution s;

    std::cout << (s.isSameTree(tn1, tn2) ? "Yes" : "No");
}

