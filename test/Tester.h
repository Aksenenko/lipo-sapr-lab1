#ifndef TESTER_H
#define TESTER_H

#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TextTestRunner.h>
#include <cppunit/extensions/HelperMacros.h>
#include "../Helloer.h"

class HelloerTester : public CppUnit::TestCase
{
	public:
		void CheckHelloerMessage() 
		{
			Helloer TestHelloer("message");
			CPPUNIT_ASSERT_EQUAL_MESSAGE("'message' expected", TestHelloer.PrintMessage(), (string)"message");
		};
		void CheckHelloerEmptyMessage() 
		{
			Helloer TestHelloer;
		    CPPUNIT_ASSERT_EQUAL_MESSAGE("empty string expected", TestHelloer.PrintMessage(), (string)"");
		};
		
		CPPUNIT_TEST_SUITE( HelloerTester );
		CPPUNIT_TEST( CheckHelloerMessage );
		CPPUNIT_TEST( CheckHelloerEmptyMessage );
		CPPUNIT_TEST_SUITE_END();
};

CPPUNIT_TEST_SUITE_REGISTRATION( HelloerTester );

#endif