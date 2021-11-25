// Author : thisiszammy
// Problem URL : https://codeforces.com/problemset/problem/25/A

#include <iostream>

int main(){
	
	int n;
	
	std::cin >> n;
	
	int arr[n];
	int oddCount = 0, evenCount = 0;
	int index = 0;
	
	for(int i = 0; i < n; i++){
		
		int x;
		std::cin >> x;
		
		arr[i] = x%2;
		
		if(arr[i] == 1){
			oddCount++;
		}else{
			evenCount++;
		}
		
	}
	
	for(int i = 0; i < n; i++){
		if(oddCount>evenCount){
			if(arr[i] == 0){
				index = i+1;
			}
		}else{
			if(arr[i] == 1){
				index = i+1;
			}
		}
	}
	
	std::cout << index;
	
	
	return 0;
}
