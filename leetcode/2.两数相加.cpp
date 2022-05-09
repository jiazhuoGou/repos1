/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // 把0的都考虑进去
        if (l1->val == 0 || l2->val == 0)
        {   
            return l1->val!=0?l1:l2;
        }
        // 常规情况
        ListNode *p1 = nullptr;
        p1 = l1;
        ListNode *p2 = nullptr;
        p2 = l2; // 结果存在l2中
        int carry = 0; // 存放进位
        while (p1 && p2)
        {
            if (p1->val + p2->val > 9)
            {
                carry = 1;
                p2->val = p1->val + p2->val - 10;
            }
            else
            {
                carry = 0;
                p2->val = p1->val + p2->val;
            }
            p1 = p1->next;
            p2 = p2->next;
            p2->val += carry; // 补上进位，现在大不大于10不重要
        }
        return p2;
    }
};
// @lc code=end

