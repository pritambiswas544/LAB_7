	#include<iostream>
	using namespace std;
				//building the fuction
	int reverse(int a){
	

				//giving the condition
	if (a==0)
		return 0;
	else
		return reverse(a);
	}


				//main
	int main(){
	int a,i=0,r;

				//asking user for the input
	cout <<"Enter the number that you want to see the reverse of "<<endl;
	cin>>a;

				//constructing a loop to display the last number of the fuction using remainder
				//dividing the number by 10
				//keep doing
	while (a!=0){
		r=(a%10);
		i=r+(i*10);
		a=a/10;
	}
		 int result=reverse(a);			

	cout<<"The reverse is "<<i<<endl;
	return 0;
	}
	
 
