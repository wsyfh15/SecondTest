//
// Created by YFH on 2021/5/18.
//

#ifndef TEST2_SORT_H
#include <iostream>
#include <vector>
using namespace std;

void qsort(vector<int>& nums, int l,int r){
    if(l>=r) return;
    int i=l;
    int j=r;
    while(i<j){
        while(i<j&&nums[i]<=nums[r])i++;
        while(i<j&&nums[j]>=nums[r])j--;
        swap(nums[i],nums[j]);
    }
    swap(nums[i],nums[r]);
    qsort(nums,l,i-1);
    qsort(nums,i+1,r);
}
#define TEST2_SORT_H

#endif //TEST2_SORT_H
