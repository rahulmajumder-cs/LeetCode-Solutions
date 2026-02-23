/*
Problem Name: Two Sum
Platform: LeetCode
Language: C

Description:
Given an array of integers nums and a target value,
return indices of the two numbers such that they add up to target.

Approach:
Brute Force method using two loops.
Check every pair of elements and return indices
when the sum equals the target.

Time Complexity: O(n^2)
Space Complexity: O(1)

Author: Rahul Majumder
Year: 2026
*/

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    static int result[2];
    *returnSize = 2;

    for(int i = 0; i < numsSize; i++) {
        for(int j = i + 1; j < numsSize; j++) {
            if(nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return NULL;
}
