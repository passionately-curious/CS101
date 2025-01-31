#include <simplecpp>

main_program {
	int n, count = 0;
	cin >> n;

	if(n % 2 == 0)
		count++;
	else
		for(int i = 2; i * i < n; i++)
			if(n % i == 0) {
				count++;
				break;
			}
	
	cout << (count == 0 ? "sus" : "not sus") << endl;
}
