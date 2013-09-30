#ifndef CWORKERMOCK_H_
#define CWORKERMOCK_H_

#include <string>

#include "CWorker.h"

class CWorkerSpy : public CWorker {
public:
	CWorkerSpy() {};
	virtual ~CWorkerSpy() {};
	std::string output();
};

#endif
