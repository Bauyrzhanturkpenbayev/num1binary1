#include <iostream>
using namespace std;
int main(){

	int A;
	cin >> A;
	
	int c = 1, digit;
	if (A>2){
		while (A>2){
			digit = A % 2;
			A /= 2;
			if (digit == 1){
				c++;
			}
		}
	}
	else if (A == 1){
		c = 1;
	}
	else{
		c = 0;
	}
	cout << c;
	return 0;
}