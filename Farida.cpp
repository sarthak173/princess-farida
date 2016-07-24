#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxN = 1e4 + 10;
int C[maxN];
ll A[maxN];
int n;
int main()
{
	int t, caseN = 1;
	cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i = 1; i <= n; i++)
			cin >> C[i];
		A[0] = 0;
		A[1] = C[1];
		for(int i = 2; i <= n; i++)
			A[i] = max(A[i - 1], A[i - 2] + C[i]);
		cout << "Case " << caseN++ << ": " << A[n] << "\n";
	}
	return 0;
}
