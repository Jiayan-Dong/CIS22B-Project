#include "Book.h"
Book::Book()
{
	isbn = 0;
	title = "";
	author = "";
	dateAdded = "";
	quantityOnHand = 0;
	wholeSaleCost = 0.0;
	retailPrice = 0.0;
}

Book::Book(int i, std::string t, std::string a, std::string d, int q, double w, double r)
{
	isbn = i;
	title = t;
	author = a;
	dateAdded = d;
	quantityOnHand = q;
	wholeSaleCost = w;
	retailPrice = r;
}

void Book::setIsbn(int i)
{
	isbn = i;
}
void Book::setTitle(std::string t)
{
	title = t;
}
void Book::setAuthor(std::string a)
{
	author = a;
}
void Book::setDateAdded(std::string d)
{
	dateAdded = d;
}
void Book::setQuantityOnHand(int q)
{
	quantityOnHand = q;
}
void Book::setWholeSaleCost(double w)
{
	wholeSaleCost = w;
}
void Book::setRetailPrice(double r)
{
	retailPrice = r;
}

int Book::getIsbn()
{
	return isbn;
}
std::string Book::getTitle()
{
	return title;
}
std::string Book::getAuthor()
{
	return author;
}
std::string Book::getDateAdded()
{
	return dateAdded;
}
int Book::getQuantityOnHand()
{
	return quantityOnHand;
}
double Book::getWholeSaleCost()
{
	return wholeSaleCost;
}
double Book::getRetailPrice()
{
	return retailPrice;
}

