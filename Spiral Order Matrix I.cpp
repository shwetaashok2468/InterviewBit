vector<int> Solution::spiralOrder(const vector<vector<int> > &arr) {
     vector<int> res;
     int m = arr.size();
     int n = arr[0].size();
        int T = 0;
        int B = m-1;
        int L = 0;
        int R = n-1;
        int dir = 0;
        
        while(T <= B && L <=  R)
        {
            if(dir == 0) //left to right(++)
            {
                for(int i=L; i<=R; i++)
                {
                    //cout<<arr[T][i]<<" ";
                    res.push_back(arr[T][i]);
                }
                
                T++;
                 //dir = 1;
                
            }
            else if(dir == 1) //top to down
            {
                for(int i = T; i<=B; i++)
                {
                    res.push_back(arr[i][R]);
                }
                //dir =2;
                R--;
            }else if(dir == 2) //left to right(--)
            {
                for(int i=R; i>=L; i--)
                {
                    //cout<<arr[B][i]<<" ";
                    res.push_back(arr[B][i]);
                }
                B--;
               // dir = 3;
                
            }else if(dir==3)// dir == 3 ---- 
            {
                for(int i=B; i>=T; i--)
                {
                    //cout<<arr[i][L]<<" ";
                    res.push_back(arr[i][L]);
                }
                L++;
                //dir = 0;
            }
            
           dir = (dir+1)%4;
            
        } 
     // cout<<endl; 
    
    return res;

}

