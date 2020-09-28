#include <iostream> // innehåller cout
#include <thread> // innehåller sleep_for
#include <chrono> // innehåller milliseconds
#include <cmath> // innehåller vissa mattefunktioner

using namespace std;
using namespace this_thread;
using namespace chrono;

void beraknaHypotenusLangd(double x, double y){

    double xKvadrat = x*x;
    double yKvadrat = y*y;
    double rKvadrat = xKvadrat + yKvadrat;
    double r = sqrt(rKvadrat);
    cout << "x är " << x << " och y är " << y << endl
         << "Summan av kvadraterna blir " << rKvadrat << endl
         << "Vilket gör att hypotenusans längd blir " << r << endl;
}

void raknaTillTre(){
    sleep_for(milliseconds(500));
    cout << "Ett" << endl;
    sleep_for(milliseconds(500));
    cout << "Två" << endl;
    sleep_for(milliseconds(500));
    cout << "Tre" << endl;
    sleep_for(milliseconds(500));
}
void raknaTillFyra(){
    raknaTillTre();
    cout << "Fyra" << endl;
}



void ingangTillVariabler(){
    beraknaHypotenusLangd(3,5);
    raknaTillTre();
    raknaTillFyra();

}

