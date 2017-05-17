#include "../inc/run.hh"

void Runnable::seedSrand (void) {
	srand(time(NULL));
}
	
int Runnable::generateRandomDgt (void) {
	return rand()%10;
}
