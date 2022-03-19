#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>

#include "./Solution.h"

#define MAX(a,b,c) ((a)>(b)?(a>c?a:c):(b>c?b:c))


int main(void)
{

    Solution solution;
    /* 剑指offer 03
    vector<int> nums{2, 3, 1, 0, 2, 5, 3};
    cout << "数组重复数字 : " <<  solution.findRepeatNumber(nums) << endl;
    vector<int> nums{2, 3, 1, 0, 2, 5, 3};
    cout << "数组重复数字 : " <<  solution.findRepeatNumber(nums) << endl;
    */

    /**
    * @brief 剑指offer 04 二维数组重复元素
    vector<vector<int>> array(7, vector<int>(7, 0) );
    int A[5][5]  = {
        {1,   4,  7, 11, 15},
        {2,   5,  8, 12, 19},
        {3,   6,  9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
    vector<vector<int>> maze(5, vector<int> (5, 0)); // 5行5列
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            maze[i][j] = A[i][j];
        }
    }
    // 打印使用 iterator指针
    for (auto ita = maze.begin(); ita != maze.end(); ++ita)
    {
        for(auto it = ita->begin(); it != ita->end(); ++it)
        {
            cout << *it << " ";
        }
        cout << "\n";
    }
    cout << "result : "  << boolalpha << solution.findNumberIn2DArray(maze, 0) << endl;
    cout << noboolalpha << false << endl;
    */   

    /**
     * @brief 剑指offer 05
     */
    /*
    string s = "L T  c";
    cout << solution.replaceSpace(s) << endl;
    */

    /**
        * @brief 剑指offer 06
        * 
        */
    struct ListNode n1(1);struct ListNode *p1 = &n1;
    struct ListNode n2(2);struct ListNode *p2 = &n2;
    struct ListNode n3(3);struct ListNode *p3 = &n3;
    struct ListNode n4(4);struct ListNode *p4 = &n4;
    

    return 0;
}