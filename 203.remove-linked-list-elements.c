/*
 * @lc app=leetcode id=203 lang=c
 *
 * [203] Remove Linked List Elements
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
      struct ListNoden *temp;
    int count=0;
    temp=head;
    while(temp->next!= NULL)
    {
        count++;
        temp=temp->next;
    }
    int mid;
    if(count%2==0)
    mid=(count/2);
    else
    mid=(count/2)+1;
    temp=head;
    int i=0;
    while(i<mid)
    {
        head=head->next;
        i++;
    }
    return head;
}
// @lc code=end
