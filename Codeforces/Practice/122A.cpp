// Author : thisiszammy
// Problem URL : https://codeforces.com/problemset/problem/122/A

#include <iostream>


int main(){
	
	int x;
	
	int n;
	int luckyVals[14] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
	
	std::cin >> n;
	int ctr = 0;	
	while(x<=n){
		x=luckyVals[ctr];
		if(n%x==0){
			std::cout << "YES";
			return 0;
		}
		ctr++;
	}
	
	std::cout << "NO";
}
