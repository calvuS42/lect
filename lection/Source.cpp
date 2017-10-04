#include <iostream>
#include "pizza.h"
#include "order.h"
#include "Pasta.h"
#include "Soup.h"
#include "MrCat.h"
#include <thread>

using namespace std;

void testThreads() {
	while (true) {
		cout << ".";
		this_thread::sleep_for(3s);
	}

}


void main() {
	thread t1(testThreads);
	thread t2(testThreads);
	thread t3(testThreads);
	thread t4(testThreads);
	while (true) {
		int i = 5;
		int a = 4.;
		while (i < 2000000000) {
			i = a*869;
			a += 1;
		}
		cout << "*";
		this_thread::sleep_for(3s);
	}
	
	t1.join();
	t2.join();
	t3.join();
	t4.join();
	return;

	MrCat cafe;
	cafe.showMenu();
	order newOrder(3);
	newOrder += new Pizza("Margarita");
	newOrder += new Soup("Miso");



	Dish *dishes[] = {
		new Pizza("hawayian"),
		new Pizza("margaritta"),
		new Pizza("quatroforda"),
		new Soup("Misco"),                 
		new Soup("CreamChesse"),
		new Pasta("Bolognese")
	};
	for (auto dish : dishes) {
		cout << dish->getName() << endl;
	}
	for (auto dish : dishes) delete dish;
	system("pause");
}