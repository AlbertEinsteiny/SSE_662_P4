#pragma once
using namespace std;
#include <iostream>

class Pizza
{
public:
	virtual void description()
	{
		cout << "I would like a" << endl;
	}

	virtual double cost()
	{
		cout << "The total cost is" << endl;
		return 0;
	}

};
Pizza p;

class Cheese_Pizza : Pizza
{
public:
	Pizza basePizza;

	void description()
	{
		basePizza.description();
		cout << "Cheese Pizza" << endl;
	}

	double cost()
	{
		basePizza.cost();
		cout << "8$" << endl;
		return 0;
	}

};
Cheese_Pizza cp;

class Vegan_Pizza : Pizza
{
public:
	Pizza basePizza;

	void description()
	{
		basePizza.description();
		cout << "Make a Vegan Pizza" << endl;
	}

	double cost()
	{
		basePizza.cost();
		cout << "7$" << endl;
		return 0;
	}

};
Vegan_Pizza vp;


class Sausage : Pizza
{
public:

	Pizza basePizza;

	Sausage(Pizza basePizza)
	{
		basePizza = basePizza;
	}

	void description()
	{
		basePizza.description();
		cout << "with Sausage" << endl;
	}

	double cost()
	{
		double price;
		price = basePizza.cost() +cp.cost() + 2.00;
		return price;
	}
};

class Pepperoni : Pizza
{
public:

	Pizza basePizza;

	Pepperoni(Pizza basePizza)
	{
		basePizza = basePizza;
	}

	void description()
	{
		basePizza.description();
		cout << "with Pepperoni" << endl;
	}

	double cost()
	{
		double price;
		price = basePizza.cost() + 1.50;
		return price;
	}
};

class Ham : Pizza
{
public:

	Pizza basePizza;

	Ham(Pizza basePizza)
	{
		basePizza = basePizza;
	}

	void description()
	{
		basePizza.description();
		cout << "with Ham" << endl;
	}

	double cost()
	{
		double price;
		price = basePizza.cost() + 1.00;
		return price;
	}
};

class Peppers : Pizza
{
public:

	Pizza basePizza;

	Peppers(Pizza basePizza)
	{
		basePizza = basePizza;
	}

	void description()
	{
		basePizza.description();
		cout << "with Peppers" << endl;
	}

	double cost()
	{
		double price;
		price = basePizza.cost() + .75;
		return price;
	}
};

class Onions : Pizza
{
public:

	Pizza basePizza;

	Onions(Pizza basePizza)
	{
		basePizza = basePizza;
	}

	void description()
	{
		basePizza.description();
		cout << "with Peppers" << endl;
	}

	double cost()
	{
		double price;
		price = basePizza.cost() + .50;
		return price;
	}
};

class Pineapple : Pizza
{
public:

	Pizza basePizza;

	Pineapple(Pizza basePizza)
	{
		basePizza = basePizza;
	}

	void description()
	{
		basePizza.description();
		cout << "with Peppers" << endl;
	}

	double cost()
	{
		double price;
		price = basePizza.cost() + 1.00;
		return price;
	}
};

enum pizzainfo
{
	cheese_pizza,
	cheese_pizza_sausage,
	cheese_pizza_ham,
	cheese_pizza_pepperoni,
	cheese_pizza_sausage_ham,
	cheese_pizza_ham_pepperoni,
	cheese_pizza_sausage_pepperoni,
	cheese_pizza_all,
	vegan_pizza,
	vegan_pizza_peppers,
	vegan_pizza_onions,
	vegan_pizza_pineapple,
	vegan_pizza_peppers_onions,
	vegan_pizza_peppers_pineapple,
	vegan_pizza_pineapple_onions,
	vegan_pizza_all
};