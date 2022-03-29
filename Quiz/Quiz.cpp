#include <iostream>
#include <string>
#include <vector>
#include"question.h"

using namespace std;

int main()
{
    vector<string> question_answer =
    { "What color are apples?\n(a) Red/Green\n(b) Purple|n\n(c) Orange\n\n",
    "What color are Bananas?\n(a) Teal\n(b) Megenta\n(c) Yellow\n\n",
    "What color are strawberries?\n(a) Yellow\n(b) Red\n(c) Blue\n\n" };

    /*클래스를 자료형으로 해서 벡터를 넣는 방법을 알아냈다!
    http://www.soen.kr/lecture/ccpp/cpp4/40-1-4.htm */
    vector<question*> qq;
    int score = 0;
    string answer = "";
    int ready = 0;

    /*answer을 입력하므로 for문으로 push_back할 수 있다.*/
    for (auto qqq : question_answer) {
        qq.push_back(new question(qqq));
    }

    /*정답을 받는 for문*/
    for (auto qqq : qq) {
        cout << qqq->prompt;
        qqq->have_answer();
        cout << endl;
    }

    cout << "Are you ready?" << endl;
    cout << "Press 1 if you are ready" << endl;
    cin >> ready;
    cout << endl;

    if (ready == 1) {
        /*문제를 푸는 for문*/
        for (auto qqq : qq) {
            cout << qqq->prompt;
            cin >> answer;
            cout << endl;
            if (answer == qqq->answer) {
                score++;
            }
        }
    }
    else {
        cout << "No?" << endl;
    }

    /*아까 동절할당해줬던 qq를 delete해준다.*/
    for (auto i = qq.begin(); i != qq.end(); i++) {
        delete* i;
    }

    /*총 점수 출력.*/
    cout << "Your score is " << score << endl;

}