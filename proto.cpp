#include <iostream>
#include <vector>
using namespace std;

vector<int> adder_algorithm(vector<int> vec){
	vec.back()++;
	for(int i=vec.size()-1;i>0&&vec[i]==10;i--){
		vec[i]=0;
		vec[i-1]++;
	}
	if(vec[0]==10){
		vec[0]=0;
		vec.insert(vec.begin(),1,1);
	}
	return vec;
}