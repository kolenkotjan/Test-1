#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int min, sec, prvi_m, prvi_s;
	
	cout << "TEK NA 2600m!!" << endl;
	cout << "Vnesi minute: ";
	cin >> min;
	cout << "Vnesi sekunde: ";
	cin >> sec;
	
	
	do {
		if (min < 0 or sec > 60 or sec < 0) {
			cout << "Napacen vnos! Poskusi znova." << endl;
		} else {	
			prvi_m = min;
			prvi_s = sec;
			if (sec < prvi_s) {
				if (min < prvi_m) {
					prvi_m = min;
					prvi_s = sec;
					}
				}
		}		
		cout << endl;
		
		cout << "Vnesi minute: ";
		cin >> min;
		cout << "Vnesi sekunde: ";
		cin >> sec;
	} while(min != 0 && sec != 0);
	
	cout << "Najhitrejsi cas: " << prvi_m << "min " << prvi_s << "sec.";
	
	return 0;
}
