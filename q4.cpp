#include<iostream>
using namespace std;
				//defining fuction
 int sum (int n){
				//providing condition
 if (n==0)
  return 0;
 else
  return n+sum(n-1);
}				//main
  int main(){
 int result,n;
				//taking inputs
  cout <<"What is the number that you want to add in the sum series ?"<<endl;
  cin >>n;
				//assingning result using fuctions and printing
  result=n+sum(n-1);
 cout<<"The sum of series 1 to "<<n <<" is "<<result;
 return 0;
}
