#pragma once
#include <string>
using namespace std;

class IProcessor
{
public:
	IProcessor() = default;
	virtual vector<string> Start_processor(vector<string>& text) = 0;
	virtual ~IProcessor() {};
};

