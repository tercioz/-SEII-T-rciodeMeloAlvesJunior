#include <iostream>
#include <fstream>

using namespace std;

int main (int argc, char** argv) {
  if (argc!=3){
      cout<<"insira argumentos"<<endl;
      return 1;
  }

  ifstream input (argv[1], ifstream::binary);
  ofstream output(argv[2], ofstream::binary);
  if (input) {

    input.seekg (0, input.end);
    int length = input.tellg();
    input.seekg (0, input.beg);

    char * buffer = new char [length];

    cout << "Reading " << length << " bytes... " << endl;
    input.read (buffer,length);

    if (input){
        output.write(buffer,length);
        cout << "sucesso" << endl;
    }else{
        cout << "erro"<< endl;
    }
    input.close();

    delete[] buffer;
  }
  return 0;
}
