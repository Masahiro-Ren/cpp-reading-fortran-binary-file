#include <iostream>
#include <fstream>
#include <byteswap.h>

using namespace std;

int main()
{
	ifstream GRD_gz, GRD_gzh;
	GRD_gz.open("./GRD_gz_swp.dat", ios::in|ios::binary);
	GRD_gzh.open("./GRD_gzh_swp.dat", ios::in|ios::binary);
	
	if(!GRD_gz.is_open() || !GRD_gzh.is_open() )
		cerr << "Error in open file \n";
	
	int i1, i2;
	double d1, d2;

	//GRD_gz.read(reinterpret_cast<char*>(&i1), sizeof(int));
	//GRD_gzh.read(reinterpret_cast<char*>(&i2), sizeof(int));
	//
	//int i1s = bswap_32(i1);
	//int i2s = bswap_32(i2);
	//
	//cout << i1s << endl;
	//cout << i2s << endl;

	//GRD_gz.read(reinterpret_cast<char*>(&d1), sizeof(double));
	//GRD_gzh.read(reinterpret_cast<char*>(&d2), sizeof(double));
	//

	//double d1s = bswap_64(d1);
	//double d2s = bswap_64(d2);
	//

	//cout << d1s << endl;
	//cout << d2s << endl;
	
	for(int i = 0; i < 96; i++)
	{
		GRD_gz.read(reinterpret_cast<char*>(&d1), sizeof(double));

		cout << d1 << endl;
	}

	cout << "gzh::: \n";
	for(int i = 0; i < 96; i++)
	{
		GRD_gzh.read(reinterpret_cast<char*>(&d2), sizeof(double));

		cout << d2 << endl;
	}

	return 0;
}
