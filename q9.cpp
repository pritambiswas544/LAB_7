						//defining library
 	#include<iostream>
 	using namespace std; 
						//prodiving the fuction
   int factorial(int a){
						//providing the condition to find the factorial of any number
 	if (a>1)
 	return (a*factorial(a-1));
   else
	return 1;
   }
						//main function
   int main(){
 	int a,result;
						//asking user for inputs
 	cout << "Enter the number that you want to see the factorial of :)"<<endl;
 	cin>>a;
						//assingning the result using the factorial fuction to print the result
 	result=(a*factorial(a-1));
 	cout<< "The factorial of "<<a<<" is "<<result<<endl;
 
   return 0;
  }
  

