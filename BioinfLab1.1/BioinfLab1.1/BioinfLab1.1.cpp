// BioinfLab1.1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int Search(string str, string word)
{//поиск слова в строке
	int count = 0; //кол-во повторений слова
	for (int i = 0; i <  strlen(str.c_str()) - strlen(word.c_str()) +1; i++)
	{
		//сравниваем символы строки с i-ой позиции и слова
		if (!strncmp(str.c_str()+i, word.c_str(), strlen(word.c_str())))
			count++;
	}
	return count;
}
int main()
{	
	string str; //строка
	string word; //слово, которое надо найти

	ifstream input("input.txt"); // открыли файл для чтения	

	getline(input,str); //считали строку из файла
	getline(input,word); //считали слово	

	input.close(); // закрываем файл

	int count = Search(str, word); //поиск слова в строке
		
	ofstream output; //создаем файл для записи
	output.open("output.txt"); //открыли файл для записи
	output << count;
	output.close(); // закрываем файл

	return 0;
}

