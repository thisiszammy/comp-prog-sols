// Author : thisiszammy
// Problem URL : https://codeforces.com/problemset/problem/69/A

#include <iostream>

int main(){
	
	int n;
	
	std::cin >> n;
	
	int forces[3] = {0,0,0};
	
	for(int i = 0; i < n; i++){
		int x,y,z;
		std::cin >> x >> y >> z;
		
		forces[0]+=x;
		forces[1]+=y;
		forces[2]+=z;
	}
	
	if(forces[0] == 0 && forces[1] == 0 && forces[2] == 0){
		std::cout << "YES";
	}else{
		std::cout << "NO";
	}
	
}
