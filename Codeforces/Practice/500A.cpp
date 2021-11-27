// Author : thisiszammy
// Problem URL : https://codeforces.com/problemset/problem/500/A

#include <iostream>

int main(){
	
	int n, t;
	
	std::cin >> n >> t;
	
	int paths[n-1];
	
	for(int i = 0; i < n-1; i++){
		std::cin >> paths[i];
	}
	
	int start = 0;
	
	while(start < n-1){
		if(start == t-1){
			std::cout << "YES";
			return 0;
		}
		
		if(start > t-1){
			break;
		}
		
		start += paths[start];
	}
	
	std::cout << "NO";
	
}
