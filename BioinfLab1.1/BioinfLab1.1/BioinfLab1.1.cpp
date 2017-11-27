// BioinfLab1.1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int Search(string str, string word)
{//����� ����� � ������
	int count = 0; //���-�� ���������� �����
	for (int i = 0; i <  strlen(str.c_str()) - strlen(word.c_str()) +1; i++)
	{
		//���������� ������� ������ � i-�� ������� � �����
		if (!strncmp(str.c_str()+i, word.c_str(), strlen(word.c_str())))
			count++;
	}
	return count;
}
int main()
{	
	string str; //������
	string word; //�����, ������� ���� �����

	ifstream input("input.txt"); // ������� ���� ��� ������	

	getline(input,str); //������� ������ �� �����
	getline(input,word); //������� �����	

	input.close(); // ��������� ����

	int count = Search(str, word); //����� ����� � ������
		
	ofstream output; //������� ���� ��� ������
	output.open("output.txt"); //������� ���� ��� ������
	output << count;
	output.close(); // ��������� ����

	return 0;
}

