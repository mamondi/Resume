#include "../../../Core/Library/Library.h"


/*
�� ������� ��������������� ��� �������� URL ��� ������ �� API.
������ �� ���� ���������, �� ������������ � ��������� �� ������ �����.
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
