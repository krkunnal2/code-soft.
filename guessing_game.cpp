//gussing game .....
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int c=1;
	int player_choice;
	//using rand() function to generate a random number.
	int secret_number=1+rand()%100;
	cout<<"\n\t\t\t welcome user "<<endl<<"\n enter number between 1 - 100"<<endl;
	while(c==1)
	{
		cout<<" enter your number :- ";
		cin>>player_choice;
		if(player_choice==secret_number)
		{
			cout<<"well played!,you won "<<player_choice<<" is the secret number"
			<<endl;
			cout<<"\t\t\t thx for playing..."<<endl;
			cout<<" play again with us !!"<<endl;
			break;
		}
		else
		{
			cout<<"nope"<<player_choice<<"its not the wright number \n";
			if(player_choice>secret_number)
			{
				cout<<" the secret number is smaller than the number you have chosen"
				<<endl;
			}
			else
			{
		    	cout<<" the secret number is greater than the number you have chosen"
				<<endl;	
			}
		}
	}
}
