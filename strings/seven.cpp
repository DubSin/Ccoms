#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
	string line, string;
    int length=0, max_length=0, interval=0;
	ifstream in("TES2D.txt");
	if (in.is_open()){
		while (getline(in, line))
		{
			for (int i=0; i<line.length();i++)
            {
                if((line.substr(i, 2) == "AD" || line.substr(i, 2) == "AB") && interval<=0){

                    length += 1;
                    interval = 1;
                }
                if(interval < 0 || i == line.length()-1){
                    if(length > max_length)
                    {
                        max_length = length;
                    }
                    length = 0;
                }
                interval -= 1;
            }		
		}
	}
	in.close();
	cout << max_length << endl;
    system("pause");
	return 0;
}