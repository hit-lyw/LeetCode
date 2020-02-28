/*************************************************************************
	> File Name: LeetCode-234.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 17时23分30秒
 ************************************************************************/

#include<iostream>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


bool isPalindrome(struct ListNode* head){
    if(head==0||head->next==0) return 1;
    struct ListNode* slow_p=head,* p=head;
    
    //找到链表的中间节点。
    while(p->next!=0&&p->next->next!=0){
        slow_p=slow_p->next;
        p=p->next->next;
    }
    
    //将链表分成两半。
    struct ListNode* head_=slow_p->next;
    slow_p->next=0;
    
    //将第二个链表反转。
    p=head_;
    while(p->next!=0){
        slow_p=head_;
        head_=p->next;
        p->next=p->next->next;
        head_->next=slow_p;
    }
    
    //按顺序比较两链表val值。
    while(head_!=0){
        if(head->val!=head_->val) return 0;
        head=head->next;
        head_=head_->next;
    }
    return 1;
}
