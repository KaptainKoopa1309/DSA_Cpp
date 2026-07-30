#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> DaMap;
        int n = nums.size();

        for(int i=0; i<n;i++){
            DaMap[nums[i]]= i;
        }
        
        for(int i=0; i<n;i++){
            int complement = target - nums[i];
            cout<< DaMap.count(complement) << DaMap[complement];
            if(DaMap.count(complement) && DaMap[complement] != i){
                return {i, DaMap[complement]};
            }

        }
        return {};
    }

};

int main(){
    Solution sol;
    vector<int> numbers = {2,7,11,15};
    int target = 9;
    vector<int> Answer;
    Answer = sol.twoSum(numbers, target);
    cout<<"The Indices of the Two numbers that add up to"<<target<<"are:"<< Answer[0] << "" << Answer[1];
    return 0;
}

