#include <iostream>
#include <sstream>

#include "CWorkerSpy.h"

std::string CWorkerSpy::output() {
	std::stringbuf buf;
	std::streambuf* oldbuf = std::cout.rdbuf(&buf);
	CWorker::output();

	std::cout.rdbuf(oldbuf);

	return buf.str();
}

