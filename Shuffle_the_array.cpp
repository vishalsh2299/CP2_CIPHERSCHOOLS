vector<int> shuffle(vector<int> &nums, int n)
{
    vector<int> shu;
    int i = 0, s = nums.size();
    int j = s - n;

    while (i < n && j < s)
    {
        shu.push_back(nums[i]);
        shu.push_back(nums[j]);
        i++;
        j++;
    }
    return shu;
}