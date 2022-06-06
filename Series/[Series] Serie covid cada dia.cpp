#include<iostream>
using namespace std;

void serie_covid(int n) {

    int k = 1;
    cout << "La serie de covid es: ";

    for (int i = 1; i <= n; i++) {

        cout << k << " ";
        k = k * 2;
    }
}

int main() {

    int n;

    cout << "Digite n para el dia: "; cin >> n;
    serie_covid(n);

    return 0;
}
