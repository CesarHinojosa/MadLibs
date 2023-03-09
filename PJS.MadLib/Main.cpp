
// Mad Libs
// Payton Strenn

#include <iostream>
#include <conio.h>
#include<fstream>
#include<string>

using namespace std;

void printMadlib(string arr[10])
{
	//print out the madlib using the arrays values
	cout << "Woke up to the " << arr[0];
	cout << " smell of " << arr[1];
	cout << " roasting in the " << arr[2];
	cout << ". I " << arr[3];
	cout << ". I " + arr[4];
	cout << " the dinner.My mom said \"See if " << arr[5];
	cout << " needs a fresh " << arr[6]; 
	cout << ".\" So I carried a tray of glasses full of " << arr[7];
	cout << " into the " << arr[8];
	cout<< " room.When I got there, I couldn't believe my " << arr[9] << "!";

}
void saveMadlib(string arr[10])
{
	//create file path
	string path = "madlib.txt";
	//create input stream saving to path
	ofstream ofs(path);

	//write to the file
	 ofs<< "Woke up to the " << arr[0];
	 ofs << " smell of " << arr[1];
	 ofs << " roasting in the " << arr[2];
	 ofs << ". I " << arr[3];
	 ofs << ". I " + arr[4];
	 ofs << " the dinner.My mom said \"See if " << arr[5];
	 ofs << " needs a fresh " << arr[6];
	 ofs << ".\" So I carried a tray of glasses full of " << arr[7];
	 ofs << " into the " << arr[8];
	 ofs << " room.When I got there, I couldn't believe my " << arr[9] << "!";
	 //close it
	 ofs.close();
}

int main()
{
	//input variable
	char input = ' ';
	
	//array to hold user response
	string user[10];
	string questions[10] = { "Adjective", "Noun","Noun", "Verb (past tense)", "Verb", "Realitives name", "Noun", "Noun (liquid)", "verb ending in 'ing'","Noun part of body"};
	//"Woke up to the (adj) smell of (noun) roasting in the (noun). I (verb past tense). I (verb) the dinner. My mom said \"See if (relatives name) needs a fresh (noun).\" So I carried a tray of glasses full of (a liquid) into the (verb ending in ing) room. When I got there, I couldn't believe my (part of the body plural)!";

	

	//create loop for questions 
	for (int i = 0; i < 10; i++)
	{
		//ask question
		cout << "Give a " << questions[i]<<": ";
		//call get line so we can get all the input in the line
		//save the response to user array
		getline(cin, user[i]);
	}
	//call method to print it
	printMadlib(user);
	//ask if they would like to save
	cout << "Would you like to save this madlib (y/n)";
	cin >> input;
	//if yes save it
	if (input == 'y')
	{
		saveMadlib(user);
	}


	(void)_getch();
	return 0;
}
