// problem link
// https://www.codechef.com/problems/PENALTYSHOOT


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x, y;
	    cin >> x >> y;

	    if((x+1 == y) || (x+2 == y) ||( x == y+1) || (x == y)){
	        cout << "YES" << endl;
	    }else if((x+1 == y+1) || (x+2 == y+1)){
	        cout << "YES\n";
	    }else{
	        cout << "NO\n";
	    }
	}
	return 0;
}
