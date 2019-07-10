vector<int> Solution::plusOne(vector<int> &A) {
    vector<int>arr;
    
    int carry=0;
   
        if(A[0] == 0 &&  A.size() == 1)
        {
            //arr[A.size()-1] = 1;
            arr.push_back(1);
            return arr;
        }
        
       
       arr.push_back((A[A.size()-1]+1)%10);
       carry = (A[A.size()-1]+1)/10;
       //arr[A.size()-1] = arr[A.size()-1]%10;
        
       for(int i = A.size()-2; i>=0; i--) 
       {
                arr.push_back((A[i]+carry)%10);
                 carry = (A[i]+carry)/10;
       }
        if (carry) 
         arr.push_back(carry);
        
        reverse(arr.begin(), arr.end());
        
        while(arr[0] == 0)
        {
            arr.erase(arr.begin());
        }
        return arr;
    
}
