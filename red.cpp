#ifndef redform
#define redform

#include <iostream>
#include <string>
using namespace std;

string intro()
{
	string sent;

	cout << "Gimme a sentence: ";
	
	getline(cin,sent);
	cout << "Your current sentence is: " << sent << '\n';

	return sent;	
}

void ender(string s)
{
	cout << "Your new sentence is:\n";
	cout << s << '\n';
}

string subscriptor(string sent)
{

	string s ="";
	string c = "";
	int i = 0;

	while (i < sent.length())
	{
		c = sent[i];
		i++;
		s += c;
		s += "^";
	}

	s.pop_back();

	return s;
}

void general(function<void()> intro, function<string(string sent)> lolcats)
{
	
}



int main(int argc, char** argv)
{


	char choice;
	
	do
	{
		cout << "\n============ MENU ===============\n";
		cout << "1. Superscriptor"
		     << "2. Bolder"
		     << "3. Strikethrougher"
		     << "4. Coder"
		     << "5. Quoter"
		     << "6. Exit\n";

		cout << "\n==================================\n";

	}
	while(choice != '6');	

	switch(choice)
	{
		case '1': //intro(); subscriptor();
		break;
		case '2': 
		break;
		case '3': 
		break;
		case '4': 
		break;
		case '5': 
		break;
		case '6': 
		break;
		default:
		break;
	}

	ender(s);

	return 0;
}





#endif
