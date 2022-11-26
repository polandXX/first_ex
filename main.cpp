#include<iostream>
#include<string>
#include <algorithm> 
using namespace std;

int main() {
	//Переменые 
	string word;//Строка которую будем вводить 
	char c;//Переменая для хранения символа для которого будет искаться похожий знак 
	int counter = 0;//Переменая для подсчета одинаковых символов 

	getline(cin,word);//Запись строки
	transform(word.begin(), word.end(), word.begin(), toupper);//Переводит строку в верхний регистр 

	//Алгоритм поиска схожих знаков
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