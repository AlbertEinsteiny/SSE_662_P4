// Pizza.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Pizza_Base.h"
#include <iostream>
using namespace std;


void CreatePizza(pizzainfo pi)
{
	switch (pi)
	{
	case cheese_pizza:
		cp.description();
		cp.cost();
		break;
	case cheese_pizza_sausage:
		cp.description();
		Pizza topping;
		Sausage(topping);
		
		Sausage(
		)
		
		break;


	}
}



int main()
{
	//CreatePizza(cheese_pizza);
	cout << "\n" << endl;
	CreatePizza(cheese_pizza_sausage);
}