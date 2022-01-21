#include <iostream>
using namespace std;

int main() {
  
  double pesos, reais, soles, dollars = 0;
  
  cout << "Enter number of Colombian Pesos: " << endl;
  cin >> pesos;

  cout << "Enter number of Brazilian Reais: " << endl;
  cin >> reais;

  cout << "Enter number of Peruvian Soles: " << endl;
  cin >> soles;

  dollars = (0.049 * pesos) + (0.18 * reais) + (0.26 * soles);

  cout << "US Dollars = $" << dollars << endl;

  return 0;
}