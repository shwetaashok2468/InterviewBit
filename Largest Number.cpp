int compare(string x,string y)
{
    string xy = x+y;
    string yx = y+x;
    if(xy>yx)
    {
        return 1;
    }else
    {
        return 0;
    }
}
string Solution::largestNumber(const vector<int> &A) {
    
    vector<string>s;
    string str;
    int count=0;
    
    for(int i=0; i<A.size(); i++)
    {
        if(A[i] == 0)
        {
          count++;  
        }
    }
    if(count == A.size())
    {
        str = '0';
        return str;
    }
    for(int i=0; i<A.size(); i++)
    {
        s.push_back(to_string(A[i]));
    }
    
    sort(s.begin(),s.end(),compare);

    for(int i=0; i<s.size(); i++)
    {
        str = str+s[i];
    }
    return str;
}

