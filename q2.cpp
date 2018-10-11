#include<iostream>
using namespace std;
				//defining fuction
  void print(int a,int b){	//using void because we are not returning anything
				//providing condition for printing
  if (a==b){
  cout<<endl;
}
  else{
  b++;
  cout<<b<<" ,";
  print(a,b);
}
}				//main
  int main(){
  int n;
				//taking inputs
  cout<<"What is the last number in the series ?"<<endl;
  cin>>n;
 				//assingning result using fuction to print
 
  print(n,0);
  return 0;
}
 
  
