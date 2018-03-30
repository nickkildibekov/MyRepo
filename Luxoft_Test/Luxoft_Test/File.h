#pragma once
#include <string>
#include <vector>

using namespace std;

class Work_with_files
{
public:
	static  vector<string> Read_from_file();
	static void Write_to_file(vector<string>text);
};
