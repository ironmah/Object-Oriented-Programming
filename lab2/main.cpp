#include <iostream>
#include "trapezoid.h"
#include "tqueue.h"

int main(int argc, char** argv) { 
	TQueue queue;
	Trapezoid tr;

	std::cout << "Enter n: ";
	int n; std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> tr;	
		std::cout << tr << std::endl;	
		queue.Push(tr);
		std::cout << queue;
		std::cout << std::endl;
		std::cout << "Length: " << queue.Length() << std::endl;
	}

	Trapezoid tr1;
	tr1 = queue.Top();

	std::cout << tr1;
	
	return 0;
}