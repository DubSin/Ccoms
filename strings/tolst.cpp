#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
	string line, string;
	ifstream in("TES.txt");
	ofstream out;
	out.open("TES2D.txt");
	if (in.is_open()){
		while (getline(in, line))
		{
			for (int i=0; i<line.length();i++)
				{
				int word = line[i] % 3;
					switch(word)
					{
						case 0:
							out << "A";
						case 1:
							out << "B";
						case 2:
							out << "D";
					}
				}	
		}
	}
	in.close();
	cout << "END" << endl;
	return 0;
}

