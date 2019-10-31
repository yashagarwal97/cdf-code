
#include<bits/stdc++.h>
#include<vector>
#include<stdio.h>
#include<conio.h>

using namespace std;

vector<int> addNegabinary(vector<int>& arr1, vector<int>& arr2) {
	int i,j,n,m,x,c=0;
	vector<int> ans;
	// arr1=a1;
	// arr2=a2;
	reverse(arr1.begin(),arr1.end());
	reverse(arr2.begin(),arr2.end());
	n=arr1.size();
	m=arr2.size();
	i=0;
	while(1)
	{
		if(i<n && i<m)
			x=arr1[i]+arr2[i]-c;
		else if(i<n)
			x=arr1[i]-c;
		else if(i<m)
			x=arr2[i]-c;
		else 
			break;

		if(x==0)
		{
			ans.push_back(0);
			c=0;
		}
		else if(x==-1)
		{
			ans.push_back(1);
			c=-1;
		}
		else if(x==1)
		{
			ans.push_back(1);
			c=0;
		}
		else if(x==2)
		{
			ans.push_back(0);
			c=1;                
		}
		else if(x==3)
		{
			ans.push_back(1);
			c=1;
		}
		i++;
		cout<<c<<endl;
	}        
	if(c==1)
	{
		ans.push_back(1);
		ans.push_back(1);
	}
	else if(c==-1)
	{
		ans.push_back(1);
	}
	reverse(ans.begin(),ans.end());
	return ans;
}
int main()
{
	vector<int> v1;
	//v1={1,1,1,1,1};
	vector<int> v2;
	v1.push_back(1);
	v1.push_back(1);
	v1.push_back(1);
	v1.push_back(1);
	v1.push_back(1);

	v2.push_back(1);
	v2.push_back(0);
	v2.push_back(1);
	vector<int> v3;
	int i;
	v3=addNegabinary(v1,v2);
return 0;
}
