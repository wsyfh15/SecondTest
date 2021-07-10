#include "sort.h"

int main() {
    vector<int> nums={213,5,235,63452,1231,365,79,86,54,2};
    qsort(nums,0,nums.size()-1);
    for(int num:nums){
        cout<<num<<endl;
    }
    return 0;
}
