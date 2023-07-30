#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void find(vector<int>&v,TreeNode* root){
   if(root==NULL) return ;
   find(v,root->left);
   v.push_back(root->data);
   find(v,root->right);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
   vector<int>v;
   find(v,root);
   return v;
}