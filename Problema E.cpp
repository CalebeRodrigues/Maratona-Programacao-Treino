#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int entrada, maxi = 0;
	
	cin>>entrada;
	
	while(entrada != 0){
		maxi = max(entrada, maxi);
		cin>>entrada;
	}
	
	cout<<maxi<<endl;
	return 0;
}
