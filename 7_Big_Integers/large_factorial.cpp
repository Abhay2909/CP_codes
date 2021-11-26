#include <bits/stdc++.h>
using namespace std;

void factorial(int no){
	int a[1000]={0};
	// for(int i=0;i<1000;i++) a[i]=-1;
	int size=1;
	a[0]=1;

	for(int i=2;i<=no;i++){
		int carry=0;
		for(int j=0;j<size;j++){
			int sum=(a[j]*i)+carry;
			a[j]=sum%10;
			carry=sum/10;
		}

		while(carry){
			a[size]=carry%10;
			size++;
			carry=carry/10;
		}
	}

	for(int i=size-1;i>=0;i--) cout<<a[i];

	return;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n; cin>>n;
	factorial(n);

	return 0;

}