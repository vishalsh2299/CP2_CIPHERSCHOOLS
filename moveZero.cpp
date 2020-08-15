 void moveZeroes(vector<int>& nums) {
        int c=0;
        vector<int> a;
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i] != 0){
               a.push_back(nums[i]);
           }else c++;
        }
        
        while(c){
            a.push_back(0);
            c--;
        }
        nums = a;
    }