/*------------------------------------------------------------------|

给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。

示例:

输入: [-2,1,-3,4,-1,2,1,-5,4]
输出: 6
解释: 连续子数组 [4,-1,2,1] 的和最大，为 6。
进阶:

如果你已经实现复杂度为 O(n) 的解法，尝试使用更为精妙的分治法求解。|
-------------------------------------------------------------------*/

/*	贪心算法
*
*	执行用时：8 ms, 在所有 C++ 提交中击败了67.73%的用户
*	内存消耗：12.9 MB, 在所有 C++ 提交中击败了17.32%的用户
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>

using namespace std;

int maxSubArray(vector<int>& nums) 
{
	int res = INT_MIN;
	int sum = 0;

	for (int x : nums)
	{
		sum = max(x, sum + x);									/*	如果加x之后的值还没有x大，就把sum更新为x，表示从x开始继续往下查	*/
		res = max(res, sum);
	}

	return res;
}