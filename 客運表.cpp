#include<iostream>
#include<iomanip>

using namespace std ;

int main() {
	const int cityTop = 7, cityLeft = 7;
    char cityName[cityTop][cityLeft] = {"臺北", "桃園", "新竹", "臺中", "嘉義", "臺南", "高雄"};
    int cityDis[cityTop] = {25 , 49 , 95 , 178 , 264 , 327 , 373};
    int away, coast;
    cout << setw(6) << "里程表  ";

    for(int i=0; i<cityTop; i++)
        cout << setw(5) << cityName[i] << "    ";
    cout << endl;
    for(int i=0; i<cityTop; i++)
    {
        cout << setw(5) << cityName[i] << "  ";
        for(int j=0; j<cityTop; j++)
        {
            away = cityDis[j] - cityDis[i];
            cout << setw(5) << ((away >= 0) ? away : -away) << "  ";
        }
        cout << endl;
    }

    cout << setw(6) << "票價表  ";

    for(int i=0; i<cityTop; i++)
        cout << setw(5) << cityName[i] << "    ";
    cout << endl;
    for(int i=0; i<cityTop; i++)
    {
        cout << setw(5) << cityName[i] << "  ";
        for(int j=0; j<cityTop; j++)
        {
            away = cityDis[j] - cityDis[i];
            away = ((away >= 0) ? away : -away);

            if(away<=50)
                coast = away * 2.5;
            else if(away>=51 && away<=200)
                coast = away * 2.2;
            else
                coast = away * 2;

            cout << setw(5) << coast << "  ";
        }
        cout << endl;
    }
}