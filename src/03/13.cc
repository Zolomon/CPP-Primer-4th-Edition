#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	vector<int> v;

	cout << "Enter a lot of numbers: " << endl;

	int n, sum;

	while (cin >> n)
		v.push_back(v);

	for (vector<int>::size_type i = 0; i != v.size(); ++i)
	{
		sum += 	
	}	

	if (v.size() % 2 == 1) {
		cout << "v contains an odd number of elements." << endl;
		cout << "The last one is v["<< (v.size()-1) <<"] == " << v[v.size() - 1] << "." << endl;
	}
		
	

	return 0;
}