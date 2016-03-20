#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include "BMI.h"
using namespace std;

int main(){
	ifstream FileIn("file.in", ios::in);
	ofstream FileOut("file.out", ios::out);
	if(!FileIn || !FileOut){
		cerr << "Failed opening." << endl;
		exit(1);
	}

	float height,weight,bmi;
	string result;
	Obj b;

	while(FileIn >> height >> weight)
		if(height!=0){
			bmi = weight/(height*height/10000);
			result = b.category(bmi);
			FileOut << setprecision(4) << bmi << "\t" << result << endl;
			cout << setprecision(4) << bmi << "\t" << result << endl;
		}
	return 0;
}
