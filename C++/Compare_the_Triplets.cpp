/**
 * Author   : Nikhil Parekh
 * Created  : 2020-11-25 14:11:32
 * Link     : GitHub.com/parekhnikhil47
 * Question : 
**/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[3],b[3],alice=0,bob=0;
	for(int i=0;i<3;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<3;i++){
		cin>>b[i];
	if(a[i]>b[i]){
		alice++;
	}
	if(b[i]>a[i]){
		bob++;
	}
	}
	cout<<alice<<" "<<bob;
	return 0;
}