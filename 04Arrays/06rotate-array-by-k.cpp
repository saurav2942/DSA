#include<bits/stdc++.h>
using namespace std;

void rotate1(vector<int>& nums, int k) {
    int j = nums.size() - k % nums.size();
    if (j == 0 || nums.size() == 1 || nums.size() == j) return;
    vector<int>v;
    int i = 0;
    while (i < nums.size()) {
        v.push_back(nums[j]);
        i += 1;
        j = (j + 1) % nums.size();
    }
    for (i = 0;i < nums.size();i++) {
        nums[i] = v[i];
    }
}

void rotate2(vector<int>& nums, int k)
{
    k = k % nums.size();

    // Reverse the first n - k numbers.
    // Index i (0 <= i < n - k) becomes n - k - i.
    reverse(nums.begin(), nums.begin() + nums.size() - k);

    // Reverse tha last k numbers.
    // Index n - k + i (0 <= i < k) becomes n - i.
    reverse(nums.begin() + nums.size() - k, nums.end());

    // Reverse all the numbers.
    // Index i (0 <= i < n - k) becomes n - (n - k - i) = i + k.
    // Index n - k + i (0 <= i < k) becomes n - (n - i) = i.
    reverse(nums.begin(), nums.end());
    return;
}

int main() {
    vector<int>v = { 1,2,3,4,5,6,7 };
    int k = 3;
    return 0;
}

/*
Link - https://leetcode.com/problems/rotate-array/
*/