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
	int a,b;

					//asking for input
	cout<<"Enter the two numbers that you want to see GCD of "<<endl;
	cin>>a>>b;
					//calling and printing the function GCD
	
	cout<<"The GCD of "<<a<< " and "<< b <<" is "<<GCD(a,b)<<endl;
	return 0;
}
