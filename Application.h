#include "Core/Library/Library.h"
#include "Core/BuildMode/BuildMode.h"
#include "Data/Data_Sources/Remote/Remote_api.h"
#include "Presentation/Screen/Home.h"


//����� build_mode ������� ����� �����
const string build_mode = "DEV";


//������� Application ������ ������� ����� ��������
void Application()
{
	system("chcp 1251");
	//����� request_url ������ ������ ������
	string request_url;

	//�������� �� ����� �����
	if (build_mode == "DEV")
	{
		request_url = BuildAsDev();
		cout << "������ ����������" << endl;
		cout << "������� ������" << endl;
		cout << endl;
		cout << "������� IT Step Academy" << endl;
		cout << "г���� �����: " << endl;
		cout << "<Trainee" << endl;
		cout << endl;
		cout << "���� �������������:" << endl;
		cout << "C++, Python" << endl;
		cout << endl;
	}
	else
	{
		request_url = BuildAsProd();
		cout << "������ ��������" << endl;
		cout << "������� ������" << endl;
		cout << "������� IT Step Academy" << endl;
		cout << endl;
	}
	//����� response ������ ������� ������� �������� ������ �����
	string response = FetchApiData(request_url);
	Home(response);
}
