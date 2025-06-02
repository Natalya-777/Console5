#include "square.h"

Square::Square(int length=0, int width=0):length_(length), width_(width){}

double Square::square() const {
	return length_ * width_;	
	}


double Square:: perimeter() const {
	return length_ + length_ + width_ + width_;
}

void Square::info() const  {
	std::cout << "Rectangle area: " << square() << " centimetres" << std::endl;
	std::cout << "Rectangle perimeter: " << perimeter() << " centimetres" << std::endl;
}

void Square::in() const  {
	for (int i = 0; i < width_; i++) {
		for (int j = 0; j < length_; j++) {
			std::cout << "* ";
	    }
		std::cout << std::endl;
	}
}
