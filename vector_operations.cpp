void add_to_vector(vector<int> &v, int x)
{
    //Your code here
    v.push_back(x);
}

/*sort the vector A in ascending order*/
void sort_vector_asc(vector<int> &v)
{
    //Your code here
    sort(v.begin(), v.end());
}

/*reverses the vector A*/
void reverse_vector(vector<int> &v)
{
    //Your code here
    reverse(v.begin(), v.end());
}

/*returns the size of the vector A */
int size_of_vector(vector<int> &v)
{
    //Your code here
    return v.size();
}

/*sorts the vector A in descending order*/
void sort_vector_desc(vector<int> &v)
{
    //Your code here
    sort(v.begin(), v.end());
    reverse_vector(v);
}

/*prints space separated
elements of vector A*/
void print_vector(vector<int> &v)
{
    //Your code here
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "=";
    }
}
