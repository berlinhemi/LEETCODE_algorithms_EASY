

#include <iostream>
#include <vector>

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

  class Solution {
  private:
      void _preorderTraversal(TreeNode* root, std::vector<int>& nodes)
      {
          if (!root)
              return;
          nodes.push_back(root->val);
          if (root->left)
              _preorderTraversal(root->left, nodes);
          
          if (root->right)
              _preorderTraversal(root->right, nodes);
      }
  public:
      std::vector<int> preorderTraversal(TreeNode* root)
      {
          std::vector<int> nodes;
          _preorderTraversal(root, nodes);
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
      std::vector<int> v = s.preorderTraversal(tn);
      for (const int e : v)
      {
          std::cout << e << " ";
      }
  }

