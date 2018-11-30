#include"Parafun.h"
#include<string>
#include<iostream>
#include<fstream>
#include<io.h>
using namespace std;

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		Parafun parafun_m("bear_open.obj");
		parafun_m.run_cm();

		cerr << "Syntax: " << argv[0] << " <input mesh>" << endl;
		return -1;
	}
	const string input_mesh = argv[1];

	Parafun parafun_m(input_mesh);

	cout << input_mesh << " parameterization begin ..." << endl;
	parafun_m.run_bpe();
	cout << input_mesh << " parameterization finish !" << endl;

	system("pause");
	return 0;
}
