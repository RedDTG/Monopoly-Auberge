#pragma once
#include <vector>

class plateau
{
private:
	vector<int> plateau;


public:

	int recuperer(int x, int y) {
		return plateau[x];
	}
};


