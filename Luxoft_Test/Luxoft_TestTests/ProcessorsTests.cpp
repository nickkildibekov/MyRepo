#include "stdafx.h"
#include "CppUnitTest.h"
#include <vector>
#include "../../../../../../Data/Cygwin/home/Nik/Luxoft_Test/Luxoft_Test/IProcessor.h"
#include "../../../../../../Data/Cygwin/home/Nik/Luxoft_Test/Luxoft_Test/Factory.h"
#include "../../../../../../Data/Cygwin/home/Nik/Luxoft_Test/Luxoft_Test/Processor.h"
#include "../../../../../../Data/Cygwin/home/Nik/Luxoft_Test/Luxoft_Test/Factory.cpp"




using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Luxoft_TestTests
{		
	TEST_CLASS(ProcessorsTests)
	{
	public :
		
		TEST_METHOD(ProcessorAStartProcessor_NormalString_ReversedStringReturned)
		{
			// arrange
			vector<string> example = { "This is normal text" };
			const vector<string> expected = { "text normal is This" };

			// action
			IProcessor* pr = Processor_factory::create_processor('A');
			const vector<string> actual = pr->Start_processor(example);
			delete pr;

			// assert
			Assert::IsTrue(equal(example.begin(), example.end(), expected.begin()));

			const char* message = "TestA passed";
			Logger::WriteMessage(message);
		}

		TEST_METHOD(ProcessorBStartProcessor_StringWithPoints_CommasReplacingPointsReturned)
		{
			// arrange
			vector<string> example = { "This.Is.Text.With.Punctuation" };
			vector<string> expected = { "This,Is,Text,With,Punctuation" };

			// action
			IProcessor* pr = Processor_factory::create_processor('B');
			vector<string> actual = pr->Start_processor(example);
			delete pr;

			// assert
			Assert::IsTrue(equal(example.begin(), example.end(), expected.begin()));

			const char* message = "TestB passed";
			Logger::WriteMessage(message);
		}

		TEST_METHOD(ProcessorCStartProcessor_StringWithSpaces_StringWithoutSpacesReturned)
		{
			// arrange
			vector<string> example = { "This is my text with spaces" };
			vector<string> expected = { "Thisismytextwithspaces" };

			// action
			IProcessor* pr = Processor_factory::create_processor('C');
			vector<string> actual = pr->Start_processor(example);
			delete pr;

			// assert
			Assert::IsTrue(equal(example.begin(), example.end(), expected.begin()));

			const char* message = "TestC passed";
			Logger::WriteMessage(message);

		}

	};
}