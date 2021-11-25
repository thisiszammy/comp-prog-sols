// Author : thisiszammy
// Problem URL : https://codeforces.com/problemset/problem/466/A

#include <iostream>
#include <algorithm>

int main(){
	
	int n,m,a,b;
	
	std::cin >> n >> m >> a >> b;
	
	int sDiv = n/m;
	int rDiv = n%m;
	
	int totalCost = 0;
	bool isSpecial = false;
	
	if((sDiv*b) >(n*a)){
		totalCost += n*a;
	}else{
		isSpecial = true;
		totalCost += sDiv*b;
	}
	
	if(isSpecial){
		if(b > (rDiv*a)){
			totalCost += rDiv*a;
		}else{
			totalCost += b;
		}
	}
	
	std::cout << totalCost;
	
}
