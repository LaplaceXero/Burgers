#include <iostream>
using namespace std;

int main() {
	
	int testCaases = 0;
	int patty = 0,buns = 0;
	
	cin >>testCaases;
	
	for(int i = 0; i < testCaases; i++)
	{
	    cin >>patty >>buns;
	    
	    if(patty > buns)
	        cout <<buns <<endl;
	        
	    else
	        cout <<patty <<endl;
	}
	
	return 0;
}
