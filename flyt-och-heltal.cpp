#include <iostream>
#include <iomanip>
#include <cmath>
#include <chrono>
#include <thread>

using namespace std;
using namespace this_thread;
using namespace chrono;

void xLikamed(){
    double x = 10;
    double y = 20;
    x = y;
    cout << "x equals " << x << " and y equals " << y << endl;
    y = 100;
    cout << "x equals " << x << " and y equals " << y << endl;

}
void xPlusOne(){
    int x = 10;
    int result = ++x;
    cout << "result = " << result << " x = " << x << endl;
    x = 10;
    result = x++;
    cout << "result = " << result << " x = " << x << endl;
}
void provaInlasningOchUtskrift(){
    cout << "Knappa in ett decimaltal:";
    double decimaltal = 0;
    cin >> decimaltal;
    cout << "Du knappade in talet " << decimaltal << endl;
    cout << "Med två decimaler: " << setprecision(2) << decimaltal << endl;
}
void beraknaBokkostnad(){
    cout << "Hur mycket kostar boken?" << endl;
    double bokPris = 0;
    cin >> bokPris;
    cout << "Hur många sidor har boken?" << endl;
    double antalSidor = 0;
    cin >> antalSidor;
    cout << "Hur många procent av boken kommer du läsa?" << endl;
    double procentAttLasa = 0;
    cin >> procentAttLasa;
    cout << "Hur många minuter tar det dig att läsa och förstå en sida?" << endl;
    double minuterPerSida = 0;
    cin >> minuterPerSida;
    cout << "(Tystnad beräkning pågår)" << endl;
    sleep_for(seconds(2));
    double antalTimmar = antalSidor * (procentAttLasa / 100) * (minuterPerSida /60);
    double prisPerTimme = bokPris / antalTimmar;
    cout << "Du kommer ägna boken ca " << setprecision(3) << antalTimmar << " timmar" <<endl;
    cout << "Boken beräknas därför kosta dig " << setprecision(3) << prisPerTimme << " kr/timme" << endl;
}

void testaFlyttal(){
    double nollKommaEtt = 0.1;
    double nollKommaTreA = 0.3;
    double nollKommaTreB = 3*nollKommaEtt;

    cout << endl;
    cout << "Skriver ut 0.1 och 0.3 och 0.3: " << endl;
    cout << nollKommaEtt << endl;
    cout << nollKommaTreA << endl;
    cout << nollKommaTreB << endl;

    cout << setprecision(17);
    cout << endl;
    cout << "Skriver ut 0.1 och 0.3 och 0.3 igen: " << endl;
    cout << nollKommaEtt << endl;
    cout << nollKommaTreA << endl;
    cout << nollKommaTreB << endl;

    double noll = 0;
    double tva = 2;

    cout << endl;
    cout << "Division med noll: " << endl;
    cout << noll/noll << endl;
    cout << tva/noll << endl;
    cout << -tva/noll << endl;

    cout << endl;
    cout << "En liten lek med oändligheten: " << endl;
    double oo = tva/noll;
    cout << tva*oo << endl;
    cout << oo+oo << endl;
    cout << oo-oo << endl;
    cout << -oo-oo << endl;

    cout << endl;
    cout << "Division med oändligheten: " << endl;
    cout << tva/oo << endl;
    cout << -tva/oo << endl;
    cout << oo/oo << endl;
    cout << -oo/oo << endl;

}

void testaHelTal(){
    int biggestInteger = INT_MAX;
    int evenBiggerInteger = biggestInteger + 1;

    cout << endl;
    cout << "Big integers:" << endl;
    cout << "biggestInteger: " << biggestInteger << endl;
    cout << "evenBiggerInteger: " << evenBiggerInteger << endl;

    int noll = 0;
    int tva = 2;
    int fem = 5;

    cout << endl;
    cout << "Några heltalsdivisioner:" << endl;
    cout << fem/tva << endl;
    cout << tva/fem << endl;
    cout << tva/fem + tva/fem + tva/fem << endl;

    cout << endl;
    cout << "Division med noll:" << endl;
    cout << noll/noll << endl;
    cout << tva/noll << endl;
}

void testaLitteraler(){
    cout << endl;
    cout << "testar beräkningar med litteraler" << endl;
    cout << 7/10*500.0 << endl;
    cout << 7/10.0*500 << endl;
    cout << 3/4 + 3/4 + 3/4 + 3/4 << endl;
    cout << 3.0/4 + 3/4 << endl;
}

void skrivUtVaxel(int antalKronor){
    int kronorKvarAttBetala = antalKronor;
    int antal500 = kronorKvarAttBetala/500;
    kronorKvarAttBetala -= antal500*500;
    int antal200 = kronorKvarAttBetala/200;
    kronorKvarAttBetala -= antal200*200;
    int antal100 = kronorKvarAttBetala/100;
    kronorKvarAttBetala -= antal100*100;
    int antal20 = kronorKvarAttBetala/20;
    kronorKvarAttBetala -= antal20*20;
    int antal10 = kronorKvarAttBetala/10;
    kronorKvarAttBetala -= antal10*10;
    int antal5 = kronorKvarAttBetala/5;
    kronorKvarAttBetala -= antal5*5;
    int antal2 = kronorKvarAttBetala/2;
    kronorKvarAttBetala -= antal2*2;

    cout << "500: " << antal500 << endl;
    cout << "200: " << antal200 << endl;
    cout << "100: " << antal100 << endl;
    cout << "20:  " << antal20 << endl;
    cout << "10:  " << antal10 << endl;
    cout << "5:   " << antal5 << endl;
    cout << "2:   " << antal2 << endl;
    cout << "1:   " << kronorKvarAttBetala << endl;
}

void testaModulo(){
    cout << "testar moduloberäkningar" << endl;
    cout << 13 % 10 << endl;
    cout << 57 % 10 << endl;
    cout << 7 % 5 << endl;
    cout << -57 % 10 << endl;
}



void shortcutToFlyt_Heltal(){
    testaModulo();
    skrivUtVaxel(947);
    testaLitteraler();
    testaHelTal();
    testaFlyttal();
    beraknaBokkostnad();
    xPlusOne();
    xLikamed();
    provaInlasningOchUtskrift();

}

