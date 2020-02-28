/*************************************************************************
	> File Name: LeetCode-107.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 17时28分37秒
 ************************************************************************/

#include<iostream>
using namespace std;
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
vector<vector<int>> list;
queue<TreeNode*>q;
if(root == nullptr)
return list;

    q.push(root);
    
    while(!q.empty())
    {
        int length = q.size();
        vector<int> _list;
        for(int i = 0; i < length; ++i)
        {
            TreeNode* tmp = q.front();
            q.pop();
            _list.push_back(tmp->val);
            
            if(tmp->left)
            {
                q.push(tmp->left);
            }
            if(tmp->right)
            {
                q.push(tmp->right);
            }
        }
        list.push_back(_list);
    }
    
    for(size_t i = 0; i < (list.size() + 1) / 2; i++)
    {
        vector<int> temp = list[i];
        list[i] = list[list.size() - i -1];
        list[list.size() - i - 1] = temp;
    }
    return list;
    
}

};
