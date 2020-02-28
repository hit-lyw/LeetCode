/*************************************************************************
	> File Name: LeetCode-203.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 17时20分18秒
 ************************************************************************/

#include<iostream>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return NULL;
        ListNode*H = new ListNode(-1);
        H->next = head;
        ListNode*p = H;
        ListNode*s =NULL;
        while(p->next!=NULL)
        {
            if(p->next->val==val)
            {
                s= p->next;
                p->next = p->next->next;
                delete s;
            }else
                p = p->next;
        }
        return H->next;
    }
};
