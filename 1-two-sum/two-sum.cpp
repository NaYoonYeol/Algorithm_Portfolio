#include <vector>
#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> result;

         for (int i = 0; i < nums.size(); ++i) 
         {
            int difference = target - nums[i];
            
            if (map.find(difference) != map.end()) 
            {
                result.push_back(map[difference]);
                result.push_back(i);
                
                return result;
            }
            
            map[nums[i]] = i;
        }
        
        return result;
    }
};