#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <fstream>
#include <vector>
template<typename T>
int busqueda_binaria(const std::vector<T>& v,const int& id)
{
	int left = 0;
	int right = v.size() - 1;
	int mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (v[mid].id == id)
		{
			return mid;
		}else if (v[mid].id < id)
		{
			left = mid + 1;
		}else 
		{
			right = mid - 1;
		}
	}
	return -1;
}



#endif
