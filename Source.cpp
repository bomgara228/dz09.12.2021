//Иванов номер дз2
#include "dz.2"
int main() {
	int n = 5;
	int m = 5;
	int** mas;
	mas = new int* [n];
	for (int i = 0; i < n; i++) {
		mas[i] = new int[m];
	}
	randm(mas, n, m);
	darand(mas, n, m);
	cout << endl << "proiz otr chisel = " << proiz_otr;
}