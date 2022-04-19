#include <iostream>
#include <algorithm>
#define MAX 100
using namespace std;

char board[MAX][MAX];
void painting(int x, int y, int n)
{
	if (board[x][y] == '1' || board[x][y] == '2' || x < 0 || x >= n || y < 0 || y >= n)
		return;
	board[x][y] = '2';
	painting(x - 1, y, n);
	painting(x + 1, y, n);
	painting(x, y - 1, n);
	painting(x, y + 1, n);
}
int main()
{
	int x, y, n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> board[i];
	cin >> x >> y;
	painting(x, y, n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << board[i][j];
		cout << endl;
	}

	return 0;
}