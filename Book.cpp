#include <iostream>
using namespace std;

class Price
{
private:
	int price;
	int skidka;
	int* a;

public:
	Price()
	{

	}

	Price(int value1, int value2)
	{
		this->price = value1;
		this->skidka = value2;
	}

	void show() {

		cout << "Price: " << price << endl;
		cout << "Skidka: " << skidka << endl;
	}
	int get()
	{
		cin >> price;
		cin >> skidka;
		return price, skidka;
	}
	Price operator +=(Price other)
	{
		price = this->price + other.price;
		skidka = this->skidka + other.skidka;

		return Price(price, skidka);
	}
	Price operator +(Price other)
	{
		price = this->price + other.price;
		skidka = this->skidka + other.skidka;

		return Price(price, skidka);
	}
	bool operator <(Price other)
	{
		int obj1 = skidka + price;
		int obj2 = other.skidka + other.price;


		if (obj1 < obj2)
			return true;
		else return false;
	}
	int& operator [](int index)
	{
		return a[index];
	}
	void operator++()
	{
		skidka++;
		price++;

	}
	void operator++(int a)
	{
		++skidka;
		++price;
		a = skidka;

	}
	~Price()
	{
		setlocale(0, "");
		cout << "Вызван деструктор класса Price \n" << endl;
		cout << this << endl;
	}
};

int main()
{

	Price b(2, 228);
	Price c(500, 2);


	if (c < b)
		cout << "c<b" << endl;
	else cout << "c>b" << endl;

	//c += b; //c=c+b;
	c++;
	++c;
	c = c += b;

	int z[3] = { 1123,213213,213 };
	Price* array = new Price[4]{
	Price(1,2),
	Price(2,3),
	Price(3,4),
	Price(5,6)
	};

	cout << z[2] << endl;;

	for (int i = 0; i < 4; i++)
	{
		array[i].show();
	}

	c.show();
}