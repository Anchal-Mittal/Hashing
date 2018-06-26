#include<iostream>

#include<bits/stdc++.h>

#include<map>

#include<algorithm>

using namespace std;

int no_of_delete_Operation(int arr1[10],int size1){
	
	map<int,int> hash;

	int maxi=0;

	int i;

	for(i=0;i<size1;i++)
        
		hash[arr1[i]]++;

    map<int,int>:: iterator it;
    
	for(it=hash.begin();it!=hash.end();it++)
    
	    maxi=max(maxi,it->second);

return (size1-maxi);
}

int main(){

  int arr1[10];
  
  int size1;
  
  cout << "ENTER THE SIZE OF  ARRAY "<< endl;

  cin >>size1;
  
  cout<< "ENTER THE ELEMENTS OF THE FIRST ARRAY"<< endl;

  for(int i=0;i<size1;i++)

  	cin>>arr1[i]; 
  
  int res=no_of_delete_Operation(arr1,size1);
  
  cout << res << endl;

return 0;

}
