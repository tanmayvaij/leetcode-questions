#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum ( vector<int> nums, int target ) {

    // for ( int i = 0; i < nums.size() - 1; i++ ) {
    //     for ( int j = i+1; j < nums.size(); j++ ) {
    //         if ( nums[i] + nums[j] == target ) return vector<int> {i, j};
    //     }
    // }

    // return vector<int> {};

    

}

int main () {

    vector<int> nums = { 3,2,4 };
    int target = 6;

    vector<int> ans = twoSum(nums, target);

    cout << ans[0] << " " << ans[1] << endl;

    return 0;

}
