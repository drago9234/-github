#include <iostream>

using namespace std;

class tiles {
public:
	string brand;
	int size_h;
	int size_w;
	float price;

	void getData() {
		cout << brand << " " << size_h << " " << size_w << " " << price << endl;
	}

};


int main(){
	setlocale(0, "ru");
	tiles t1;
	tiles t2;
	cout << "¬ведите t1: " << endl;
	cin >> t1.brand >> t1.size_h >> t1.size_w >> t1.price;
	cout << "¬ведите t2: " << endl;
	cin >> t2.brand >> t2.size_h >> t2.size_w >> t2.price;
	t1.getData();
	t2.getData();
	return 0;
}