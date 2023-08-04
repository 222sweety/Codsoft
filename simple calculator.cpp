/* Simple Calculator-- Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform*/

#include<iostream>
using namespace std;
int main(){
	
   float num1,num2;
	char ch;
	
	
	while(true){
    cout<<" \t ......Calculator......";	
	cout<<" \n Enter two Numbers for the arithmetic operation :\n";
	cin>>num1>>num2;
	cout<<"Enter your choice of Operation: "<<" + - * / \n";
	cin>>ch;
	
	
	switch(ch){
		case '+':
			cout<<"Sum of "<<num1<<" and "<<num2<<" is:"<<num1+num2;
			break;
		case '-':
			cout<<"Subtraction of "<<num1<<" and "<<num2<<" is:"<<num1-num2;
			break;
		case '*':
			cout<<"Multiplication of "<<num1<<" and "<<num2<<" is:"<<num1*num2;
			break;
		case '/': 
			cout<<"Division of "<<num1<<" and "<<num2<<" is:"<<num1/num2;
			break;
		default:
			cout<<"You Entered Wrong Character!";
			
	}
	char chart;
	cout<<"\nWould you like to continue: Y/N? \n";
	cin>>chart;
    cout<<endl;
	if(chart == 'N' || chart == 'n'){
		cout<<"Thank you for using my calculator.";
		return 0;
	}
 }
}
