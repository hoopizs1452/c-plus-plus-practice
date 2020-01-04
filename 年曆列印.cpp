#include<iostream>
#include<iomanip>

using namespace std ;

int main()
{
    int M, Y, day1, day2, wday, year;
    int date[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    char* week[7] = {"\x1b[31;1m Sun \x1b[0m", "Mon", "Tue", "Wen", "Thu", "Fri", "\x1b[31;1m Sat \x1b[0m"};

    date[1] = (year%4 == 0 && year%100 != 0 || year%400 == 0 ? 29 : 28);
    cout << "請輸入年份(西元):";
    cin >> year;

    cout << "\x1b[2J";
    cout << setw(42) << "\x1b[34;1m" << year << "\x1b[0m" << endl << endl;

    for(int i = 0 ; i < 12 ; i += 2 ) 
    {
		cout << setw(17) << month[i]   << "月\t" ; 
		cout << setw(34) << month[i+1] << "月" << endl << endl ;
 
		for(int j = 0 ; j < 7 ; ++j ) 
			cout << setw(4) << week[j] << " " ;
		cout << "\t" ;
		for(int j = 0 ; j < 7 ; ++j ) 
			cout << setw(4) << week[j] << " " ;
		cout << endl ;
		
		day1 = day2 = 1 ;
		while( day1 != date[i]+1 || day2 != date[i+1]+1 ) 
        {
			for( ; day1 <= date[i] ; ++day1 ) 
            {
				M = month[i] ;
				if( M >= 3 ) 
                {	//三月換一月 四月換二月 ....
					M -= 2 ;
					Y = year ;
				}
                else
                {
					M = ( M == 1 ? 11 : 12 ) ;	//一月換十一月 二月換十二月
					Y = year - 1 ;
				}

				//計算星期幾的公式	
				wday = ( Y + (Y/4) - (Y/100) + (Y/400) + static_cast<int>(2.6*M-0.2) + day1 ) % 7 ; 
				
				if( day1 == 1 ) 
                {
					for(int j = 0 ; j < wday ; ++j ) 
						cout << setw(5) << " " ;
                }

				if( wday == 0 ) 
                {
					cout << "\x1b[31;1m" << setw(4) << day1 << "\x1b[0m" << " " ;
				}
                else if( wday == 6 ) 
                {
					cout << "\x1b[31;1m" << setw(4) << day1 << "\x1b[0m" << " " ;
					++day1 ;
					break ;
				}
                else
                {
					cout << setw(4) << day1 << " " ;
				}
			}
			cout << setw(5*(6-wday)) << " " ;
			cout << "\t" ;
			for( ; day2 <= date[i+1] ; ++day2 ) 
            {
				M = month[i+1] ;
				if( M >= 3 ) 
				{	 //三月換一月 四月換二月 ....
					M -= 2 ;
					Y = year ;
				}
                else
                {
					M = ( M == 1 ? 11 : 12 ) ;	//一月換十一月 二月換十二月
					Y = year - 1 ;
				}

				//計算星期幾的公式
				wday = ( Y + (Y/4) - (Y/100) + (Y/400) + static_cast<int>(2.6*M-0.2) + day2 ) % 7 ;
				
				if( day2 == 1 ) 
                {
                    for(int j = 0 ; j < wday ; ++j ) 
						cout << setw(5) << " " ;
                }

				if( wday == 0 ) 
                {
					cout << "\x1b[31;1m" << setw(4) << day2 << "\x1b[0m" << " " ;
				}
                else if( wday == 6 ) 
                {
					cout << "\x1b[31;1m" << setw(4) << day2 << "\x1b[0m" << " " ;
					++day2 ;
					break ;
				}
                else
                {
					cout << setw(4) << day2 << " " ;
				}
			}
			cout << endl ;
			if( day1 == date[i]+1 ) 
				cout << setw(35) << " " ; 
		}
		cout << endl ;
	}
	
   
    return 0 ;
}