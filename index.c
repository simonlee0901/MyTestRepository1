#include<stdin.h>
#include<fstream>

using namespace std;

int _myList[1000000];
int _bitNum;
int _num = 0;

void ParseIn(){
	char tempCh;
	int i = 0;
	ifstream inFile("arrayInt.in");
	
	while(inFile >> tempCh){
		_myList[i] = tempCh - '0';
		i++;
	}
	_bitNum = i;
	
	inFile.close();
}

void Core(){
	for(int i = 0;i < _bitNum;i++){
		_num += _myList[i];
	}
}

void WriteOut(){
	cout << _bitNum << "," << _num << endl;
}

int main(){
	ParseIn();
	Core();
	WriteOut();
	
	return 0;
}
