#include <iostream>
using namespace std;

class complex {
public:
	complex();
	complex(float);
	complex(float, float);
	complex operator+(complex);
	complex operator+(float);

	void print() {
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
	}
	friend ostream & operator<<(ostream &, complex &);
private:
	float a, b;
};

complex::complex() { a = b = 0.0; }

complex::complex(float x) {
	a = x;
	b = 0.0;
}

complex::complex(float x, float y) {
	a = x;
	b = y;
};


complex complex::operator+(complex x) {
	a += x.a;
	b += x.b;
	return complex(a, b);
};

complex complex::operator+(float x) {
	a += x;
	return complex(a, b);
};

ostream & operator<<(ostream & os, complex &plex) {
	os << "a = " << plex.a << endl;
	os << "b = " << plex.b << endl;
	return os;
}



int main() {
	complex c, d = 3.0, f(3, 56.4);

	c = c + 3.3;

	cout << c;

	f = f + d;

	cout << f;

}
