#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	int i;  // 32 bits -> 4 bytes -> x0000000000000000000000000000000
	int *pi;
	
	double d;
	
	i = 260;   // 0000000000000000 - 1111111111111111 -> 0 .. 65535
	           // -2.147.483.647 .. +2.147.483.648
	           // 10000000000000000000000000000000
	           
	           // 10000000 00000000 00000101 11111111
	           
    d = 300; 
	
	cout << "Valor da variável i: " << i << endl;
	cout << "Endereço da variável i: " << &i << endl;
	cout << "Tamanho da variável i: " << sizeof(i) << endl;
	cout << endl;
	
	cout << "Valor da variável d: " << d << endl;
	cout << "Endereço da variável d: " << &d << endl;
	cout << "Tamanho da variável d: " << sizeof(d) << endl;
	cout << endl;
	
	
	// *(&i) = 5000;
	
	pi = &i;
	*pi = 5000;
	
	cout << "Valor da variável i: " << i << endl;
	cout << "Endereço da variável i: " << &i << endl;
	cout << "Tamanho da variável i: " << sizeof(i) << endl;
	cout << endl;
	
	
	cout << "Valor da variável pi: " << pi << endl;
	cout << "Valor do endereço para onde pi aponta: " << *pi << endl;
	cout << "Endereço do ponteiro pi: " << &pi << endl;
	cout << "Tamanho do ponteiro pi: " << sizeof(pi) << endl;
	cout << endl;
	
	
	
	
	
	
	return 0;
}