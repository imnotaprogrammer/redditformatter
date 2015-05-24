#ifndef redform
#define redform

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{

	string sent;
	string s ="";
	string c = "";
	int i = 0;

	cout << "Gimme a sentence: ";
	
	getline(cin,sent);
	cout << "Your current sentence is: " << sent << '\n';

	while (i < sent.length())
	{
		c = sent[i];
		i++;
		s += c;
		s += "^";
	}

	cout << "Your new string is:\n";
	//s.pop_back();
	cout << s << '\n';
	return 0;
}


#endif
