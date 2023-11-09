#include "../../../Core/Library/Library.h"


/*
Ця функція використовується для побудови URL для запиту до API.
Приймає на вхід параметри, які визначаються в залежності від режиму збірки.
*/
string FetchApiData(string url)
{
	size_t pos = url.find("my_dev_key");
	if (pos != string::npos)
	{
		return "data from dev api";
	}
	else
	{
		return "data from prod api";
	}
}
