#include "File.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <iterator>

using namespace std;

vector<string> Work_with_files::
Read_from_file()
{
	ifstream file("example.txt");
	vector<string> in_text;
	string text_from_file;
	if (!file)
	{
		cout << "Impossible to read from file!" << endl;
	}
	while (getline(file, text_from_file, ' '))
	{
		in_text.push_back(text_from_file);
	}

	return in_text;
}

void  Work_with_files::
Write_to_file(vector<string>text)
{
	ofstream file;
	file.open("example_out.txt");
	stringstream text_from_file;
	const int tmp = text.size();
	if (!file)
	{
		cout << "Impossible to write to file!" << endl;
	}
	else
	{
		for (int i = 0; i < tmp; i++)
			file << text[i];
		cout << "record ready" << endl;
	}
	file.close();

}


