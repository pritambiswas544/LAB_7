

#include<iostream>
	using namespace std;
	
					//building the fuction
	int GCD (int a,int b){
					//providing the condition
	if (b != 0)
		return GCD(b,a%b);

	else 
		return a;
	}
					
					

					//main fuction
	int main(){
	int a,b,result;

					//asking for input
	cout<<"Enter the two numbers that you want to see GCD of "<<endl;
	cin>>a>>b;
					//providing condition for calculating LCM from GCD
 	result=(a*b)/GCD(a,b);
					//printing LCM
	
	cout<< "The LCM of the numbers are "<<result<<endl;
	return 0;
}
