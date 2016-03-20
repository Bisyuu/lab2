#include <iostream>
#include <string>
#include "BMI.h"
using namespace std;

string Obj::category(float b){
	if(b<15) return "Very severely underweight";
	else if (b>=15 && b<16) return "Severely underweight";
	else if (b>=16 && b<18.5) return "Underweight";
	else if (b>=18.5 && b<25) return "Normal";
	else if (b>=25 && b<30) return "Overweight";
	else if (b>=30 && b<35) return "Obese Class I (Moderately obese)";
	else if (b>=35 && b<40) return "Obese Class II (Severely obese)";
	else if (b>=40) return "Obese Class III (Very severely obese)";
}
