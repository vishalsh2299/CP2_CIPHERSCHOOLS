vector<vector<int>> generate(int numRows)
{

    vector<vector<int>> pas(numRows);
    if (numRows == 0)
        return pas;
    for (int i = 0; i < numRows; i++)
    {
        int j = 0;
        while (j <= i)
        {
            pas[i].push_back(0);
            j++;
        }
    }
    pas[0][0] = 1;

    if (numRows == 1)
        return pas;
    pas[1][0] = 1;
    pas[1][1] = 1;
    if (numRows == 2)
        return pas;

    for (int i = 3; i <= numRows; i++)
    {
        pas[i - 1][0] = 1;
        pas[i - 1][i - 1] = 1;
        int j = 1;
        while (j <= (i - 2))
        {
            pas[i - 1][j] = pas[i - 2][j] + pas[i - 2][j - 1];
            j++;
        }
    }
    return pas;
}