/**
 * Author   : Nikhil Parekh
 * Created  : 2020-11-25 13:52:59
 * Link     : GitHub.com/parekhnikhil47
 * Question : very big sum 
**/

#include <bits/stdc++.h>
using namespace std;

int main(){

	long long n,i,sum=0,arr[1000];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
		sum=sum+arr[i];
	}
	cout<<sum;
	return 0;
}

