// Author : thisiszammy
// Problem URL : https://codeforces.com/problemset/problem/706/B
#include <iostream>
#include <algorithm>

int shortSearch(int *prices, int budget, int min, int max){
	int mid = (max-min)/2;
	int testIndex = min + mid;
	
	
	if(mid != 0){
		if(budget >= prices[testIndex]){
			return shortSearch(prices, budget, testIndex, max);
		}else{
			return shortSearch(prices, budget, min, testIndex);
		}
	}else{
		if(budget >= prices[max]){
			return max;
		}else if(budget >= prices[min]){
			return min;
		}
	}
	
	return -1;
}

int main(){
	int n;
	
	std::cin >> n;

	int prices[n];
	
	for(int i = 0; i < n; i++){
		std::cin >> prices[i];
	}
	
	std::sort(prices, prices+n);
	int q;
	
	std::cin >> q;
	
	for(int i = 0; i < q; i++){
		long long int budget;
		std::cin >> budget;
		std::cout << shortSearch(prices, budget, 0, n-1)+1 << std::endl;
				
	}
	
	
	
}
