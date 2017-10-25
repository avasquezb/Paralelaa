#include <iostream>
#include <fstream>
#include <vector>
#include <sys/time.h>
#include <cstdlib>
#include <sstream>
#include <string>
#include <cmath>

#include <mpi.h>

using namespace std;

int promedio_varianza(vector<int> Global)
{
	int suma = 0;
	for (int i=0;i<Global.size; i++)
	{
		suma = suma + Global[i];
	}
	int prom = suma/Global.size;
	suma = 0;
	for (int y=0;y<Global.size;i++)
	{
		suma = suma + pow((Global[y]-prom),(Global[y]-prom));
	}
	int varianza = suma/2;
	return prom;
}

int main(int argc, char * argv[])
{
	int rank;
	int size;
	int largo;
	std::vector<long> Global;
	vector<int> *Local;



	MPI_Init(&argc, &argv);//iniciamos el entorno MPI
    MPI_Comm_rank(MPI_COMM_WORLD,&rank);//obtenemos el identificador del proceso
    MPI_Comm_size(MPI_COMM_WORLD,&size);//obtenemos el numero de procesos

    

}