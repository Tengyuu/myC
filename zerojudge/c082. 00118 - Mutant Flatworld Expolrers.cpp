#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

	int M, N;
	cin >> M >> N;
	int X, Y;
	char C;
	vector<pair<int, int>> vec;
	while (cin >> X >> Y >> C) {
		bool lost = false;

		string command;
		cin >> command;
		for (char c : command) {
			int tempx = X;
			int tempy = Y;
			switch (C) {
			case 'W':
				if (c == 'R') C = 'N';
				else if (c == 'L') C = 'S';
				else if (c == 'F') X--;
				break;
			case 'E':
				if (c == 'R') C = 'S';
				else if (c == 'L') C = 'N';
				else if (c == 'F') X++;
				break;
			case 'S':
				if (c == 'R') C = 'W';
				else if (c == 'L') C = 'E';
				else if (c == 'F') Y--;
				break;
			case 'N':
				if (c == 'R') C = 'E';
				else if (c == 'L') C = 'W';
				else if (c == 'F') Y++;
				break;
			}



			if (X > M || Y > N || X < 0 || Y < 0) {
				bool prevlost = false;
				for (auto i : vec) {
					if (i.first == tempx && i.second == tempy) {
						prevlost = true;
						break;
					}
				}
				if (!prevlost) {
					lost = true;
					vec.push_back({ tempx,tempy });
					X = tempx;
					Y = tempy;
					break;
				}
				else {
					X = tempx;
					Y = tempy;
				}

			}


		}

		if (!lost) {
			cout << X << " " << Y << " " << C << "\n";
		}
		else {
			cout << X << " " << Y << " " << C << " LOST\n";
		}

	}


}
