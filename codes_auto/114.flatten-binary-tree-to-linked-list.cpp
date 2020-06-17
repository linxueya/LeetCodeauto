#
# @lc app=leetcode.cn id=114 lang=cpp
#
# [114] flatten-binary-tree-to-linked-list
#
class Solution {
public:
    vector<int> head;
    void flatten(TreeNode* root) {
        if (!root)
            return;
        flatten1(root);
        root->left = NULL;
        root->right = NULL;
        for (int i = 1; i < head.size(); i++)
            InsertIntoBitTree(&root, head[i]);

    }
    void flatten1(TreeNode* root) {
        if (!root)
            return;
        head.push_back(root->val);
        flatten1(root->left);
        flatten1(root->right);
    }
    void InsertIntoBitTree(TreeNode** root, int data)
    {
        TreeNode* newNode = new TreeNode(data);
        newNode->left = NULL;
        newNode->right = NULL;
        if (*root == NULL)//说明是空树
        {
            *root = newNode;//将新结点的指针newNode赋值给根结点的指针
            (*root)->left = NULL;
            (*root)->right = NULL;
        }
        else if ((*root)->right == NULL) {
            (*root)->left = NULL;
            (*root)->right = newNode;
        }
        else
            InsertIntoBitTree(&((*root)->right), data);
    }
};
# @lc code=end