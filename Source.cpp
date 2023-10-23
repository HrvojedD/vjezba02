#include <iostream>
#include <iomanip>
#include <stack>
#include <vector>
#include <time.h>
using namespace std;

//zad1


/*
int minMax(int niz[], int duljinaniza, int& min, int &max) {
 int i = 0;
 for (i = 0; i < duljinaniza; i++) {
 if (niz[i] < min){
 min=niz[i];
 }
 }
 for (i = 0; i < duljinaniza; i++) {
 if (niz[i] > max){
 max=niz[i];
 }
 }
 return min, max;
}

 int main() {
 int niz[] = { 2, 3, 4, -5, 14 };
 int broj = sizeof(niz) / sizeof(niz[0]);
 int min = niz[0];
 int max = niz[0];
 minMax(niz, broj, min, max);
 cout<< "Najmanji broj u niz je: " << min << endl;
 cout<< "Najveci broj u niz je: " << max;
 }*/




 //zad2

 /*int& element(int niz[], int broj) {
  return niz[broj];
 }


 int main() {
  int niz[] = { 2, 3, 4, -5, 14 };
  int n=0;

  cout << "Uvecani element je : " << (element(niz, 3) += 1);

 }*/

 //zad3
 /*
 struct Vektor {
 int* elementi;
 int velicina;
 int kapacitet;

 void vektor_new(int n) {
 elementi=new int[n];
 velicina = 0;
 kapacitet = n;
 }



 void vector_push_back(int n){
 if (velicina == kapacitet) {
 kapacitet *= 2;
 int* newelementi = new int[kapacitet];
 for (int i=0; i < velicina; i++) {
 newelementi[i] = elementi[i];
 }
 delete[] elementi;
 elementi = newelementi;
 }
 elementi[velicina++] = n;
 }
 void vector_pop_back() {
 if (velicina > 0) {
 velicina--;
 }
 }
 int vector_front() {
 return elementi[0];
 }
 int vector_back() {
 return elementi[velicina - 1];
 }
 int vector_size() {
 return velicina;
 }
 void vektor_delete(int n) {
 delete[] elementi;
 elementi = new int[n];
 velicina = 0;
 kapacitet = n;
 }

 };
 void ispisVektora(const Vektor& v) {
 for (int i = 0; i < v.velicina; i++) {
 std::cout << v.elementi[i] << " ";
 }
 cout << endl;
 }

 int main() {
 Vektor v1;

 v1.vektor_new(2);

 v1.vector_push_back(1);
 v1.vector_push_back(2);
 v1.vector_push_back(3);
 v1.vector_push_back(4);
 v1.vector_pop_back();
 v1.vector_front();
 v1.vector_back();
 v1.vector_size();

 cout << "Prvi element " << v1.vector_front() << endl;
 cout << "Zadnji element " << v1.vector_back() << endl;
 cout << "Velicina elemenata " << v1.vector_size() << endl;

 ispisVektora(v1);
 v1.vektor_delete(1);
 return 0;
 }*/





 //zad4
/*
struct Matrica {
	int redak;
	int stupac;
	float** elementi;
};

void unos(Matrica& matrica) {
	cout << "unesite broj redaka: " << endl;
	cin >> matrica.redak;
	cout << "unesite broj stupaca: " << endl;
	cin >> matrica.stupac;

	matrica.elementi = new float*[matrica.redak];
	for (int i = 0; i < matrica.redak; i++) {
		matrica.elementi[i] = new float[matrica.stupac];
		for (int j = 0; j < matrica.stupac; j++) {
			cout << "Unesite element matrice: " << i + 1 << ", " << j + 1 << " " << endl;
			cin >> matrica.elementi[i][j];
		}
	}
}
void generirajj(Matrica& matrica) {
	cout << "Unesite broj redaka: " << endl;
	cin >> matrica.redak;
	cout << "Unesite broj stupaca: " << endl;
	cin >> matrica.stupac;
	srand(time(NULL));
	matrica.elementi = new float*[matrica.redak];
	for (int i = 0; i < matrica.redak; i++) {
		matrica.elementi[i] = new float[matrica.stupac];
		for (int j = 0; j < matrica.stupac; j++) {
			matrica.elementi[i][j] = rand() % 100;
		}
	}
}

Matrica zbrojiMatrice(Matrica& matrica1, Matrica& matrica2) {
	Matrica zbroji;
	zbroji.redak = matrica1.redak;
	zbroji.stupac = matrica1.stupac;
	zbroji.elementi = new float*[zbroji.redak];

	for (int i = 0; i < zbroji.redak; i++) {
		zbroji.elementi[i] = new float[zbroji.stupac];
		for (int j = 0; j < zbroji.stupac; j++) {
			zbroji.elementi[i][j] = matrica1.elementi[i][j] + matrica2.elementi[i][j];
		}
	}
	return zbroji;
}

Matrica zbroji(Matrica& matrica1, Matrica& matrica2) {
	Matrica zbroj;
	zbroj.redak = matrica1.redak;
	zbroj.stupac = matrica1.stupac;
	zbroj.elementi = new float*[zbroj.redak];
	for (int i = 0; i < zbroj.redak; i++) {
		zbroj.elementi[i] = new float[zbroj.stupac];
	}
	for (int i = 0; i < zbroj.redak; i++) {
		for (int j = 0; j < zbroj.redak; j++) {
			zbroj.elementi[i][j] = matrica1.elementi[i][j] + matrica2.elementi[i][j];
		}
	}
	return zbroj;
}
Matrica razlikaa(Matrica& matrica1, Matrica& matrica2) {
	Matrica zbroj;
	zbroj.redak = matrica1.redak;
	zbroj.stupac = matrica1.stupac;
	zbroj.elementi = new float*[zbroj.redak];
	for (int i = 0; i < zbroj.redak; i++) {
		zbroj.elementi[i] = new float[zbroj.stupac];
	}
	for (int i = 0; i < zbroj.redak; i++) {
		for (int j = 0; j < zbroj.redak; j++) {
			zbroj.elementi[i][j] = matrica1.elementi[i][j] - matrica2.elementi[i][j];
		}
	}
	return zbroj;
}
Matrica umnozakk(Matrica& matrica1, Matrica& matrica2) {
	Matrica zbroj;
	zbroj.redak = matrica1.redak;
	zbroj.stupac = matrica1.stupac;
	zbroj.elementi = new float*[zbroj.redak];
	for (int i = 0; i < zbroj.redak; i++) {
		zbroj.elementi[i] = new float[zbroj.stupac];
	}
	for (int i = 0; i < zbroj.redak; i++) {
		for (int j = 0; j < zbroj.redak; j++) {
			zbroj.elementi[i][j] = 0.0;
			for (int k = 0; k < matrica1.stupac; k++) {
				zbroj.elementi[i][j] += matrica1.elementi[i][j] * matrica2.elementi[i][j];
			}
		}
	}
	return zbroj;
}
Matrica t(Matrica& matrica) {
	Matrica m;
	m.redak = matrica.stupac;
	m.stupac = matrica.redak;
	for (int i = 0; i < m.redak; i++) {
		m.elementi[i] = new float[m.stupac];

	}
	for (int i = 0; i < m.redak; i++) {
		for (int j = 0; j < m.stupac; j++) {
			m.elementi[i][j] = matrica.elementi[j][i];
		}


	}
	return m;

}





void ispis(Matrica& matrica) {
	cout << endl;
	for (int i = 0; i < matrica.redak; i++) {
		for (int j = 0; j < matrica.stupac; j++) {
			cout.width(6); cout << matrica.elementi[i][j] << " ";
		}
		cout << endl;
	}
}



int main() {
	Matrica matrica1;
	Matrica matrica2;
	Matrica matricarand;
	Matrica zbroj;
	Matrica razlika;
	Matrica umnozak;
	Matrica transponirana;
	unos(matrica1);
	unos(matrica2);
	generirajj(matricarand);
	zbroj = zbroji(matrica1, matrica2);
	razlika = razlikaa(matrica1, matrica2);
	umnozak = umnozakk(matrica1, matrica2);

	cout << "Zbroj matrica je: " << endl;
	ispis(zbroj);

	cout << "Razlika matrica je: " << endl;
	ispis(razlika);

	cout << "umnozak matrica je: " << endl;
	ispis(umnozak);
	cout << "random matrica: " << endl;
	ispis(matricarand);

	transponirana = t(matrica1);
	cout << "transponirana matrica:  " << endl;
	ispis(transponirana);

}*/