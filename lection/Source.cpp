#include <iostream>
#include "pizza.h"
#include "order.h"
#include "Pasta.h"
#include "Soup.h"
#include "MrCat.h"

using namespace std;

void main() {
	MrCat cafe;
	cafe.showMenu();
	order newOrder;
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