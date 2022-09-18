/*

Given an array of integers nums and an integer target, return indices of the 
two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may 
not use the same element twice.

Example 1:-
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum ( vector<int> nums, int target ) {

    for ( int i = 0; i < nums.size() - 1; i++ ) {
        for ( int j = i+1; j < nums.size(); j++ ) {
            if ( nums[i] + nums[j] == target ) return vector<int> {i, j};
        }
    }

    return vector<int> {};

}

int main () {

    vector<int> nums = { 3,2,4 };
    int target = 6;

    vector<int> ans = twoSum(nums, target);

    cout << ans[0] << " " << ans[1] << endl;

    return 0;

}
