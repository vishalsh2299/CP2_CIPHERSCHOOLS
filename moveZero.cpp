void moveZeroes(vector<int> &nums)
{
    int c = 0, j = 0, n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            nums[j] = nums[i];
            j++;
        }
        else
            c++;
    }

    for (int i = n - c; i < n; i++)
    {
        nums[i] = 0;
    }
}