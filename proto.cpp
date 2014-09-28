#include <array>
#include <iostream>
#include <stack>
using namespace std;

void hanoi_handler(int n, array<stack<int>,3> &poles, int from, int to, int use){
	if(n>0){
		hanoi_handler(n-1,poles,from,use,to);
		poles[to].push(poles[from].top());
		poles[from].pop();
		cout<<"move from "<<from<<" to "<<to<<endl;
		hanoi_handler(n-1,poles,use,to,from);
	}
}

void hanoi(int n){
	array<stack<int>,3> poles;
	for(int i=n;i>0;i--){
		poles[0].push(i);
	}
	hanoi_handler(n,poles,0,1,2);
}

int main(){
	hanoi(3);
}