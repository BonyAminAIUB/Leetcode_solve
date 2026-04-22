#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        int left = 0;
        int right = 1;
        while(right < nums.size()){
            if(nums[left] != nums[right]){
                left ++;
                nums[left] = nums[right];
                right ++;
            }
            else{
                right ++;
            }
        }
        return left + 1;
    }

int main(){
    vector<int> v = {0,0,1,1,1,2,2,3,3,4};
    int sz = removeDuplicates(v);
    cout << sz << endl;
    return 0;
}