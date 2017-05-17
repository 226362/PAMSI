#ifndef _STOPER_HH
#define _STOPER_HH

#include <iostream>
#include <sys/time.h>
using namespace std;


// defunicja stopera
//interfejs IStoper
class IStoper {
public:
	virtual void start(void) = 0;
	virtual void stop(void) = 0;
	virtual long double elapsed_Time(void) = 0;
	virtual ~IStoper (){}
};


class Stoper : public IStoper{
private:

	struct timeval t1, t2;
	long double elapsedTime;

public:

//czas start
	virtual void start(void);
//czas stop
	virtual void stop(void);
	//zwracanie czasu
	virtual long double elapsed_Time(void);


};
#endif
