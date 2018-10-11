	#include<iostream>
	using namespace std;
						//building the main function
	int digsum(int a,int sum){
	
	

						//providing the condition
	if (a==0){
		return sum;
	}
	else{ 
		sum=sum+(a%10);
		a=a/10;
		return digsum(a,sum);
	}
	}
						//main
	int main(){
	int a=1,sum=0;

						//asking user for the inputs
	cout<<"Enter the number that you want to see the sum of the digits of "<<endl;
	cin>>a;
						//assigning sum using the fuction digsum to display and print sum 
	sum=digsum(a,sum);
	
	cout<<"result of the sum is "<<sum<<endl;
	return 0;
	}

						
