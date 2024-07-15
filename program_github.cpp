#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

void calculator();
void plusA();
void minusA();
void starA();
void slashA();
void powerA();

int main() {

char sign;

again:
system("cls");
cout << "########################" << endl;
cout << "|     Kalkulator     |" << endl;
cout << "########################" << endl;

cout << "\nKalkulator obliczeniowy." << endl;
cout << "\nWpisz 'O' aby wlaczyc kalkulator 'C' aby zakonczyc program" << endl;
cin >> sign;
cin.ignore(1024,'\n');
if(sign=='o'||sign=='O')
calculator();
else if(sign=='c'||sign=='C')
system("pause");
else if(sign!='o'||sign!='o'||sign!='c'||sign!='C'){
main();
}
return 0;
}

void calculator(){
char signC, signW;

system("cls");
cout << "########################" << endl;
cout << "|     Kalkulator     |" << endl;
cout << "########################" << endl;

cout << "\nWitaj w kalkulatorze" << endl;
cout << "Co chcesz zrobic? Wybierz przypisana cyfre do czynnosci.\n\na.Dodawac\nb.Odejmowac\nc.Mnozyc\nd.Dzielic\ne.Potegowac\n\nf.Wrocic do menu." << endl;
cin >> signW;
cin.ignore(1024,'\n');
if(signW=='a'||signW=='A')
plusA();
else if(signW=='b'||signW=='B')
minusA();
else if(signW=='c'||signW=='C')
starA();
else if(signW=='d'||signW=='D')
slashA();
else if(signW=='e'||signW=='E')
powerA();
else if(signW=='f'||signW=='F')
main();
else if(signW!='a' ||signW!='A' || signW!='b' ||signW!='B' || signW!='c' || signW!='C' || signW!='d' || signW!='D' || signW!='e' || signW!='E' || signW!='f' || signW!='F'){
calculator();
}

cout << "\nAby wrocic do menu wybierz 'B', aby zakonczyc program wybierz 'C'." <<endl;
cin >> signC;
cin.ignore(1024,'\n');
if(signC=='b'||signC=='B')
main();
else if(signC=='c'||signC=='C')
system("pause");
else if(signC!='b'||signC!='B'||signC!='c'||signC!='C')
calculator();
}
void plusA(){
char signM,sign;
float a,b,c;

system("cls");
cout << "########################" << endl;
cout << "|     Kalkulator     |" << endl;
cout << "########################" << endl;

cout << "Witam w programie dodawanie. Wpisz liczby ktore chcesz do siebie dodac: " <<endl;
cout << "Liczba pierwsza: ";
cin >> a;

cout << "Liczba druga: ";
cin >> b;
c=a+b;
cout << "Wynik dodawania: " << c <<endl;
again:
cout << "\nCzy chcesz do " << c << " dodac kolejna liczbe? Jesli tak wybierz 'T', a nastepnie wpisz kolejna liczbe ktora chcesz dodac,a jesli nie chcesz dodawac wybierz 'N'." << endl;

cin >> sign;
cin.ignore(1024,'\n');
if(sign=='t'||sign=='T'){
a=c;
c=0;
b=0;
cin >> b;
c=a+b;
system("cls");
cout << "########################" << endl;
cout << "|     Kalkulator     |" << endl;
cout << "########################" << endl;
cout << "Wynik dodawania liczby " << a << " z liczba " << b << " wynosi: " << c <<endl;
goto again;
}
else if (sign!='n'||sign!='N')
calculator();

cout << "\nWpisz 'C', aby dodawac dalej 'D', aby wrocic do menu, 'K', aby przejsc do kalkulatora lub 'Z', aby zakonczyc program." << endl;
cin >> signM;
cin.ignore(1024,'\n');

if(signM=='c'||signM=='C')
plusA();
else if(signM=='d'||signM=='D')
main();
else if(signM=='k'||signM=='K')
calculator();
else if(signM=='z'||signM=='Z')
system("pause");
else if(signM!='c'||signM!='C'||signM!='d'||signM!='D'||signM!='m'||signM!='M'||signM!='d'||signM!='D'){
plusA();
}
}
void minusA(){
char signM,sign;
float a,b,c;

system("cls");
cout << "########################" << endl;
cout << "|     Kalkulator     |" << endl;
cout << "########################" << endl;

cout << "Witam Cie serdecznie w programie odejmowanie. Wpisz liczby, ktore chcesz od siebie odjac: " <<endl;
cout << "Pierwsza liczba: ";
cin >> a;
cout << "Druga liczba: ";
cin >> b;
c=a-b;
cout << "Wynik odejmowania: " << c <<endl;
again:
cout << "\nCzy chcesz od " << c << " odjac kolejna liczbe? Jesli tak wybierz 'T', a nastepnie wpisz kolejna liczbe ktora chcesz odjac,a jesli nie chcesz odejmowac wybierz 'N'." << endl;

cin >> sign;
cin.ignore(1024,'\n');
if(sign=='t'||sign=='T'){
a=c;
c=0;
b=0;
cin >> b;
c=a-b;
system("cls");
cout << "########################" << endl;
cout << "|     Kalkulator     |" << endl;
cout << "########################" << endl;
cout << "Wynik odejmowania liczby " << a << " z liczba " << b << " wynosi: " << c <<endl;
goto again;
}
else if (sign!='n'||sign!='N')
calculator();

cout << "\nWpisz 'O', aby dodawac dalej, 'M', aby wrocic do menu, 'K', aby prezejsc do kalkulatora lub 'Z', aby zakonczyc program." << endl;
cin >> signM;
cin.ignore(1024,'\n');

if(signM=='o'||signM=='O')
minusA();
else if(signM=='m'||signM=='M')
main();
else if(signM=='k'||signM=='K')
calculator();
else if(signM=='z'||signM=='Z')
system("pause");
else if(signM!='k'||signM!='K'||signM!='z'||signM!='Z'||signM!='m'||signM!='M'||signM!='o'||signM!='O'){
minusA();
}
}
void starA(){
char signM,sign;
float a,b,c;

system("cls");
cout << "########################" << endl;
cout << "|     Kalkulator     |" << endl;
cout << "########################" << endl;

cout << "Witam Cie serdecznie w programie mnozenie. Wpisz liczby, ktore chcesz ze soba pomnozyc: " <<endl;
cout << "Liczba mnozona: ";
cin >> a;
cout << "Liczba mnozaca: ";
cin >> b;
c=a*b;
cout << "Wynik mnozenia: " << c <<endl;
again:
cout << "\nCzy chcesz do " << c << " domnozyc kolejna liczbe? Jesli tak wybierz 'T', a nastepnie wpisz kolejna liczbe ktora chcesz domnozyc,a jesli nie chcesz mnozyc wybierz 'N'." << endl;

cin >> sign;
cin.ignore(1024,'\n');
if(sign=='t'||sign=='T'){
a=c;
c=0;
b=0;
cin >> b;
c=a*b;
system("cls");
cout << "########################" << endl;
cout << "|     Kalkulator     |" << endl;
cout << "########################" << endl;
cout << "Wynik mnozenia liczby " << a << " z liczba " << b << " wynosi: " << c <<endl;
goto again;
}
else if (sign!='n'||sign!='N')
calculator();

cout << "\nWpisz 'X', aby mnozyc dalej, 'M', aby wrocic do menu, 'K', aby prezejsc do kalkulatora lub 'Z', aby zakonczyc program." << endl;
cin >> signM;
cin.ignore(1024,'\n');

if(signM=='x'||signM=='X')
starA();
else if(signM=='m'||signM=='M')
main();
else if(signM=='k'||signM=='K')
calculator();
else if(signM=='z'||signM=='Z')
system("pause");
else if(signM!='k'||signM!='K'||signM!='z'||signM!='Z'||signM!='m'||signM!='M'||signM!='x'||signM!='X'){
starA();
}
}
void slashA(){
char signM,sign;
float a,b,c;

system("cls");
cout << "########################" << endl;
cout << "|     Kalkulator     |" << endl;
cout << "########################" << endl;

cout << "Witam Cie serdecznie w programie dzielenie. Wpisz liczby, ktore chcesz przez siebie podzielic: " <<endl;
cout << "Liczba dzielona: ";
cin >> a;
cout << "Liczba dzielaca: ";
cin >> b;
c=a/b;
cout << "Wynik dzielenia: " << c <<endl;
again:
cout << "\nCzy chcesz " << c << " podzielic przez kolejna liczbe? Jesli tak wybierz 'T', a nastepnie wpisz kolejna liczbe ktora przez, ktora chcesz dzielic, a jesli nie chcesz dzielic wybierz 'N'." << endl;

cin >> sign;
cin.ignore(1024,'\n');
if(sign=='t'||sign=='T'){
a=c;
c=0;
b=0;
cin >> b;
c=a/b;
system("cls");
cout << "########################" << endl;
cout << "|     Kalkulator     |" << endl;
cout << "########################" << endl;
cout << "Wynik dzielenia liczby " << a << " z liczba " << b << " wynosi: " << c <<endl;
goto again;
}
else if (sign!='n'||sign!='N')
calculator();

cout << "\nWpisz 'S', aby dzielic dalej, 'M', aby wrocic do menu, 'K', aby prezejsc do kalkulatora lub 'Z', aby zakonczyc program." << endl;
cin >> signM;
cin.ignore(1024,'\n');

if(signM=='s'||signM=='S')
slashA();
else if(signM=='m'||signM=='M')
main();
else if(signM=='k'||signM=='K')
calculator();
else if(signM=='z'||signM=='Z')
system("pause");
else if(signM!='k'||signM!='K'||signM!='z'||signM!='Z'||signM!='m'||signM!='M'||signM!='s'||signM!='S'){
slashA();
}
}
void powerA(){
char signM,sign;
double a,b,c;

system("cls");
cout << "########################" << endl;
cout << "|     Kalkulator     |" << endl;
cout << "########################" << endl;

cout << "Witam Cie serdecznie w programie potegowanie. Wpisz liczby, ktore chcesz potegowac: " <<endl;
cout << "Liczba potegowana: ";
cin >> a;
cout << "Do potegi: ";
cin >> b;
c=pow(a,b);
cout << "Wynik potegowania: " << c <<endl;
again:
cout << "\nCzy chcesz potegowac " << c << " przez kolejna liczbe? Jesli tak wybierz 'T', a nastepnie wpisz potege, do ktorej chcesz podniesc liczbe "<< c <<", a jesli nie chcesz potegowac wybierz 'N'." << endl;

cin >> sign;
cin.ignore(1024,'\n');
if(sign=='t'||sign=='T'){
a=c;
c=0;
b=0;
cin >> b;
c=pow(a,b);
system("cls");
cout << "########################" << endl;
cout << "|     Kalkulator     |" << endl;
cout << "########################" << endl;
cout << "Wynik podniesienia liczby " << a << " do potegi " << b << " wynosi: " << c <<endl;
goto again;
}
else if (sign!='n'||sign!='N')
calculator();

cout << "\nWpisz 'P', aby potegowac dalej, 'M', aby wrocic do menu, 'K', aby prezejsc do kalkulatora lub 'Z', aby zakonczyc program." << endl;
cin >> signM;
cin.ignore(1024,'\n');

if(signM=='s'||signM=='S')
powerA();
else if(signM=='m'||signM=='M')
main();
else if(signM=='k'||signM=='K')
calculator();
else if(signM=='z'||signM=='Z')
system("pause");
else if(signM!='k'||signM!='K'||signM!='z'||signM!='Z'||signM!='m'||signM!='M'||signM!='s'||signM!='S'){
powerA();
}
}



