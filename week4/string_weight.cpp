#include <simplecpp>
#include <string>

int get_weight(string str, int len);
bool is_vowel(char ch);

main_program {
	string str1, str2;
	int len1, len2;

	cin >> len1 >> len2;
	cin >> str1;
	cin >> str2;
	
	int weight1 = get_weight(str1, len1);
	int weight2 = get_weight(str2, len2);
	
	cout << weight1 << " " << weight2 << " ";
	if(weight1 > weight2)
		cout << 1;
	else if(weight2 > weight1)
		cout << 2;
	else
		cout << 0;
	cout << endl;
}

int get_weight(string str,int len) {
	int weight = 0, vowel_const, temp;
	temp = vowel_const = is_vowel(str[0]) ? 3 : 2;

	for(int i = 1; i < len; i++) {
		if(!(is_vowel(str[i - 1]) ^ is_vowel(str[i]))){
			temp *= vowel_const;
			continue;
		}
		else {
			weight += temp;
			vowel_const = (vowel_const == 2) ? 3 : 2;
			temp = vowel_const;
		}
	}
	weight += temp;

	return weight;
}

bool is_vowel(char ch) {
	return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}
