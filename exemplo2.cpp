#include <iostream>
#include <iomanip>)
using namespace std;

int main(int argc, char** argv)
{
	int i;
	double d;
	
    cout << "Digite valor int: ";
    cin >> i;

    cout << "Digite valor double: ";
    cin >> d;
    
    cout << "O valor inteiro digitado foi : " << i << endl;
    cout << "O valor double digitado foi : " << d << endl;
    cout << endl;
    
    // formatação da largura do dado (width)
    cout << "O valor inteiro digitado foi: " << setw(10) << i << endl;
    cout << "O valor double digitado foi : " << setw(10) << d << endl;
    cout << endl;
    
    // formatação da precisão do dados (precision)
    cout << setprecision(5);
    
    cout << "O valor double digitado foi : " << setw(10) << d << endl;
    cout << endl;
    
    cout << fixed;
    cout << "O valor double digitado foi : " << setw(10) << d << endl;
    cout << endl;
    
    

	return 0;	
}