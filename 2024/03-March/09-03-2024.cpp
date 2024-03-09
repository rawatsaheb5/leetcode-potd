/*
    author : Neeraj Kumar Rawat
    platform : leetcode
    problem link : https://leetcode.com/problems/minimum-common-value
    problem : 2540. Minimum Common Value

*/ 




/*

    approach: 

        : since both arrays are sorted we can apply two pointer technique
            => take two pointer i = 0, and j=0
            => if element at index i in nums1 and element at index j in nums2 are equal return true
            => else if element at index i is less than elment at index j then increase i by 1
            => else increase j by 1

*/ 

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size();
        int m = nums2.size();

        int i=0, j=0;
        while(i<n && j<m){
            if(nums1[i] == nums2[j]){
                return nums1[i];
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return -1;
    }
};