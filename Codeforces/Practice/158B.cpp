// Author : thisiszammy
// Problem URL : https://codeforces.com/problemset/problem/158/B

#include <iostream>
#include <algorithm>

int main(){
	int n;
	
	std::cin >> n;
	
	int taxiCount = 0;
	
	int occurence[4] = {0,0,0,0};
	
	for(int i = 0; i < n; i++){
		int x;
		std::cin >> x;
		occurence[x-1]++;
	}
	
	taxiCount+=occurence[3];
	taxiCount+=occurence[2];
	
	occurence[0]-=occurence[2];
	
	taxiCount+=occurence[1]/2;
	
	occurence[1] -= occurence[1]/2*2;
	
	if(occurence[1]){
		taxiCount++;
		occurence[0]-=2;
	}
	
	
	if(occurence[0] > 0){
		taxiCount+=occurence[0]/4;
		occurence[0]-=occurence[0]/4*4;
		
		if(occurence[0]>0){
			taxiCount++;
		}
	}
	
	std::cout << taxiCount;
	
}
