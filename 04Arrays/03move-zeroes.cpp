#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int i = 0, j = 0;
    while (j < nums.size()) {
        if (nums[j] != 0) {
            swap(nums[i], nums[j]);
            i++;
            j++;
        }
    }
}

int main() {
    return 0;
}


// link - https://leetcode.com/problems/move-zeroes/