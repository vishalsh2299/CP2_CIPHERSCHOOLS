bool isValid(string s)
{
    if (s.length() == 0)
        return true;
    stack<char> ch;
    int i = 1;
    ch.push(s[0]);
    while (i < s.length())
    {
        if (s[i] == ')' && !ch.empty() && ch.top() == '(')
            ch.pop();
        else if (s[i] == ']' && !ch.empty() && ch.top() == '[')
            ch.pop();
        else if (s[i] == '}' && !ch.empty() && ch.top() == '{')
            ch.pop();
        else
            ch.push(s[i]);
        i++;
    }
    if (ch.empty())
        return true;
    else
        return false;
}