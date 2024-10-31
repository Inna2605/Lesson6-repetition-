/*1. Дана програма, яка визначає останнє додатне і перше від'ємне число в масиві. 
Знайти і виправити синтаксичні й логічні помилки.

#include <iostream>
using namespace std;
int main()
{
 double size = 8;
 double arr[size]={-5.7, 6.0, 2, 0, -4.7, 6, 8.1, -4, 0};
 int positive = 0;
 for (int i = size; i >= 0; i++)
 {
 if (arr[i] > 0)
 {
 positive = arr[i];
 break;
 }
 }
 int negative = 0;
 for (int i = 0; i < size; i++)
 {
 if (arr[i] < 0)
 {
 negative = arr[i];
 break;
 }
 cout << "Last positive number: " << positive <<
 endl;
 cout << "First negatine number: " << negative <<
 endl;
 return 0;
}

Вхідними даними у всіх описаних нижче завданнях є масив з 10 елементів, 
заповнений користувачем з клавіатури.

2. У масиві зберігається інформація про кількість мешканців кожної квартири п'ятиповерхового будинку
(4 під'їзди, на кожному поверсі по 2 квартири).
а) за обраним номером квартири визначити кількість мешканців, 
а також їхніх сусідів, які проживають на одному поверсі;
б) визначити сумарну кількість мешканців для кожного під'їзду;
в) визначити номери квартир, де мешкають багатодітні сім'ї. 
Умовно будемо вважати багатодітними сім'ї, у яких кількість членів сім'ї перевищує п'ять осіб.

3. Дана температура повітря за кожен день січня. Визначити:
а) середню температуру за місяць;
б) скільки разів температура повітря опускалася нижче за зазначену мітку.

4. У масиві зберігається інформація про вартість 10 марок автомобілів. 
Визначити суму найдорожчого автомобіля і дізнатися його номер. 
Якщо таких автомобілів декілька, визначити:
а) номер першого такого автомобіля;
б) номер останнього такого автомобіля.

5. Написати програму, яка знаходить у масиві значення,
що повторюються два і більше разів, і виводить їх на екран.

6. Заповнити два цілочисельні масиви A[10] і B[10].
Сформувати третій масив X[20], елементи якого будуть взяті з A і B в порядку:
а) чергування (A0, b0, a1, b1, a2, b2, ..., a9, b9);
б) слідування (A0, a1, a2, ..., A9, b0, b1, b2, ..., b9)
 }*/
#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Oberite zadachy:\n"
		<< "1. Perevirka kody\n"
		<< "2. Meskanci bydunky\n"
		<< "3. Temperatyra povitra\n"
		<< "4. Avtomobili\n"
		<< "5. Znachenna y masuvi\n"
		<< "6. Formyvanna 3 masuvy\n";
	cin >> n;
	switch (n) {
	case 1: {
		/*1. Дана програма, яка визначає останнє додатне і перше від'ємне число в масиві.
Знайти і виправити синтаксичні й логічні помилки.

#include <iostream>
using namespace std;
int main()
{
 double size = 8;
 double arr[size]={-5.7, 6.0, 2, 0, -4.7, 6, 8.1, -4, 0};
 int positive = 0;
 for (int i = size; i >= 0; i++)
 {
 if (arr[i] > 0)
 {
 positive = arr[i];
 break;
 }
 }
 int negative = 0;
 for (int i = 0; i < size; i++)
 {
 if (arr[i] < 0)
 {
 negative = arr[i];
 break;
 }
 cout << "Last positive number: " << positive <<
 endl;
 cout << "First negatine number: " << negative <<
 endl;
 return 0;
 }
}*/

		const int size = 9;
		double arr[size] = { -5.7, 6.0, 2, 0, -4.7, 6, 8.1, -4, 0 };
		double positive = 0;
		for (int i = 0; i < size; i++)
		{
			if (arr[i] > 0)
			{
				positive = arr[i];
				cout << "Last positive number: " << positive << endl;
				break;
			}
		}
		double negative = 0;
		for (int i = 0; i < size; i++)
		{
			if (arr[i] < 0)
			{
				negative = arr[i];
				cout << "First negatine number: " << negative << endl;
				break;
			}
		}
	}
		  break;
	case 2: {
		/*2. У масиві зберігається інформація про кількість мешканців кожної квартири п'ятиповерхового будинку
		(4 під'їзди, на кожному поверсі по 2 квартири).
		а) за обраним номером квартири визначити кількість мешканців,
		а також їхніх сусідів, які проживають на одному поверсі;
		б) визначити сумарну кількість мешканців для кожного під'їзду;
		в) визначити номери квартир, де мешкають багатодітні сім'ї.
		Умовно будемо вважати багатодітними сім'ї, у яких кількість членів сім'ї перевищує п'ять осіб.
		*/
		int a, N, s;
		const int K = 40;
		int Kv[K];
		for (int i = 0; i < K; i++) {
			cout << "Vvedite kilkist lydei v kvarturi " << i + 1 << endl;
			cin >> Kv[i];
		}
		cout << "\nOberite potribne:\n"
			<< "1. Vuznachutu kilkist meskanciv v kvarturi i ix sysidiv\n"
			<< "2. Vuznachutu kilkist meskanciv v koznomy pidizdi\n"
			<< "3. Vuznachutu nomeru kvartur de meskayt bagatoditni (bilse 5 cholovik)\n";
		cin >> a;
		switch (a) {
		case 1: {
			cout << "Vvedite nomer kvartnru: ";
			cin >> N;
			for (int i = 0; i < 4; i++) {
				s = i * 10;
				for (int j = 0; j < K / 4; j++) {
					if (j + s == N - 1 && N % 2 != 0) {
						cout << " V kvarturi " << N << " meskayt " << Kv[j + s] << " lydey\n"
							<< "Kilkist meskayt y ix sysidiv " << Kv[(j + 1) + s] << " v kvarturi " << (j + 1) + s << endl;
					}
					else if (j + s == N - 1 && N % 2 == 0) {
						cout << " V kvarturi " << N << " meskayt " << Kv[j + s] << " lydey\n"
							<< "Kilkist meskayt y ix sysidiv " << Kv[(j - 1) + s] << " v kvarturi " << (j - 1) + s << endl;
					}
				}
			}
		}
			  break;
		case 2: {
			int Sum;
			for (int i = 0; i < 4; i++) {
				Sum = 0;
				s = i * 10;;
				for (int j = 0; j < K / 4; j++) {
					Sum += Kv[j + s];
				}
				cout << "Sumarna kilkist meskantsiv " << Sum << " v pidizdi " << i + 1 << endl;
			}
		}
			  break;
		case 3: {
			for (int i = 0; i < 4; i++) {
				s = i * 10;
				for (int j = 0; j < K / 4; j++) {
					if (Kv[j + s] >= 5) {
						cout << "Bagatoditna simia v kvarturi " << j + 1 + s << " meskayt " << Kv[j + s] << " lydey\n";
					}
				}
			}
		}
			  break;
		default:cout << "Ne virno vubranui variant!\n";
		}
	}
		  break;
	case 3: {
		/*3. Дана температура повітря за кожен день січня. Визначити:
		а) середню температуру за місяць;
		б) скільки разів температура повітря опускалася нижче за зазначену мітку.*/
		int Sum = 0, a = 0, m;
		const int D = 31;
		int T[D];
		for (int i = 0; i < D; i++) {
			cout << "Vvedite temperatyry povitra za " << i + 1 << " sichna\n";
			cin >> T[i];
		}
		cout << "Vedite mitky dla temperatyru: ";
		cin >> m;
		for (int j = 0; j < D; j++) {
			if (T[j] < m) {
				a++;
			}
			Sum += T[j];
		}
		cout << "Seredna temperatyra za misath " << Sum / D << endl
			<< "Temperatyra povitra opyskalasa nuzche za " << m << " - " << a << " raziv\n";
	}
		  break;
	case 4: {
		/*4. У масиві зберігається інформація про вартість 10 марок автомобілів.
		Визначити суму найдорожчого автомобіля і дізнатися його номер.
		Якщо таких автомобілів декілька, визначити:
		а) номер першого такого автомобіля;
		б) номер останнього такого автомобіля.*/
		int Dor = 0, a = 0;
		const int Avto = 10;
		int Var[Avto];
		int DorAvto[Avto];
		for (int i = 0; i < 10; i++) {
			cout << "Vvedite vartist " << i + 1 << " avtomobila: ";
			cin >> Var[i];
			cout << endl;
		}
		for (int j = 0; j < 10; j++) {
			if (Dor < Var[j]) {
				Dor = Var[j];
			}
		}
		for (int k = 0; k < 10; k++) {
			if (Dor == Var[k] && Var[k] != 0) {
				DorAvto[a] = k;
				a++;
			}
		}
		if (a > 1) {
			cout << "Naibilse doroga avtivka kostye: " << Dor
				<< "\nVsogo dorogux avtivok " << a
				<< "\nPersui nomer naibilse dorogoi avtivku " << DorAvto[0] + 1
				<< "\nOstannii nomer naibilse dorogoi avtivku " << DorAvto[a - 1] + 1 << endl;

		}

		else if (a == 1) {
			cout << "Naibilse doroga avtivka kostye: " << Dor << endl
				<< "Nomer naibilse dorogoi avtivku " << DorAvto[0] + 1 << endl;
		}
		else {
			cout << "Nemae naibilse doroguh avtivok!\n";
		}
	}
		  break;
	case 5: {
		/*5. Написати програму, яка знаходить у масиві значення,
		що повторюються два і більше разів, і виводить їх на екран.*/
		int a, b = 0;
		const int A = 10;
		int Arr[A];
		int Pov[A];
		cout << "Zapovnite masuv:\n";
		for (int i = 0; i < A; i++) {
			cout << "Element " << i + 1 << " = ";
			cin >> Arr[i];
		}
		for (int j = 0; j < A; j++) {
			a = 0;
			for (int k = j + 1; k < A; k++) {
				if (Arr[j] == Arr[k]) {
					a++;
				}
			}
			if (a != 0 && j == 0) {
				Pov[b] = Arr[j];
				cout << "Znachenna " << Arr[j] << " zystrichaetsa " << a + 1 << " raziv!\n";
			}
			else if (j != 0) {
				int c = 0;
				for (int h = b; h >= 0; h--) {
					if (Arr[j] == Pov[h]) {
						c++;
					}
				}
				if (a != 0 && c == 0) {
					b++;
					Pov[b] = Arr[j];
					cout << "Znachenna " << Arr[j] << " zystrichaetsa " << a + 1 << " raziv!\n";
				}
				else continue;
			}
		}
	}
		  break;
	case 6: {
		/*6. Заповнити два цілочисельні масиви A[10] і B[10].
		Сформувати третій масив X[20], елементи якого будуть взяті з A і B в порядку:
		а) чергування (A0, b0, a1, b1, a2, b2, ..., a9, b9);
		б) слідування (A0, a1, a2, ..., A9, b0, b1, b2, ..., b9)*/
		int A[10], B[10], X[20], k;
		cout << "Zapovnite masuv A i B\n";
		for (int i = 0; i < 10; i++) {
			cout << "Vvedite znachenna elementiv " << i + 1 << " masuvy A ta masuvy B: ";
			cin >> A[i] >> B[i];
			cout << endl;
		}
		cout << "Oberite variant masuvy X:\n"
			<< "1. Za chergyvannam\n"
			<< "2. Za slidyvannam\n";
		cin >> k;
		switch (k) {
		case 1: {
			//X[0] = A[0];
			for (int i = 0, a = 0; i < 20; i++) {
				if (i == 0 || i % 2 == 0) {
					X[i] = A[a];
				}
				else {
					X[i] = B[a];
					a++;
				}
			}
			cout << "Elementu masuvy X[20] v poradky slidyvanna:\n";
			for (int j = 0; j < 20; j++) {
				cout << X[j] << ' ';
			}
		}
			  break;
		case 2: {
			for (int i = 0; i < 20; i++) {
				if (i < 10) {
					X[i] = A[i];
				}
				else {
					X[i] = B[i - 10];
				}
			}
			cout << "Elementu masuvy X[20] v poradky slidyvanna:\n";
			for (int j = 0; j < 20; j++) {
				cout << X[j] << ' ';
			}
			cout << endl;
		}
			  break;
		default:cout << "Takogo varianty nemae!";
		}
	}
		  break;
	default:cout << "Ne virno obranui variant!\n";
	}
}
