#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int a, b, secim;
	string cevap;
	cout << "Hesaplamaya devam etmek istiyorsanız 'E' tuşuna,istemiyorsanız herhangi bir tuşa basınız: ";
	cin >> cevap;
	while (cevap == "E" || cevap == "e") {
		cout << "isleminizi seciniz:\n1-Toplama\n2-Cikarma\n3-Carpma\n4-Bolme\n5-Mod alma\n6-Ust alma\n7-Karekok alma\n";
		cin >> secim;

		switch (secim)
		{
		case 1:
		{
			cout << "1.sayıyı giriniz: ";
			cin >> a;
			cout << "2.sayıyı giriniz: ";
			cin >> b;
			cout << a + b << endl;
			break;
		}
		case 2:
			cout << "1.sayıyı giriniz: ";
			cin >> a;
			cout << "2.sayıyı giriniz: ";
			cin >> b;
			cout << a - b << endl;
			break;

		case 3:
			cout << "1.sayıyı giriniz: ";
			cin >> a;
			cout << "2.sayıyı giriniz: ";
			cin >> b;
			cout << a * b << endl;
			break;

		case 4:
			cout << "1.sayıyı giriniz: ";
			cin >> a;
			cout << "2.sayıyı giriniz: ";
			cin >> b;
			cout << a / b << endl;
			break;

		case 5:
			cout << "1.sayıyı giriniz: ";
			cin >> a;
			cout << "2.sayıyı giriniz: ";
			cin >> b;
			cout << a % b << endl;
			break;

		case 6:
			cout << "1.sayıyı giriniz: ";
			cin >> a;
			cout << "2.sayıyı giriniz: ";
			cin >> b;
			cout << pow(a, b) << endl;
			break;

		case 7:
			cout << "sayı giriniz: ";
			cin >> a;
			cout << sqrt(a) << endl;
			break;

		default:
			cout << "Hata" << endl;
			break;
		}
		cout << "Hesaplamaya devam etmek istiyorsanız 'E' tuşuna,istemiyorsanız herhangi bir tuşa basınız: ";
		cin >> cevap;
	}
	system("pause");
}