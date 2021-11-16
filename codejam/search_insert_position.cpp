/*
 * Search Insert Position
 * https://leetcode.com/problems/search-insert-position/
 * */
//Python:

class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        if nums[len(nums)-1] < target:
            return len(nums)
        for i in range(len(nums)):
            if nums[i]> target:
                return i-1
            else:
                if nums[i] == target:
                    return i

        return 0
