/*В подземие с M тунела и N кръстовища, всеки тунел свързва някои две кръстовища. Мишият крал решил да постави по един светофар във 
всеки тунел преди всяко кръстовище. Напишете програма SVET, която преброява, колко светофара трябва да се поставят на всяко. 
Кръстовищата са номерирани с числата от 1 до N.*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> vect[16]; //Графът, предстваен с вектор

void addEdge(vector<int> *vect, int u, int v)
{
	vect[u].push_back(v);
	vect[v].push_back(u);
}

void printConnections(vector<int> *vect, int M)
{
	for(int i=1; i<=M; i++)
	{
		cout << vect[i].size() << ' ';
	}
}

int main()
{
	int M, N;
	cin >> M >> N;
	
	for(int i=0; i<N; i++)
	{
		int u, v;
		cin >> u >> v;
		addEdge(vect, u, v);
	}
	
	printConnections(vect, M);
	return 0;
}
