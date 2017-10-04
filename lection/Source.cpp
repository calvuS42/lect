#include <iostream>
#include "pizza.h"
#include "order.h"
#include "Pasta.h"
#include "Soup.h"
#include "MrCat.h"
#include <thread>
#include <vector>

using namespace std;

vector <int> items = { 1, 2, 3, 4, 5 };

void addThreads() {
	int i = 0;
	while (i<50000000) {
		items.push_back(i*i);
		//this_thread::sleep_for(0.000001s);
		i++;
	}

}


void removeThreads() {
	int i = 0;
	while (i<50000000) {
		if(items.size())
			items.pop_back();
		//this_thread::sleep_for(0.000001s);
		i++;
	}

}



void main() {
	thread workers[] = { thread(addThreads), thread(removeThreads) };


	int k = 0;
	while (k < 500) {
		cout << items.size() << endl;
		this_thread::sleep_for(0.15s);
		k++;
	}
	for (int j =0; j<2; j++)
		workers[j].join();
	cout << "All threads finished! \n";
	system("pause");
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