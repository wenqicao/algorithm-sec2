#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int nearest_algorithm(vector<string> vec){
	unordered_map<string,int> hash;
	int res = (1<<31) - 1;
	for(int i=0;i<vec.size();i++){
		auto it = hash.find(vec[i]);
		if(it!=hash.end()){
			res = min(res,i - hash[vec[i]]);
		}
		hash[vec[i]] = i;
	}
	return res;
}

int main(){
	cout<<((1<<31) - 1);
}