

int binarySearch(vector<int > &arr, int x)
{
    int mid;
    int low = 0;
    int high = arr.size()-1;
    
    while(low<=high)
    {
        mid = (low+high)/2;
        
        if(x == arr[mid])
        return mid;
        else if(x > arr[mid])
        low = mid+1;
        else
        high = mid-1;
    }
    
    return -1;
}


int Solution::searchMatrix(vector<vector<int> > &arr, int x) {
   
         int m = arr.size();
         int n = arr[0].size();
         
         
        bool flag = false;
        
        int result;
        for(int i=0; i<m; i++)
        {
            result = binarySearch(arr[i],x);
            //cout<<result<<" ";
            if(result != -1)
            {
                flag = true;
                break;
            }
            
        }
        
        
        if(flag == true)
        {
           // cout<<1<<endl;
           return 1;
           
        }
        else
        {
           // cout<<0<<endl;
           return 0;
        }
        
       
 
 
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}

