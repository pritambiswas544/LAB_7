	#include<iostream>
	using namespace std;
						//building the fibonacci function
	int fibonacci(int a){


						//providing condition for the calling the fuction
	if (a==0 || a==1)
		return 1;
	else
		return fibonacci (a-2)+fibonacci (a-1);
	}
	
						//main function
	int main(){
		int a,i=0;
						//asking user for the input
	cout <<"Enter the nth term that you want to see the fibonacci term of "<<endl;
	cin>>a;
						//constructing a while loop for calculating fibonacci
	while (i<a){
		
	i++;
	}
						//calling and printing the fibonacci fucntion
	cout <<"The nth fibonacci term is "<<fibonacci(i)<<endl;
	return 0;
	}
	
