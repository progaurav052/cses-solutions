#include<bits/stdc++.h>
using namespace std;

int main()
{

	#ifndef ONLINE_JUDGE
	  freopen("input.txt","r",stdin);

	  freopen("output.txt","w",stdout);

	#endif
	//longest repeating substring in one type of character

	string s;
	cin>>s;

	int ans=0;

	int count=1;

	for(int i=1;i<s.length();i++)
	{
      //if the characters are different 
		//than store the previous frequemcy till now

		if(s[i]==s[i-1])
		{
			count++;

		}
		else
		{
			ans=max(ans,count);
			count=1;

		}


	}
	//check also if the repeating at the end;
	ans=max(ans,count);
	//in case where
	//ATTGGGAAAAA
	cout<<ans<<endl;
	return 0;



	  
}