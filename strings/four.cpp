#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
	string line, string;
    int max_length=0, length=0;
	ifstream in("TES2D.txt");
	if (in.is_open()){
		while (getline(in, line))
		{
			for (int i=0; i<line.length();i++)
            {
                length += 1;
                if (line[i] == 'D'){
                    if(length > max_length)
                    {
                        max_length = length;
                    }
                    length = 0;
                }
            }		
		}
	}
	in.close();
	cout << max_length << endl;
    system("pause");
	return 0;
}
