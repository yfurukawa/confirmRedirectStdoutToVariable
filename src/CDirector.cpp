#include "CDirector.h"
#include "CWorker.h"

void CDirector::execute() {
	CWorker* worker;
	worker = new CWorker();
	worker->output();
	delete worker;
}

