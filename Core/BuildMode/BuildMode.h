#include "../Constants/Constants.h"


/*
ֳ ������� ������ ����������������� ��� �������� URL-������ ������ �� API.
���� ������ ��������������� ��������� ����� build_mode, ��� ���� ���������,
���� ���� API ���� �����������������. �� ��������� ��������������� ���� � ��� ��
��� ��� �������� �� ����������.
*/
string BuildAsDev()
{
	SetConsoleTitle(L"Application Dev");
	string request_url = api_url + api_key_pattern + GetDevKey();
	return request_url;
}

string BuildAsProd()
{
	SetConsoleTitle(L"Application Prod");
	string request_url = api_url + api_key_pattern + GetProdKey();
	return request_url;
}