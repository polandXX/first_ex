#include<iostream>
#include<string>
#include <algorithm> 
using namespace std;

int main() {
	string word;
	char c;
	int counter = 0;

	getline(cin,word);
	transform(word.begin(), word.end(), word.begin(), toupper);
	
	for (int i = 0; i < word.size(); i++)
	{
		c = word[i];
		for (int i = 0; i < word.size(); i++)
		{
			if (c == word[i]) {
				counter++;
			}
		}
		if (counter > 1)
		{
			cout << ")";
		}
		else {
			cout << "(";
		}
		counter = 0;
	}

}
