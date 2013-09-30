#ifndef CDIRECTOR_H_
#define CDIRECTOR_H_

class CWorker;

class CDirector {
public:
	CDirector() {};
	virtual ~CDirector() {};
	void execute();
};

#endif

