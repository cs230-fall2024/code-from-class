/**
 * Compute max of vector and assert pre-conditions and post conditions
 * @file max.cc
 * @author Tom Helmuth
 * @collaborators CS230
 */
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

/**
 * Compute max int in vector nums
 *
 * Pre-conditions: the vector nums is not empty
 * Post-conditions: largest is the maximum value in nums
 *                  largest is in nums
 * 
 * @param nums non-empty list of integers
 * @return max int in nums
 */
int max(vector<int> nums){

    // pre-condition: what is true as function is beginning
    // the vector nums is not empty
    assert(nums.size() > 0);

    int largest = nums[0];
    for(size_t i = 1; i < nums.size(); i++){

        // Loop Invariant: 
        for (size_t j = 0; j < i; j++) {
            assert(largest >= nums[j]);
        }

        if(nums[i] > largest)
            largest = nums[i];
    }

    // post-condition: what is true at the end of a function
    // Check that the answer is correct
    // largest is the maximum value in nums
    bool largest_is_in = false;
    for (int j : nums) {
        assert(largest >= j);
        if (largest == j)
            largest_is_in = true;
    }
    assert(largest_is_in);

    return largest;
}



// Controls operation of the program.
int main() {

    vector<int> primes = {7, 5, 11, 13, 2, 3};

    vector<int> empty = {};

    cout << max(primes) << endl;
    // cout << max(empty) << endl;
    return 0;
}
