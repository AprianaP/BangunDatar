#include <iostream>
#include "Bangun.h"

using namespace std;

class Segitiga : public Bangun{
	public :
		int a, t, m;
		int Luas(){
			return (a*t)/2;
		}
};
