#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <set>
#include <climits>
using namespace std;

class Solution {
public:
    int getLargestOutlier(vector<int>& nums) {
        int sum=0;
for(int k:nums) sum+=k;
multiset<int> st(nums.begin(),nums.end());
int ans=INT_MIN;
for(int k:nums) {
if ((sum-k)%2==0){
st.erase(st.find(k));
int p=(sum-k)/2;
if (st.find(p)!=st.end()) ans=max(ans,k);
st.insert(k);
}
}
return ans;
    }
};

int main() {
    Solution sol;

    // Test case 1
    vector<int> nums1 = {2, 3, 5, 10};
    cout << "Largest outlier: " << sol.getLargestOutlier(nums1) << endl;

    // Test case 2
    vector<int> nums2 = {-402, 907 , -288 , 505 };
    cout << "Largest outlier: " << sol.getLargestOutlier(nums2) << endl;

    // Test case 3
    vector<int> nums3 = {1, 1, 1, 1, 1, 5, 5};
    cout << "Largest outlier: " << sol.getLargestOutlier(nums3) << endl;

    // Custom test case
    vector<int> nums4 = {-108,-108,-517};
    cout << "Largest outlier: " << sol.getLargestOutlier(nums4) << endl;

    return 0;
}
