#include <iostream>
#include "tqueue.h"

int main(int argc, char** argv) { 
	TQueue queue;

	std::shared_ptr<Trapezoid> tr(new Trapezoid(1, 2, 3, 4));

	std::cout << "Enter n: ";
	int n; std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> *tr;	
		std::cout << *tr << std::endl;
		queue.Push(std::shared_ptr<Trapezoid>(new Trapezoid(*tr)));
		std::cout << queue;
		std::cout << std::endl;
		std::cout << "Length: " << queue.Length() << std::endl;
	}

	
	TQueue queue2 = queue;

	std::cout << "Queue: " << queue << std::endl;

	std::cout << "Queue2: " << queue2 << std::endl;


	return 0;
}