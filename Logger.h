#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

#pragma once

namespace logger 
{
	class Logger 
	{
		public:
			string identifier;

			void info(string message) 
			{
				time_t now = time(0);

				tm* ltm = localtime(&now);

				cout << 5 + ltm->tm_hour << ":" << 30 + ltm->tm_min << ":" << ltm->tm_sec << endl;
			}

	};
}