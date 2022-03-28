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

    /*동적 할당을 해준다.
    for문으로 돌려볼까 했는데 답이 각각 달라서 그건 안됨.*/
    qq.push_back(new question(question_answer[0], "a"));
    qq.push_back(new question(question_answer[1], "c"));
    qq.push_back(new question(question_answer[2], "b"));

    int score = 0;
    string answer = "";

    /*qq를 qqq로 받아서 문제를 출력하고 답을 받아서 비교해서 score을 올려준다.*/
    for (auto qqq : qq) {
        cout << qqq->prompt;
        cin >> answer;
        cout << endl;
        if (answer == qqq->answer) {
            score++;
        }
    }

    /*아까 동절할당해줬던 qq를 delete해준다.*/
    for (auto i = qq.begin(); i != qq.end(); i++) {
        delete* i;
    }

    /*총 점수 출력.*/
    cout << "Your score is " << score << endl;
}
