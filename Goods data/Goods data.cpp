#include <iostream>
using namespace std;

class Goods
{
protected:
	int price = 0;
	int saleprice = 10;
	string name;
	string country;
	string color;
	string material;
	string weight;
	string statys;
	string type;
public:

	Goods(int p, int sp, string name, string country, string color,
		string material, string weight, string statys, string type)
	{
		this->price = p;
		this->saleprice = sp;
		this->name = name;
		this->country = country;
		this->color = color;
		this->material = material;
		this->weight = weight;
		this->statys = statys;
		this->type = type;
		cout << "The good created:" << endl;
		cout << "Price --> " << p << " Sale price --> " << sp << endl;
		cout << "Name --> " << name << " Color --> " << color << endl;
		cout << "Country --> " << country << endl;
		cout << "Material --> " << material << " Weight --> " << weight << endl;
		cout << "Statys --> " << statys << " Type --> " << type << endl;
	}
	virtual void info()
	{
		cout << "\n\nInfo of the good:" << endl;
		cout << "Price --> " << price << " Sale price --> " << saleprice << endl;
		cout << "Name --> " << name << " Color --> " << color << endl;
		cout << "Country --> " << country << endl;
		cout << "Material --> " << material << " Weight --> " << weight << endl;
		cout << "Statys --> " << statys << " Type --> " << type << endl;
	}

	void state(string st)
	{
		this->statys = st;
	}
};

class Passengercar : public Goods
{
protected:
	int number_seats;
	double engine;
public:
	Passengercar(int p, int sp, string name, string country, string color, string material, string weight, string statys, string type, int ns, double engine)
		: Goods(p, sp, name, country, color, material, weight, statys, type)
	{
		this->number_seats = ns;
		this->engine = engine;
		cout << "Number of seats --> " << number_seats << endl;
		cout << "Engine --> " << engine << endl;
	}

	void info() override
	{
		cout << "\n\nInfo of the passenger car:" << endl;
		cout << "Price --> " << price << " Sale price --> " << saleprice << endl;
		cout << "Name --> " << name << " Color --> " << color << endl;
		cout << "Country --> " << country << endl;
		cout << "Material --> " << material << " Weight --> " << weight << endl;
		cout << "Statys --> " << statys << " Type --> " << type << endl;
		cout << "Number of seats --> " << number_seats << endl;
		cout << "Engine --> " << engine << endl;
	}
};

class TurbulentWing : public Goods
{
private:
	int degree_inclination;
public:
	TurbulentWing(int p, int sp, string name, string country, string color, string material, string weight, string statys, string type, int degree_inclination)
		: Goods(p, sp, name, country, color, material, weight, statys, type)
	{
		this->degree_inclination = degree_inclination;
		cout << "Turbulent wing degree of inclination --> " << degree_inclination << endl;
	}

	void info() override
	{
		cout << "\n\nInfo of the router:" << endl;
		cout << "Price --> " << price << " Sale price --> " << saleprice << endl;
		cout << "Name --> " << name << " Color --> " << color << endl;
		cout << "Country --> " << country << endl;
		cout << "Material --> " << material << " Weight --> " << weight << endl;
		cout << "Statys --> " << statys << " Type --> " << type << endl;
		cout << "Turbulent wing degree of inclination --> " << degree_inclination << endl;
	}
};

class Router_4G : public Goods
{
private:
	int radius;
public:
	Router_4G(int p, int sp, string name, string country, string color, string material, string weight, string statys, string type, int radius)
		: Goods(p, sp, name, country, color, material, weight, statys, type)
	{
		this->radius = radius;
		cout << "Radius of router --> " << radius << endl;
	}
	void info()
	{
		cout << "\n\nInfo of the router:" << endl;
		cout << "Price --> " << price << " Sale price --> " << saleprice << endl;
		cout << "Name --> " << name << " Color --> " << color << endl;
		cout << "Country --> " << country << endl;
		cout << "Material --> " << material << " Weight --> " << weight << endl;
		cout << "Statys --> " << statys << " Type --> " << type << endl;
		cout << "\n\nRadius of router --> " << radius << endl;
	}
};

class Truck : public Passengercar
{
private:
	int load_capacity;
public:
	Truck(int p, int sp, string name, string country, string color, string material, string weight, string statys, string type, int ns, double engine, int capacity)
		: Passengercar(p, sp, name, country, color, material, weight, statys, type, ns, engine)
	{
		this->load_capacity = capacity;
		cout << "The load capacity --> " << capacity << endl;
	}

	void info() override
	{
		cout << "\n\nInfo of the passenger car:" << endl;
		cout << "Price --> " << price << " Sale price --> " << saleprice << endl;
		cout << "Name --> " << name << " Color --> " << color << endl;
		cout << "Country --> " << country << endl;
		cout << "Material --> " << material << " Weight --> " << weight << endl;
		cout << "Statys --> " << statys << " Type --> " << type << endl;
		cout << "Number of seats --> " << number_seats << endl;
		cout << "Engine --> " << engine << endl;
		cout << "The load capacity --> " << load_capacity << endl;
	}
};

class Body_truck : public Goods
{
private:
	int x, y, h;
public:
	Body_truck(int p, int sp, string name, string country, string color, string material, string weight, string statys, string type, int x, int y, int h)
		: Goods(p, sp, name, country, color, material, weight, statys, type)
	{
		this->x = x;
		this->y = y;
		this->h = h;
		cout << "Size of body:" << endl;
		cout << "X: " << x << endl;
		cout << "Y: " << y << endl;
		cout << "H: " << h << endl;
	}

	void info() override
	{
		cout << "\n\nInfo of the Body truck:" << endl;
		cout << "Price --> " << price << " Sale price --> " << saleprice << endl;
		cout << "Name --> " << name << " Color --> " << color << endl;
		cout << "Country --> " << country << endl;
		cout << "Material --> " << material << " Weight --> " << weight << endl;
		cout << "Statys --> " << statys << " Type --> " << type << endl;
		cout << "Size of body:" << endl;
		cout << "X: " << x << endl;
		cout << "Y: " << y << endl;
		cout << "H: " << h << endl;
	}
};

int main()
{
	Passengercar car(100, 150, "BMW", "Mexico", "Black", "Iron", "1 tona", "Sell", "Car", 4, 1.5);
	car.state("Written off");
	car.info();
	Router_4G router1(20, 40, "TP_Link", "USA", "Black", "Plastic", "500 g", "Get", "Router", 15);
	router1.info();
}