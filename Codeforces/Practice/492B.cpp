// Author : thisiszammy
// Problem URL : https://codeforces.com/problemset/problem/492/B

#include <iostream>
#include <algorithm>

int main(){
	long long n,l;
	
	std::cin >> l >> n;
	
	long long int street[l];
	double d;
	for(int i = 0; i < l; i++){
		std::cin >> street[i];		
	}
	
	std::sort(street, street+l);
	
	long long int  dist[l-1];
	
	int indexMax;
	double valMax = -1;
	for(int i = 1; i < l; i++){
		dist[i-1] = street[i]-street[i-1];
		
		if(dist[i-1] >= valMax){
			valMax = dist[i-1];
		}
	}
	
	d = valMax/2;
	
	if(street[0] != 0 && street[0]-0 > d){
		d = street[0]-0;
	}
	
	if(street[l-1] != n && n-street[l-1] > d){
		d = n-street[l-1];
	}
	
	printf("%lf", d);
	
}
