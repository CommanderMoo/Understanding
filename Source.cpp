#include <iostream>
#include <ctime>
#include <string>
#include <vector>

using namespace std;

//functions
string GetUserName();
void DisplayIntroduction(string userName);
string GetSelfDestructCodeFromUser();

int main()
{
	//title
	cout << "\n\n\t\t ** Understand ** \n\n";

	//string to hold user name:
	string userName;
	//string that holds the self destruct code
	string selfDestructCode;
	//call function for user name
	userName = GetUserName();
	//display user
	DisplayIntroduction(userName);
	/*-----------------------------------------------*/
	//get self destruct code from user
	selfDestructCode = GetSelfDestructCodeFromUser();
	/*-----------------------------------------------*/
	cout << "\nMind: I wonder what we have today. ";
	cout << "\nRoommate: Yo! Check your bag man. ";
	cout << "Sarge left something for each of us to use. ";

	//declaring string to hold inventory
	vector<string> inventory;
	//list items in backpack
	inventory.push_back("\t **Pen** ");
	inventory.push_back("\t **Notebook** ");
	inventory.push_back("\t **Cards** \n");

	//call display list
	cout << "\n\n\tBACKPACK: " << inventory.size() << " CONTENTS \n";
	//display list the number of items in the backpack
	
	//code for the list of items in the backpack
	for (unsigned int i = 0; i < inventory.size(); ++i)
	{
		//loop that displays all items in backpack
		cout << inventory[i] << endl;
	}

	cout << userName <<": Nothing new, is there something inparticular? \n";
	cout << "Roommate: Unsure, all I know is that we've all gotten something new. \n";
	cout << userName <<": I'll just look around for now I guess. \n";
	cout << "\n\t\t ROOMMATE LEAVES THE ROOM \n\n";
	cout << userName <<": Where do I even start? \n";
	cout << "Mind: Lets try starting with directions: ";
	string userChoice;
	getline(cin, userChoice);
	if (userChoice == "North" || userChoice == "north" || userChoice == "south"|| userChoice == "South")
	{
		cout << userName << ": Wont hurt to check. \n";
		cout << userName << ": Well here is my wallet and my watch. ";
		cout << "Now what... \n\n";
	}
	else if (userChoice == "East" || userChoice == "east"|| userChoice == "west" || userChoice == "West")
	{
		cout << userName << "Lets take a look \n";
		cout << "Mind: Theres nothing here, therefore it is a waste of time.";
		cout << "Mind: Get a move on bud.";
		cout << "Now what... \n\n";
	}
	else
	{
		cout << "Mind: So either you cant spell or your just dumb";
		cout << "Mind: Lets try something else when your ready";
	}
	cout << "Mind: We need to get a move on. \n";
	cout << userName << ": I think I have all that I need for now. Lets move out.\n";
	cout << "Sergent Calvin: What is your termination code soldier? \n";
	cout << userName << ": My termination code is " << selfDestructCode << ". Sir. \n\n";
	cout << userName << ": You have been terminated";
	//return all
	return 0;
}
/*-----------------------------------------------*/
string GetUserName()
{
	//create string to hold user name
	string userName;
	//user input of user name
	cout << " Enter player name: ";
	//get user name from system
	getline(cin, userName);
	//return name
	return userName;
}
/*-----------------------------------------------*/
void DisplayIntroduction(string userName)
{
	cout << "\n Sargent Calvin: Time to go to work. ";
	cout << "It is now 0330. ";
	cout << "\n We leave the hotel at 0500. ";
	cout << "Suit up and get ready. ";
	cout << "\n\t\tMOVE. ";
}
/*-----------------------------------------------*/
string GetSelfDestructCodeFromUser()
{
	//create string to hold terminate code
	string selfDestructCode;
	//display and user input of code 
	cout << "\n\nINSANITY CODE: ";
	//get code from user
	getline(cin, selfDestructCode);
	return selfDestructCode;
}
/*-----------------------------------------------*/


//(Notes)
	/* 
{
	//variable to catch the sum needed
	int catchTheSum = 0;
	catchTheSum = AddTwoNumber(5, 7);
	cout << "\n My calculations say the sum is " << catchTheSum << endl;


int AddTwoNumber(int firstNumber, int secondNumber)
{
	//create variable to hold total (sum)
	int sum;
	//add two numbers for the total
	sum = firstNumber + secondNumber;

	return sum;
}
*/