﻿#include <iostream>     
using namespace std;    
 
int main() {  
	string s;
	int countt = 0, countp = 0, counta = 0, result = 0; 
	cin >> s;
	int len = s.length();
	
	for(int i = 0; i < len; i++){
		if(s[i] == 'T')
			countt++;
	}
	
	for(int i = 0; i < len; i++){
		if(s[i] == 'P') countp++;
		if(s[i] == 'T') countt--;
		if(s[i] == 'A') result = (result + (countp * countt) % 1000000007) %1000000007;
	}
	
	cout << result; 

	return 0;
} 

 
