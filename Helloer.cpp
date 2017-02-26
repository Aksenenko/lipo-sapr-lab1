#include "Helloer.h"

Helloer::Helloer(const string& message)
{
	Message = (std::string)message;
}

Helloer::Helloer()
{
	Message = (std::string)"";
}

string Helloer::PrintMessage()
{
	return (std::string) "" + Message;
}