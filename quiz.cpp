#include <iostream>

using namespace std;

void quizEtt(int x, int y){
    cout << x << " " << y << endl;


}

void shortcutToQuiz(){
    quizEtt(3, 4);
    int b = 1;
    int a = 2;
    quizEtt(a,b);

    int x = 5;
    int z = 10;
    quizEtt(z,x);
}
