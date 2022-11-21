#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
	string line, string;
    int length=0;
	ifstream in("TES2C.txt");
	if (in.is_open()){
		while (getline(in, line))
		{
			for (int i=0; i<line.length();i++)
            {
                if(line.substr(i, 3) == "BCA"){
                    length += 1;
                }
            }		
		}
	}
	in.close();
	cout << length << endl;
    system("pause");
	return 0;
}