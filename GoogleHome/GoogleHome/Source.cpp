#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <memory>
#include <string>


using namespace std;



int main()
{

	string name;
	fstream GensMemory("Dates.txt");
	GensMemory << "Dentist 10/21/21";
	GensMemory.close();

	
	fstream GensMemory1 ("Times.txt");
	GensMemory1 << "Brothers Birthday at 3p.m. on Sunday";
	GensMemory1.close();

	fstream GensMemory2 ("When.txt");
	GensMemory2 << "Q3 Meeting with Manager at 12:30";
	GensMemory2.close();

	fstream GensMemory3 ("What.txt");
	GensMemory3 << "Get Groceries, Do Laundry, Finish Homework, Play Video Games!!";
	GensMemory3.close();

	string myText;
	string myText1;

	string answer;
	string first = "Doctor";
	string second = "Parties";
	string third = "Meetings";
	string fourth = "Do";


	cout << "Hello, what's your name?";
	cin >> name;
	cout << "Nice to meet you " << name << ", I'm Gen. What can I do for you today?";
	cin >> answer;

	if (answer == first)
	{
		ifstream GensMemory("Dates.txt");
		while (getline(GensMemory, myText))
		{
			cout << myText;
		}
	}
	
	else if (answer == second)
	{
		ifstream GensMemory1("Times.txt");
		while (getline(GensMemory1, myText))
		{
			cout << myText;
		}
	}

	else if (answer == third)
	{
		ifstream GensMemory2("When.txt");
		while (getline(GensMemory2, myText))
		{
			cout << myText;
		}
	}

	else if (answer == fourth)
	{
		ifstream GensMemory3("What.txt");
		while (getline(GensMemory3, myText))
		{
			cout << myText;
		}
	}

	else
	{
		cout << "Unrecognized Input, try typing slowly....";
	}
	
}