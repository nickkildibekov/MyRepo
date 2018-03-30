#include <vector>
#include <algorithm>
#include "Processor.h"

vector<string> ProcessorA::Start_processor(vector<string>& text)
{
	vector<string> tmp;
	const int vec_size = text.size();
	for (int i = vec_size - 1; i > 0; i--)
		tmp.push_back(text[i] + ' ');
	return tmp;
}

vector<string> ProcessorB::Start_processor(vector<string>& text)
{
	for (int i = 0; i < text.size(); i++)
	{
		for (int j = 0; j < text[i].length(); j++)
		{
			if (text[i][j] == ',')
			{
				text[i][j] = '.';
			}
		}
	}
	return text;
}

vector<string> ProcessorC::Start_processor(vector<string>& text)
{
	vector<string>& tmp = text;
	remove(tmp.begin(), tmp.end(), " ");
	return tmp;
}





