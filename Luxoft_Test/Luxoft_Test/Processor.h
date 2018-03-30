#pragma once
#include <string>
#include <vector>
#include "IProcessor.h"

using namespace std;

class ProcessorA : public IProcessor
{
public:
	ProcessorA() = default;
	~ProcessorA() = default;
	vector<string> Start_processor(vector<string>& text) override;
};


class ProcessorB : public IProcessor
{
public:
	ProcessorB() = default;
	~ProcessorB() = default;
	vector<string> Start_processor(vector<string>& text) override;
};

class ProcessorC : public IProcessor
{
public:
	ProcessorC() = default;
	~ProcessorC() = default;
	vector<string> Start_processor(vector<string>& text) override;
};

