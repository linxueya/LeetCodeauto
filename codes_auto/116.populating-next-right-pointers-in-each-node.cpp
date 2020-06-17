#
# @lc app=leetcode.cn id=116 lang=cpp
#
# [116] populating-next-right-pointers-in-each-node
#
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        Node* head = root;
        if(head == NULL)
            return NULL;
        head->next = NULL;
        dfs(root);
        return head;
    }
    void dfs(Node* root){
        if(!root)
            return ;
        if(root->left){
            root->left->next = root->right;
            Node* templ =root->left;
            Node* tempr =root->right;
            while(templ && tempr){
                if((templ->right && tempr->left))
                    templ->right->next = tempr->left;
                templ = templ->right;
                tempr = tempr->left;
            }      
        }

        dfs(root->left);
        dfs(root->right);
    }
};
# @lc code=end