#include<iostream>
#include"../inc/stoper.hh"

using namespace std;
void Stoper::start(void) {
	 gettimeofday(&t1, NULL);
}

void Stoper::stop(void) {
	 gettimeofday(&t2, NULL);

}

long double Stoper::elapsed_Time(void) {
  elapsedTime = (t2.tv_sec - t1.tv_sec)*1000.0;
  elapsedTime += (t2.tv_usec - t1.tv_usec)/1000.0;
cout<<elapsedTime<<endl;
	return elapsedTime;
}
