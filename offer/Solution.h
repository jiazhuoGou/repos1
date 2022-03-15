#ifndef __SOLUTION__H
#define __SOLUTION__H

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>


using namespace std;

class Solution {
public:
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
    int findRepeatNumber(vector<int>& nums);

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
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target);

    /**
     * @brief 请实现一个函数，把字符串 s 中的每个空格替换成"%20"
     *  输入：s = "We are happy."
        输出："We%20are%20happy."
     * @param s 
     * @return string 
     */
    string replaceSpace(string s);
};

#endif