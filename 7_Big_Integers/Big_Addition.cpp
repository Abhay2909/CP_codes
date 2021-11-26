#include <bits/stdc++.h>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string str1,str2;
	cin>>str1>>str2;

	if(str1.length()>str2.length()){
		string s=str1;
		str1=str2;
		str2=s;
	}

	reverse(str1.begin(),str1.end());
	reverse(str2.begin(),str2.end());

	int j=0;
	int carry=0;
	string ans="";

	while(j<str2.length()){
		int n1=str2[j]-'0';
		int n2=0;
		if(j<str1.length()){
			n2=str1[j]-'0';
		}
		int sum=n1+n2+carry;
		ans=ans+to_string(sum%10);
		carry=sum/10;
		j++;
	}

	if(carry){
		ans+=to_string(carry);
	}

	reverse(ans.begin(),ans.end());

	cout<<ans;

	return 0;

}