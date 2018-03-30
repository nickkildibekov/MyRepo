#include "File.h"
#include "Factory.h"
#include "IProcessor.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	const char type = argv[1][0];
	vector<string> text = Work_with_files::Read_from_file();

	vector<string> tmp;
	IProcessor* pr = Processor_factory::create_processor(type);
	if (pr) {
		tmp = pr->Start_processor(text);
		delete pr;
	}
	Work_with_files::Write_to_file(tmp);

}
