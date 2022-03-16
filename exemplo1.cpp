#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int i;
	double d;
//	char c;
	string s;

	/*	
	c = 0x41;
	cout << "O valor char eh " << c << endl;
	*/
	
    cout << "Digite valor int: ";
    cin >> i;

    cout << "Digite valor double: ";
    cin >> d;
	
    cout << "Digite valor string: ";
    cin >> s;
    
    cout << endl;
    cout << "O valor inteiro digitado foi " << i << endl;
    cout << "O valor double digitado foi " << d << endl;
    cout << "O valor string digitado foi " << s << endl;
    cout << "O tamanho da string digitada foi " << s.size() << endl;
    
    cout << endl;

    cout << "Fim da execução";
	return 0;
}