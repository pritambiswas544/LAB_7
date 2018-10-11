	#include<iostream>
	using namespace std;
				//building the fuction
	int rev(int a){
	

				//giving the condition
	if (a==0)
		return 0;
	else
		return rev(a%10);
	}


				//main
	int main(){
	int a,i=0,r;

				//asking user for the input
	cout <<"Enter the number that you want to see the reverse of "<<endl;
	cin>>a;
	int m=a;		//the value of a stored in m

				//constructing a loop to display the last number of the fuction and divide
				//it by 10 and keep going
	while (a!=0){
		r=(a%10);
		i=r+(i*10);
		a=a/10;
		
	}
				//condition to check if the number is pallindrome or not

	if (m!=i){
	cout<<"The number is not pallindrome "<<endl;
	
	}
	else {
	cout<<"The number is  pallindrome"<<endl;
	}
	
	return 0;
	}
	
