int canRepresentBST(int arr[], int N) {
        
         if(N==0||N==1)
        {
            return 1;
        }
        stack<int>s;
        
        int parent=INT_MIN;
        for(int i=0;i<N;i++)
        {
            if(arr[i]<parent)
            {
                return 0;
            }
            while(!s.empty()&&s.top()<arr[i])
            {
                
                parent=s.top();
                s.pop();
            }            
            
            s.push(arr[i]);
        }
        return 1;
        
    }
