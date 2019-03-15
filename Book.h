#ifndef BOOK_H_
#define BOOK_H_

#include <fstream>
#include <string>

class Book
{
private:
	int isbn;
	std::string title;
	std::string author;
	std::string dateAdded;
	int quantityOnHand;
	double wholeSaleCost;
	double retailPrice;
public:
	Book();
	Book(int, std::string, std::string, std::string, int, double, double);

	void setIsbn(int);
	void setTitle(std::string);
	void setAuthor(std::string);
	void setDateAdded(std::string);
	void setQuantityOnHand(int);
	void setWholeSaleCost(double);
	void setRetailPrice(double);

	int getIsbn();
	std::string getTitle();
	std::string getAuthor();
	std::string getDateAdded();
	int getQuantityOnHand();
	double getWholeSaleCost();
	double getRetailPrice();
	friend std::fstream& operator<<(std::fstream &out, const Book &obj)
	{
		out << obj.isbn << "\t" << obj.title << "\t" << obj.author << "\t" << obj.dateAdded << "\t" << obj.quantityOnHand
			<< "\t" << obj.wholeSaleCost << "\t" << obj.retailPrice << "\n";
		return out;
	}

	friend std::fstream& operator>>(std::fstream &in, Book &obj)
	{
		in >> obj.isbn;
		in >> obj.title;
		in >> obj.author;
		in >> obj.dateAdded;
		in >> obj.quantityOnHand;
		in >> obj.wholeSaleCost;
		in >> obj.retailPrice;
		return in;
	}
};


#endif // ! BOOK_H_
