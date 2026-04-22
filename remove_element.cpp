#include<bits/stdc++.h>

using namespace std;

int removeElement(vector<int>& nums, int val){
    int j;
    for(int i = 0; i<nums.size(); i++){
        if(val == nums[i]){
            nums.erase(nums.begin()+i);
            i--;
        }
    }
    return nums.size();
}

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int val;
    cin >> val;
    int sz = removeElement(v,val);
    cout << sz << endl;
    return 0;
}



