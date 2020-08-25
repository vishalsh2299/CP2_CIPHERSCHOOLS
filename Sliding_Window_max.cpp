vector<int> maxSlidingWindow(vector<int> &nums, int k)
{
    vector<int> m;
    int i = 1, j = k, index = 0, max = nums[0];
    for (int f = 0; f < k; f++)
    {
        if (nums[f] > max)
        {
            max = nums[f];
            index = f;
        }
    }
    m.push_back(max);

    while (i < nums.size() && j < nums.size())
    {
        if (index >= i && index <= j || nums[j] > max)
        {
            if (nums[j] > max)
            {
                max = nums[j];
                index = j;
                m.push_back(max);
                j++;
                i++;
            }
            else
            {
                m.push_back(max);
                j++;
                i++;
            }
        }
        else
        {
            int f = i;
            max = nums[i];
            for (f = i; f <= j; f++)
            {
                if (nums[f] > max)
                {
                    max = nums[f];
                    index = f;
                }
            }
            m.push_back(max);
            i++;
            j++;
        }
    }

    return m;
}