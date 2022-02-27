using namespace std;

int kadmax(vector<int> &arr, int n)
{
    int k=0,l=INT_MIN,i;
    for(i=0;i<n;i++)
    {
        k+=arr[i];
        if(l<k)
        {
            l=k;
        }
        if(k<0)
        {
            k=0;
        }
    }
    return l;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int i,j,m,n,k;
	    cin>>n>>m;
	    int arr[n][m];
	    vector<int> sum(n);
	    int mx=0,max=0;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    
	     for(k=0;k<m;k++)
	     {
	         for(int p=0;p<n;p++)
	         {
	             sum[p]=0;
	         }
	         for(i=k;i<m;i++)
	         {
	             for(j=0;j<n;j++)
	             {
	                 sum[j]=sum[j]+arr[j][i];
	             }
	            
	             
	            mx=kadmax(sum,n);
	           //mx=0;
	            if(mx>max)
	            {
	                max=mx;
	            }
	         }
	        
	     }
	     cout<<max<<endl;
	    
	}
	return 0;
}
