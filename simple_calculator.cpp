//simple calculator to perform the basic operation suchas addition,
//subtraction,multiplication and division
#include<iostream>
using namespace std;
int main()
{   
    cout<<"Operator code for operators "<<endl;
    cout<<" 1. for addition + "<<endl
    <<" 2. for subtraction - "<<endl
    <<" 3. for multiplication * "<<endl
    <<" 4. for division / "<<endl;
	float num_a;
	float num_b;
	int x;
	cout<<"\t\t\t calculator"<<endl;
	cout<<" Enter the first number :- \t";
	cin>>num_a;
	cout<<" Enter the second number :- \t";
	cin>>num_b;
	cout<<" enter the operation code which u want to perform ";
	cin>>x;
	switch(x)
	{
	
	 case 1:
	 	cout<<num_a<<" + "<<num_b <<" :- "<<num_a+num_b;
	 	break;
	 case 2:
	 	cout<<num_a<<" - "<<num_b <<" :- "<<num_a-num_b;
	 	break;
	 case 3:
	 	cout<<num_a<<" * "<<num_b <<" :- "<<num_a*num_b;
	 	break;
	 case 4:
	 	cout<<num_a<<" / "<<num_b <<" :- "<<num_a/num_b;
	 	break;
	 }
}

	 	

