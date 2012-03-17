#include<algorithm>
#include<cstdlib>
#include<iostream>
#include<iterator>
#include<vector>

using namespace std;

struct SimpleRandGenerator {
	int operator()() const {
		return (rand() % 99) + 1;
	}
};

int main()
{
	vector<int> v(100);
	generate(v.begin(), v.end(), SimpleRandGenerator());
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	return 0;
}

