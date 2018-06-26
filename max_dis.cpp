#include<iostream>

#include<bits/stdc++.h>

#include<map>

using namespace std;

int subarray(int arr1[10],int size1){

	map <int,int> hash;

	int maxi=-1;

	for(int i=0;i<size1;i++){

	    if(hash.find(arr1[i])==hash.end())

	    	hash[arr1[i]]=i;
		
	  	else

			  maxi=max(maxi,i-hash[arr1[i]]);
	
	}

return maxi;

}

int main(){

  int arr1[10];
   
  int size1;
  
  cout << "ENTER THE SIZE OF FIRSET ARRAY "<< endl;
   
  cin >>size1;
  
  cout<< "ENTER THE ELEMENTS OF THE  ARRAY"<< endl;
  
  for(int i=0;i<size1;i++)
  	
	  cin>>arr1[i]; 
    
  int res=subarray(arr1,size1);
  
  cout << "MAXIMUM DISTANCE "<< res<< endl;	

return 0;

}
