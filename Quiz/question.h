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

	/*������ �޴� �Լ�.
	new_answer�� ������ �޾Ƽ� answer�� �־��ش�.*/
	void have_answer() {
		string new_answer = "";
		cout << "What is an answer?" << endl;
		cin >> new_answer;
		answer = new_answer;
	}


};