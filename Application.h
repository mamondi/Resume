#include "Core/Library/Library.h"
#include "Core/BuildMode/BuildMode.h"
#include "Data/Data_Sources/Remote/Remote_api.h"
#include "Presentation/Screen/Home.h"


//Змінна build_mode визначає режим збірки
const string build_mode = "DEV";


//Функція Application виконує основну логіку програми
void Application()
{
	system("chcp 1251");
	//Змінна request_url містить адресу запиту
	string request_url;

	//Перевірка на режим збірки
	if (build_mode == "DEV")
	{
		request_url = BuildAsDev();
		cout << "Резюме розробника" << endl;
		cout << "Притули Дмитра" << endl;
		cout << endl;
		cout << "Студент IT Step Academy" << endl;
		cout << "Рівень знань: " << endl;
		cout << "<Trainee" << endl;
		cout << endl;
		cout << "Мови програмування:" << endl;
		cout << "C++, Python" << endl;
		cout << endl;
	}
	else
	{
		request_url = BuildAsProd();
		cout << "Резюме студента" << endl;
		cout << "Притула Дмитро" << endl;
		cout << "Студент IT Step Academy" << endl;
		cout << endl;
	}
	//Змінна response містить відповідь сервера відповідно режиму збірки
	string response = FetchApiData(request_url);
	Home(response);
}
