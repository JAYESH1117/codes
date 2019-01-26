#include<bits/stdc++.h> 
using namespace std; 
const int R = 6; 
const int C = 6; 

int summax(int m[R][C]) 
{ 
	int max_sum = INT_MIN; 
	for (int i=0; i<R-2; i++) 
	{ 
		for (int j=0; j<C-2; j++) 
		{ 
			int sum = (m[i][j]+m[i][j+1]+m[i][j+2])+ 
					(m[i+1][j+1])+ 
				(m[i+2][j]+m[i+2][j+1]+m[i+2][j+2]); 
			max_sum = max(max_sum, sum); 
		} 
	} 
	return max_sum; 
} 
int main() 
{ 
int i,j,m[R][C];
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			scanf("%d",&m[i][j]);
			
		}
	}
	int res = summax(m); 
		cout <<  res << endl; 
	return 0; 
} 

