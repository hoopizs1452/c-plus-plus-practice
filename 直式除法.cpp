#include <iostream>
#include <iomanip>

using namespace std ;

int main() {
    
    // a : 被除數, b : 除數, c : 商數, d : 餘數
    int a , b , c , d ;    //  c = a / b 

    cout << "> 輸入被除數與除數 : " ;
    cin >> a >> b ;

    c = a / b ;
    
    int  tmp ;
    int  i , j ;
    
    // na, nb, nc : 分別為 a, b, c 的位數
    int  na , nb , nc , nd ;

    // 計算 na : a 的位數
    tmp = a ;
    for ( na = 0 ; tmp != 0 ; ++na ) tmp /= 10 ;

    // 計算 nb : b 的位數
    tmp = b  ;
    for ( nb = 0 ; tmp != 0 ; ++nb ) tmp /= 10 ;
    
    // 計算 nc : c 的位數
    tmp = c ;
    for ( nc = 0 ; tmp != 0 ; ++nc ) tmp /= 10 ;

    int f , g , h , e ;

    // 列印前三行
    cout << setw(2+nb+3+na) << c << "\n"
         << setw(2+nb+2) << ' ' ;
    for ( j = 0 ; j < na+1 ; ++j ) cout << '-' ;
    cout << "\n" << setw(2+nb) << b << " ) " << a  ;

    g = a ;
    for ( i = 0 ; i < nc ; ++i ) {
        
        // d 為中間過程的商數
        d = c ;
        for ( j = 1 ; j < nc-i ; ++j ) d /= 10 ;
        d %= 10 ;

        if ( d != 0 ) {

            cout << endl ;

            // f 為中間過程的商數與除數的乘積
            f = 1 ;
            for ( j = 1 ; j < nc-i ; ++j ) f *= 10 ;
            f *= d * b ;
        
            // g 為中間過程的餘數, 將 g 右邊的 0 去除就是 h
            g = g - f ;
            h = g ;
            for ( j = 1 ; j < nc-i-1 ; ++j ) h /= 10 ;

            // nd 為中間過程的商數與除數的乘積位數
            tmp = b * d ;
            for ( nd = 0 ; tmp != 0 ; ++nd ) tmp /= 10 ;

            // 列印 b d 乘積
            cout << setw(2+nb+3+(na-nc+i+1)) << b * d << endl ;
            cout << setw(2+nb+3+i-1) << ' ' ;
            for ( j = 0 ; j < na-nc+2 ; ++j ) cout << '-' ;
            cout << "\n" ;

            // 列印中間過程的餘數
            if ( i < nc - 1 ) 
                cout << setw(2+nb+3+(na-nc+i+2)) << h ;
            else {
                cout << setw(2+nb+3+(na-nc+i+1)) << h ;
                if ( h != a%b ) cout << "> not correct\n" ;
            }

        } else {
            e = a ;
            for ( j = 1 ; j < (nc-(i+1)) ; ++j ) e /= 10 ;
            e %= 10 ;
            if ( i < nc-1 ) cout << e ;
        }


    }
    cout << endl ;
    return 0 ;
    
}
