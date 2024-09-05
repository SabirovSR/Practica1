#include "Binary.h"
using namespace std;

Binary::Binary(int size) : size(size) {
	arr = new bool[size];
	for (int i = 0; i < size; i++) {
		arr[i] = 0;
	}
}

Binary::Binary(const Binary& binaty) {
	size = binaty.size;

	this->arr = new bool[size];
	for (int i = 0; i < size; i++) {
		this->arr[i] = binaty.arr[i];
	}
}

Binary& Binary::operator=(const Binary& binary) {
	if (this == &binary) return *this; // Взятие адреса

	if(size != binary.size)
		delete[] arr;
	
	size = binary.size;
	arr = new bool[size];
	for (int i = 0; i < size; i++) {
		arr[i] = binary.arr[i];
	}

	return *this;
}

bool& Binary::operator[] (int i) {
	if ((i < size) && (i >= 0)) return arr[i];
	throw - 1;
}

istream& operator>>(istream& in, Binary& b) {
	for (int i = 0; i < b.GetSize(); i++) {
		in >> b[i];
	}
	return in;
}

ostream& operator<<(ostream& out, Binary& b) {
	for (int i = 0; i < b.GetSize(); i++) {
		out << b[i];
	}
	return out;
}