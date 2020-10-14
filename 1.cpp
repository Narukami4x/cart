#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void display(string name[], float price[5][3]) {
	cout << "No." << setw(10) << "Product" << setw(13) << "Price" << setw(15) << "Vat7%" << setw(15) << "Net" << endl; 
	for (int i = 0; i < 5; i++) {
		cout << fixed << i+1 << setw(10) << name[i] << setw(15)<< setprecision(2) << price[i][0] << setw(15) << setprecision(2) << price[i][1] << setw(15) << setprecision(2) << price[i][2] << endl; 
	}
}

void calprice(float price[5][3]) {
	for (int i = 0; i < 5; i++) {
		price[i][1] = (price[i][0] *0.07);
		price[i][2] = price[i][0] + price[i][1];
	}
}

int main() {
	string name[5];
	float price[5][3];
	for (int i = 0; i < 5; i++) {
		cout << "Enter Product Name: ";
		cin >> name[i];
		cout << "\tprice: ";
		cin >> price[i][0];
	}
	calprice(price);
	display(name, price);
	return 0;
}