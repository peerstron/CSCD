#include <iostream>
using namespace std;

int main()
{
	int a; //'a' is any number.
	int i;
	bool isPrime= true;
	
	cout<<"Enter a number: "<<endl;
	cin>>a;
	
	//Using 'for loop and if else statements' to check whether a number is prime or not.
	for (i=2; i<= a/2; i++) {
		if (a%i == 0){
			isPrime= false;
			break;
	}
}

if (isPrime==true){

	cout<<a<<" is a prime."<<endl;
}
else{
	cout<<a<<" is not a prime."<<endl;
}

	
	return 0;
}
	
