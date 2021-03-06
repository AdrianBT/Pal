// Palindrome.cpp : Defines the entry point for the console application.
//



// Butler_Adrian_Palindrome Project 

// I wanted to split the word in half so it read the rest of the word to determine if it was a palindrome or //not. So i would push half the words and then pop the words if they match the rest of the word that was //not pushed. 


#include <iostream>
#include <string>
#include <stack>
using namespace std;


int main()
{
	stack<char> op;
	int i = 0;
	int j = 0;
	string c;

	cout << "enter a word" << endl;
	cin >> c;

	for (i = 0; i < c.length() / 2; i++)
	{

		op.push(c[i]);

		cout << c[i] << endl;
	}

	cout << op.size() << "\n" << endl;


	while (!op.empty() && c[i] == op.top())
	{

		cout << op.top() << endl;

		op.pop();

		i++;
	}

	cout << op.size() << "\n" << endl;

	if (op.empty())
	{
		cout << "This word is a palindrome " << endl;
	}
	else
	{
		cout << "This word is not a palindrome" << endl;
	}


	return 0;

}

