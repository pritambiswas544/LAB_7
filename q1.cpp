#include<iostream>
using namespace std;
				//defining fuction

  int calculatepower (int base,int power){
				//providing necessary condition to return the value
				
  if (power ==0)		//because a^0=1
   
     return 1;
   
   else
   return (base*calculatepower(base,power-1));
}
  
 				//main

 
   int main(){
   int base,power,result;
				//asking user for inputs
  cout <<"What is the base of your preference ?"<<endl;
  cin>>base;

  cout <<"What is the power of yor preference ?"<<endl;
  cin >>power;
				//assigning result using the fuction and printing it
  result = calculatepower (base,power);
  cout <<"the power of "<< base <<" is "<<result;
  return 0;
}
 

