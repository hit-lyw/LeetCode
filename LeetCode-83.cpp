/*************************************************************************
	> File Name: LeetCode-83.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 15时51分37秒
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
    ListNode* deleteDuplicates(ListNode* head) {
    if(head==NULL)return head;
    ListNode *p=head;
    while(p&&p->next){
        if(p->next->val==p->val){
                ListNode *q=p->next;
                p->next=q->next;
                delete q;
        }else{
            p=p->next;
        }
    }    
    return head;   
    }
};
