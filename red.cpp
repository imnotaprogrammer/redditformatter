#ifndef redform
#define redform

#include <iostream>
#include <string>
using namespace std;

string intro()
{
	string sent;

	cout << "Gimme a sentence: ";
	
	//getline(cin,sent);

	cin >> sent;

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

/*string displayMenu()
{

};*/


int main(int argc, char** argv)
{


	char choice;
	string temp, result;
	
	do
	{
		cout << "\n============ MENU ===============\n";
		cout << "1. Superscriptor\n"
		     << "2. Bolder\n"
		     << "3. Strikethrougher\n"
		     << "4. Coder\n"
		     << "5. Quoter\n"
		     << "6. Exit\n";
		cout << "==================================\n";

		cout << " > ";
		cin >> choice;
	
		switch(choice)
		{
			case '1': temp = intro(); result = subscriptor(temp);
			break;
			default:
			break;
		}

	}
	while(choice != '6');	

	ender(result);

	return 0;
}





#endif
