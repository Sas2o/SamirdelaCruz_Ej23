#include <fstream>
#include <iostream>
using namespace std;


void leerDatos();
void leerArchivo(string nombreArchivo, double* &z);
double MDMC();
double suma_x(int n);
double suma_y(int n);

double* x = NULL;
double* y = NULL;
int n_xy;

int main() 
{
    leerDatos();
    
    
    return 0;
}
void leerDatos(){
    leerArchivo("valores_x.txt", x);
    cout << "La suma de los valores en x es: " << suma_x(n_xy) << endl; 
    leerArchivo("valores_y.txt", y);
    cout << "La suma de los valores en y es: " << suma_y(n_xy) << endl; 
    cout << "termino la lectura de los archivos" << endl; 
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
    n_xy=n;
    infile.close();
    infile.open(nombreArchivo);
    z=new double[n];
    for (int i=0; i<n;i++){
        getline(infile,line);
        z[i]=atof(line.c_str());
    }
    infile.close();

}
double suma_x(int n){
    double suma=0;
    for (int i=0; i<n;i++){
        suma+=x[i];
    }
    return suma;
}
double suma_y(int n){
    double suma=0;
    for (int i=0; i<n;i++){
        suma+=y[i];
    }
    return suma;
}
