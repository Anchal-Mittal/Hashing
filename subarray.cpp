#include<iostream>

#include<map>

#include <bits/stdc++.h>

using namespace std;

void find_Subarray(int array[10],int size){

	map<int,int> m;
	
	int start,end;
	
	for(int i=0;i<size;i++)
	
		m[array[i]]++;
	
	int result=-1;
	
	int max_count=INT_MIN;
	
	for(auto i: m){
	
		if(i.second>max_count)
		
			result=i.first;
			
			max_count=i.second;

	}	
	
	for(int i=0;i<size;i++){
	
		if(array[i]==result){
		
			start=i;
			
			break;
	    
	    }
	
	}
	
	for(int i=size-1;i>=0;--i){
	
		if(array[i]==result){
		
			end=i;
			
			break;
		
		}
	
	}
	
	for(int i=start;i<=end;i++){
	
		cout << array[i]<< " ";
	
	}

}

int main(){

	int size;
	
	int array[10];
	
	cout<< "ENTRE THE SIZE OF THE FIRST ARRAY "<< endl;
    
    	cin >> size;
    
    	cout << "ENTER THE ELEMENT OF THE ARRAY"<< endl;
   
   	for(int i=0;i<size;i++){
    	
	cin>>array[i];
	
	}
	
	find_Subarray(array,size);
return 0;
}
