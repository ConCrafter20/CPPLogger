#include <iostream>
#include "Logger.h"

using namespace logger;

int main(int argc, char** argv) 
{
	Logger logger;
	logger.identifier = "test";

	logger.info("hjsd");
}