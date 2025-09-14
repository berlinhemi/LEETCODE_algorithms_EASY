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
    void appendChilds(TreeNode* node, std::vector<int>& nums, size_t begin, size_t end)
    {
        if (begin == end)
            return;

        size_t mid = begin + (end - begin) / 2;

        if (mid > begin)
        {
            size_t left_pos = begin + (mid - 1 - begin) / 2;
            if (left_pos != mid)
            {
                node->left = new TreeNode(nums[left_pos]);
                appendChilds(node->left, nums, begin, mid - 1);
            }
        }
        
        if (mid < end)
        {
            size_t right_pos = mid + 1 + (end - (mid + 1)) / 2;
            if (right_pos != mid)
            {
                node->right = new TreeNode(nums[right_pos]);
                appendChilds(node->right, nums, mid + 1, end);
            }
        }
       
    }
public:
    TreeNode* sortedArrayToBST(std::vector<int>& nums) 
    {
        size_t mid = 0 + (nums.size() - 1) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        appendChilds(root, nums, 0, nums.size() - 1);
        return root;
    }
};

int main()
{
    Solution s;
    //TreeNode* root = new TreeNode(1);
    std::vector<int> data{ 1,3 };
    //std::vector<int> data{ -10,-5,-4,3,4,7,8,15 };
    TreeNode* root = s.sortedArrayToBST(data);
    std::cout << "end";
}
