#include <iostream>

using namespace std;

#pragma once

namespace logger 
{
	class Colors {
		public:
			// source: https://www.geeksforgeeks.org/how-to-print-colored-text-in-java-console/
			// foreground colors
			string BLACK = "\u001B[30m";
			string RESET = "\u001B[0m";
			string RED = "\u001B[31m";
			string GREEN = "\u001B[32m";
			string YELLOW = "\u001B[33m";
			string BLUE = "\u001B[34m";
			string PURPLE = "\u001B[35m";
			string CYAN = "\u001B[36m";
			string WHITE = "\u001B[37m";

			// background colors
			string BLACK_BACKGROUND = "\u001B[40m";
			string RED_BACKGROUND = "\u001B[41m";
			string GREEN_BACKGROUND = "\u001B[42m";
			string YELLOW_BACKGROUND = "\u001B[43m";
			string BLUE_BACKGROUND = "\u001B[44m";
			string PURPLE_BACKGROUND = "\u001B[45m";
			string CYAN_BACKGROUND = "\u001B[46m";
			string WHITE_BACKGROUND = "\u001B[47m";
	};
}