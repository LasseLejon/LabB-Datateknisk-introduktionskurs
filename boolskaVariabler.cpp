#include <iostream>
#include <thread>
#include <chrono>
#include <stdbool.h>


using namespace std;
using namespace this_thread;
using namespace chrono;


bool t1(){ cout << "t1 " ; return true; }
bool t2(){ cout << "t2 " ; return true; }
bool f1(){ cout << "f1 " ; return false; }
bool f2(){ cout << "f2 " ; return false; }

void testaBoolUttryck(){
    cout << "Testar boolska uttryck" << endl;
    bool b;
    b = t1() && (t2() || f1());
    cout << "resultat " << b << endl;
    b = t1() || t2() || f1();
    cout << "resultat " << b << endl;
    b = f1() || (t2() && (f1() || f2()));
    cout << "resultat " << b << endl;
}

void testOmMultipel(){
    int a = 1;
    int b = 6;
    bool isMultipel = (b != 0) && (a % b == 0);
    cout << "resultat " << isMultipel << endl;
}

bool almostSame(double a, double b){
    double epsilon = 0.001;
    double diff = a-b;
    return (diff < epsilon) && (diff >(-epsilon));
}

void provaIfSats(){
    double a = 0.3;
    double b = 0.1+0.1+0.1;
    if(almostSame(a,b)){
        cout << "a och b har ungefär samma värden." << endl;
        if(a==b)
            cout << "De har faktiskt exakt samma värden!" << endl;
        else
            cout << "Men bara ungefär" << endl;
    }
    else cout << "a och b är inte alls särskilt lika" << endl;
}

void harDuKoptFrukt(int antalFrukter){
    if(antalFrukter)
        cout << "Jag ser att du har köpt frukt" << endl;
}

void boughtDiffrentTypesOfFruit(){
    int xApples = 4;
    int xMelons = 1;
    if(xApples && xMelons)
        cout << "Jag ser att du har köpt olika sorter1" << endl;
    if(xApples & xMelons)
        cout << "Jag ser att du har köpt olika sorter2" << endl;
    xApples = 5;
    if (xApples & xMelons)
        cout << "jag ser att du har köpt olika sorter3" << endl;

}

void skrivFel(){
    double summa = 125.0;
    int antal = 10;
    if (antal == 0)
        cout << "medelvärdet kan ej beräknas" << endl;
    else {
        double medelvarde = summa/antal;
        cout << "medelvardet är " << medelvarde << endl;
    }


}

void shortcutToBoolskaVariabler(){
    provaIfSats();
    skrivFel();
    boughtDiffrentTypesOfFruit();
    harDuKoptFrukt(10);

}
