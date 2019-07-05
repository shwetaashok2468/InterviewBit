int Solution::maxSubArray(const vector<int> &A) {
       int i = 0;
    int j = 0;
    
    int max_sum = A[i];
    int curr_sum = A[i];
    j++;
    
    while(j < A.size())
    {
        
        if(curr_sum <= 0){
            curr_sum = A[j];
            i = j;
        }
        else
            curr_sum += A[j];
        
        j++;    
        
        if(max_sum < curr_sum)
            max_sum = curr_sum;
    }

    return max_sum;
}
