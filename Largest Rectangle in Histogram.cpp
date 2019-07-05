int Solution::largestRectangleArea(vector<int> &A) {
    
     long long int max = 0;
    long long int area =0;
    int i=0;
    int curr_max =0;
    stack<int>v;
    
    //6 2 5 4 5 1 6
    //v == 0 pop() // 1 2  pop() // 1 pop() //  
    while(i<A.size())
    {//i  =4
        if(v.empty()|| A[v.top()] <= A[i]) //  <5
        {
            v.push(i);
            i++;
        }
        else
        {
            //i =4
            curr_max = v.top(); //
            v.pop();
    
            area = A[curr_max] * (v.empty()?i:(i-v.top()-1));
            // 6 * 1
            //5 * 2
            if(area > max)max = area; //10
            
        }
    }
    
    while(!v.empty())
    {
        curr_max = v.top();
        v.pop();
        
        area = A[curr_max] * (v.empty()?i:i-v.top()-1);
            
            if(area > max)max = area;
    }
    
    return max;
}

