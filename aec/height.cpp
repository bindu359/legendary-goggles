#include <iostream>
using namespace std ;

int main() {
    int t ;
    cout << "Enter the number of test cases : " ;
    cin >> t ;
    cout << "--------------------------------------------------------"<<endl;
    while (t--) 
    {
        int n , k ;
        cout << "Enter the number of people between A and B : " ;
        cin >> n ;
        cout << "Enter the height of A and B : " ;
        cin >> k ;
        int max_height = 0 ;
        int count = 0 ;
        cout << "Enter the heights of people between A and B : ";
        for (int i = 0 ; i < n   ; i++) 
        {
            int h ;
            cin >> h ;
            if (h > k)
            {
                count++ ;
            }
        }
        cout << "Minimum number of people to be shot : "<<count << endl ;
        cout << "--------------------------------------------------------"<<endl;
    }
    return 0 ;
}
