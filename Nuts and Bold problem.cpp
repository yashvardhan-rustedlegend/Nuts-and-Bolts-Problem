#include<iostream>
using namespace std;
class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) 
	{
	  int k=0,cons;
	  char temp[n];
	  for(int i=0;i<n;i++)
	  {
	      for(int j=0;j<n;j++)
	      {
	          if(nuts[i]==bolts[j])
	              temp[k]=bolts[j];
	      }
	      k++;
	  }
	  for(int i=0;i<n;i++)
	  {
	      for(int j=i+1;j<n;j++)
	      {
	        if(temp[i]>temp[j])
	        {
	            cons=temp[i];
	            temp[i]=temp[j];
	            temp[j]=cons;
	        }
	      }
	  }
	  for(int i=0;i<n;i++)
	  {
	      nuts[i]=temp[i];
	      bolts[i]=temp[i];
	  }
	  
	}

};
int main()
{
	int t;
	cin>> t;
	while (t--){
		int n;
		cin>>n;
		char nuts[n],bolts[n];
		for(int i=0;i<n;i++)
		{
			cin>>nuts[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>bolts[i];
		}
		Solution ob;
		ob.matchPairs(nuts,bolts,n);
		for(int i=0;i < n; i++)
		{
			cout<<nuts[i]<<" ";
		}
		for(int i=0;i<n;i++)
		{
			cout<< bolts[i]<<" ";
		}
		cout<<"\n";
		
		
	}
	return 0;
}
