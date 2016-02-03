
#include <fstream>
#include <iostream>

using namespace std;

fstream fio;

bool make_stl(){

	char cc[80];

	fio << "solid " << "test" << endl;
	fio << scientific << "  facet normal\t" << (float)10 << "\t" << (float)0.05 << "\t" << (float)50 << "\t" << endl;
	fio << "    outer loop" << endl;
	fio << "      vertex\t" << (float)20 << "\t" << (float)80 << "\t" << (float)1.50 << "\t" << endl;
	fio << "      vertex\t" << (float)30 << "\t" << (float)90 << "\t" << (float)15.580 << "\t" << endl;
	fio << "      vertex\t" << (float)40 << "\t" << (float)10 << "\t" << (float)10 << "\t" << endl;
	fio << "    endloop" << endl;
	fio << "  endfacet" << endl;
	fio << "endsolid " << "test" << endl;
	return 1;
}

void main(){
	

	//fio.open("test.txt", ios_base::out | ios_base::app);
	fio.open("test.txt", ios_base::out);
	if (!fio){
		cout << "cant open text" << endl;
	}
	else{
		cout << "open or create text" << endl;
		make_stl();
		fio.close();
	}
}