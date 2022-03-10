#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <string>
#include <algorithm>
#define pr pair<int,int>
#define y first
#define x second
using namespace std;

int arr[1010][1010] = {0, };
bool visit[1010][1010] = { false, };

pr MV[8] = {
	{0,-1},{1,-1},{1, 0},{1,1},
	{0,1},{-1,1},{-1,0},{-1,-1}
};

bool isEnter(pr _pos, int _N) {
	if ((0 <= _pos.x && _pos.x < _N) && (0 <= _pos.y && _pos.y < _N)) {
		return arr[_pos.y][_pos.x] == 0;
	}
	return false;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N;  cin >> N;
	for (int i = 0; i < N; i++)
		for (int j= 0; j< N; j++) {
			cin >> arr[i][j];
		}
	//stack은 DFS이다
	stack<pr> s;
	pr ent = { 0,0 }; pr dest = { N - 1,N - 1 };

	cin >> ent.x >> ent.y >> dest.x >> dest.y;

	s.push(ent); visit[ent.y][ent.x] = true;
	while (!s.empty()) {
		pr cur = s.top(); s.pop();
		int directionNum = 8;
		while (directionNum--) {
			pr nxt = { cur.y + MV[directionNum].y, cur.x + MV[directionNum].x };
			if (isEnter(nxt, N) && visit[nxt.y][nxt.x] != true) {
				//아직 방문 안했다면
				s.push(nxt); visit[nxt.y][nxt.x] = true;
			}
		}
	}
	if (visit[dest.y][dest.x] == true) {cout << 1 << '\n';}
	else {cout << -1 << '\n';}
	return 0;
}
