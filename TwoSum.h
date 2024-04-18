class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> numbers;
        int i = 0;
        int j = nums.size() - 1;

        while(i < j){

            int sum = nums[i] + nums[j];

            if(sum == target){
                return{i, j};
            }
            else if(sum > target){
                j--;
            }else{
                i++;
            }

        }
        
        return {};
           
    }       
};