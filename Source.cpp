
#include "dz.1"
int main() {
	int n = 4;
	int m = 5;
	int a = 3;
	int** mas;
	
	mas = new int* [n]; 
	
	for (int i = 0; i < n; i++) {
		mas[i] = new int[m];
	}
	
	randm(mas, n, m);
	
	darand(mas, n, m);
	cout << endl << " sum nechet = " << slozen(mas,n,m);
}
