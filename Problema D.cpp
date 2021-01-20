#include <iostream>


using namespace std;

int main(){
	
	int parar;
	int A = 0, B = 0;
	int entrada;
	
	cin>>parar;
	
	for(int i = 0; i < parar; i++){
			
		cin>>entrada;
		
		if(entrada == 1) { 
			if(A == 0) A = 1; 
			else if(A == 1) A = 0; 
		}
		
		if(entrada == 2) { 
			if(A == 0) A = 1; 
			else if(A == 1) A = 0; 
			
			if(B == 0) B = 1; 
			else if(B == 1) B = 0; 
		}
	
	}
	
	cout<<A<<endl;
	cout<<B<<endl;
	
	return 0;
}


