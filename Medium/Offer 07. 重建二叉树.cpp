#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
    TreeNode *recursive(vector<int> &pre, int pre_root, int in_left, int in_right)
    {
        // 如何知道这个边界条件？
        if (left > right)
            return nullptr;
        // 将对应的 val 赋给 node 节点
        TreeNode *node = new TreeNode(pre[pre_root]);
        int in_root = dic[pre[pre_root]];
        node->left = recursive(pre, pre_root + 1, in_left, in_root - 1);
        node->right = recursive(pre, pre_root + in_root - in_left + 1, in_root + 1, in_right);
        return node;
    }
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        for (size_t i = 0; i < inorder.size(); i++)
        {
            // 用中序遍历数组建立 值-下标 的映射
            dic[inorder[i]] = i;
        }
        return recursive(preorder, 0, 0, inorder.size() - 1);
    }

private:
    unordered_map<int, int> dic;
};


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       for (int i = 0; i < inorder.size(); i++)
        {
            // 用中序遍历数组建立 值-下标 的映射
            dic[inorder[i]] = i;
        }
        pre=preorder;
        return recursive(0, 0, inorder.size() - 1);
    }
private:
    unordered_map<int, int> dic;
    vector<int> pre;
    TreeNode *recursive(int pre_root, int in_left, int in_right)
    {
        // 如何知道这个边界条件？
        if (in_left > in_right) return nullptr;
        // 将对应的 val 赋给 node 节点
        TreeNode *node = new TreeNode(pre[pre_root]);
        int in_root = dic[pre[pre_root]];
        node->left = recursive(pre_root + 1, in_left, in_root - 1);
        node->right = recursive(pre_root + in_root - in_left + 1, in_root + 1, in_right);
        return node;
    }
};