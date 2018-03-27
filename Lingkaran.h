#include <iostream>
#include "Bangun.h"

using namespace std;

class Lingkaran : public Bangun{
	public :
		float pi = 3.14f;
		int r;
		int Luas(){
			return (r*r*pi);
		}
};
