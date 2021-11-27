// Author : thisiszammy
// Problem URL : https://codeforces.com/problemset/problem/58/A

#include <iostream>
#include <algorithm>
#include <string>

int main(){
	std::string x;
	
	std::cin >> x;
	
	std::string hello = "";
	
	for(int i = 0; i < x.size(); i++){
		switch(hello.size()){
			case 0:
				if(x[i] == 'h') hello+="h";
				break;
			case 1:
				if(x[i] == 'e') hello+="e";
				break;
			case 2:
			case 3:
				if(x[i] == 'l') hello+="l";
				break;
			case 4:
				if(x[i] == 'o') hello+="o";
				break;
		}	
	}
	
	if(hello == "hello"){
		std::cout << "YES";
	}else{
		std::cout << "NO";
	}
}
