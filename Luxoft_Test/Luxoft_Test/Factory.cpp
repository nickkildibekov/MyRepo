#include <vector>
#include "IProcessor.h"
#include "Processor.h"
#include <iostream>
#include "Factory.h"

using namespace std;


IProcessor* Processor_factory::create_processor(const char type)
{
	IProcessor* processor = nullptr;
	while (true)
	{
		switch (type)
		{
		case 'A':
		{
			processor = new ProcessorA;
			break;
		}
		case 'B':
		{
			processor = new ProcessorB;
			break;
		}
		case 'C':
		{
			processor = new ProcessorC;
			break;
		}
		default:
		{
			cout << " Invalid argument! " << endl;
		}
		}
		vector<string> text;
		processor->Start_processor(text);
		return processor;
	}

}


