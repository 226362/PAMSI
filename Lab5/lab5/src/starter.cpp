#include "../inc/starter.hh"

void Starter::setTestSize(unsigned int testsize) {
	runner->prepare(testsize);
	testSizeToDump = testsize;
}

void Starter::printResults(void) {
	cout << "Czas dzialania algorytmu " << stoper->elapsed_Time() << " ms." << endl;
	cout << "-----------------------------------------------" << endl;
	 cout<<""<<endl;
}


void Starter::test (void) {
	stoper->start();
	runner->run();
	stoper->stop();
}

void Starter::dumpToFile (string nameOfFile) {
	fstream file;
	file.open(nameOfFile, ios::app);
	if (file.good()) {
		//file << to_string(testSizeToDump) << " ";
		file << to_string(stoper->elapsed_Time()) << endl;
	}
	file.close();
}
