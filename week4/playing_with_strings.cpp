#include <simplecpp>
#include <string>

char to_lower(char ch);
bool is_alpha(char ch);
bool is_uppercase(char ch);
bool is_vowel(char ch);
int get_weight(string str, int len);

main_program {
	string str1, str2;
	int len1, len2;

	cin >> len1 >> len2;
	cin >> str1;
	cin >> str2;

	int weight1 = get_weight(str1, len1);
	int weight2 = get_weight(str2, len2);

	int diff = (weight1 - weight2 >= 0) ? 
		weight1 - weight2 :	weight2 - weight1;

	cout << diff << " ";
	if(diff < 10)
		cout << "Close";
	else if(diff < 50)
		cout << "Moderate";
	else
		cout << "Far";
	cout << endl;
}

int get_weight(string str, int len) {
	int weight = 0;

	for(int i = 0; i < len; i++) {
	char ch = str[i];
		if(is_alpha(ch)) {
			if(is_uppercase(ch))
				weight -= 1;
			else
				weight += 2;
			if(is_vowel(ch))
				weight += 3;
			else
				if(is_uppercase(ch))
					weight += int(ch) - int('A') + 1;
				else
					weight += int(ch) - int('a') + 1;
		}
		else
			weight += int(ch) % 10;
	}

	return weight;
}

bool is_alpha(char ch) {
	bool alpha = (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
	return alpha;
}

bool is_uppercase(char ch) {
	return ch >= 'A' && ch <= 'Z';
}

bool is_vowel(char ch) {
	ch = to_lower(ch);
	return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

char to_lower(char ch) {
	return (is_uppercase(ch) ? ch - 'A' + 'a' : ch);
}
