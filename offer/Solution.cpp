#include "./Solution.h"

    /**
     * @brief   在一个长度为 n 的数组 nums 里的所有数字都在 0～n-1 的范围内。
                * 数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。
                * 请找出数组中任意一个重复的数字。
                输入：
                [2, 3, 1, 0, 2, 5, 3]
                输出：2 或 3 
                * 构造集合，往里面插入，判断是否插入了相同元素，在返回
                * 额外空间可能是O(n), 时间复杂度O(n)
     * @param nums 
     * @return int 
     */
    int Solution::findRepeatNumber(vector<int>& nums) {
        // set<int> S(nums.begin(), nums.end());
        set<int> S;
        int repeat;
        for (auto num : nums)
        {
            auto ret = S.insert(num);
            if(!ret.second)
            {
                repeat = num;
            }
        }
        return repeat;
    }

    /**
     * @brief 在一个 n * m 的二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
     * 请完成一个高效的函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。返回true or false
     * 
     * @param matrix 
     * @param target 目标数
     * @return true 
     * @return false
     * 
     * 根据排序特点从，从右上便利要好些,如果当前元素大于目标值则向左，小于目标值则向下 
     * 时间复杂度O(m+n), 空间复杂度O(1)
     */
    bool Solution::findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if (matrix.size() == 0 || matrix[0].size() == 0)
        {
            return false;
        }
        int i = 0, j = matrix[0].size() - 1;
        while (i < (int)matrix.size() && j >= 0)
        {
            if (matrix[i][j] > target) // 目标值小了,往左
            {
                j--;
            }
            else if (matrix[i][j] < target)  // 目标值大了,向下
            {
                i++;
            }
            else
            {
                return true;    // 相等返回
            }
        }
        return false;
    }
    
    /**
     * @brief 原地修改，先统计空格个数，增加原有字符串大小。
     *        双指针，从后往前遍历替换
     *        时间复杂度O(n), 空间复杂度O(1)
     * @param s 
     * @return string 
     */
    string Solution::replaceSpace(string s)
    {
        int count = 0;
        for(auto ch: s)
        {   // 统计空格数
            if (ch == ' ')
            {
                count++;
            }
        }
        s.resize(s.size() + count * 2); //  重新构建字符串大小
        for (int i = s.size() - (count * 2 + 1), j = s.size() - 1; i >= 0; i--)
        {   // i要保证是原来字符串的末尾
            if(s[i] != ' ') // 如果不是空格，就简单复制
            {
                s[j--] = s[i];
            }
            else    // 是空格那么就依次增加
            {
                s[j-2] = '%';
                s[j-1] = '2';
                s[j] = '0';
                j -= 3;
            }
        }
        return s;
    }

    /**
     * @brief 逆转链表，两个指针
     * 时间复杂度O(n), 空间复杂度O(1)
     * @param head 
     * @return vector<int> 
     */
    vector<int> Solution::reversePrint(ListNode* head) {
        vector<int> V;
        if (head == NULL) 
            return V;
        cout << "start" << endl;
        ListNode *p1 = head->next, *p2 = NULL, *p = head;
        head->next = NULL;
        while (p1)
        {
            p2 = p1->next;  //  记住下一个
            p1->next = p;   // 逆序
            // 递推
            p = p1;
            p1 = p2;
        }
        while(p) 
        {
            V.push_back(p->val);
            p = p->next;
        }
        return V;
    }

    /**
     * @brief 根据前序和中序遍历，还原二叉树
     * 
     * @param preorder 前序遍历
     * @param inorder   中序遍历
     * @return TreeNode* 
     */
    TreeNode* Solution::buildTree(vector<int>& preorder, vector<int>& inorder)
    {
        if (preorder[0] == -1 || inorder[0] == -1)
        {   // 前提保证
            TreeNode *root = new TreeNode(-1);
        }
        // 首先前序遍历的第一个一定是根节点
        TreeNode *root = new TreeNode(preorder[0]);
        // 在中序遍历中，找出根节点，划分为2侧
        int div;
        for(div = 0; inorder[div] != root->val; div++); // 0~div为根节点左边,div+1开始为右边
        

    }