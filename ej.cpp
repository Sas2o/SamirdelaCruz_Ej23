#include <fstream>
#include <iostream>
using namespace std;


void leerDatos();
void leerArchivo(string nombreArchivo, double* &z);
double MDMC();
double suma_x();

double* x = NULL;
double* y = NULL;

int main() 
{
    leerDatos();
    cout << suma_x() << endl; 
    return 0;
}
void leerDatos(){
    leerArchivo("valores_x.txt", x);
    leerArchivo("valores_y.txt", y);
}
void leerArchivo(string nombreArchivo, double* &z){
    ifstream infile; 
    string line;
    int n = 0;

    infile.open(nombreArchivo);
  
    cout << "Leyendo: " << nombreArchivo << endl; 
    while(infile){
        n+=1;
        getline(infile, line);
    }
    
    infile.close();
    infile.open(nombreArchivo);
    z=new double[n];
    for (int i=0; i<n;i++){
        getline(infile,line);
        z[i]=atof(line.c_str());
    }
    infile.close();

}
double suma_x(){
    double suma=0;
    for (int i=0; i<sizeof(x);i++){
        suma+=x[i];
    }
    return suma;
}

