#pragma once
#include <vector>
#include "IProcessor.h"

using namespace std;
class Processor_factory
{
public:
	static IProcessor* create_processor(const char type);
};




