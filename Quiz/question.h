#pragma once
#include<string>

using namespace std;

class question {

public:
	string prompt;
	string answer;

	question() {}
	~question() {}

	question(string pro)
		:prompt(pro) {
	}

	/*정답을 받는 함수.
	new_answer로 정답을 받아서 answer에 넣어준다.*/
	void have_answer() {
		string new_answer = "";
		cout << "What is an answer?" << endl;
		cin >> new_answer;
		answer = new_answer;
	}


};