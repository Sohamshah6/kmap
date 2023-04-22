#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int n;
int m[15];
class Min
{
public:    
void head();
void row_1();
void row_2();
void row_3();
void row_4();
char detect(int k);
//int m[15];
};
char detect(int k)
{
    for(int i=0;i<n;i++)
    {
        if(k==m[i])
        {
            return '1';
        }
    }
    return ' ';
}
void head()
{
    cout << " " << string(27,'_') << endl;
    cout << "|" << " AB/CD " << "|" << " 00 " << "|" <<" 01 " << "|" << " 11 " << "|" << " 10 " << "|" << endl;
    cout << "|" << string(7,' ') << "|" << string(4,' ') << "|" << string(4,' ') << "|" << string(4,' ') << "|" << string(4,' ') << "|" << endl;
    cout << " " << string(27,'-') << endl;
} 
void row_1()
{
    cout << "|" << "   00  " << "|" << " " << detect(0) << "  | " << detect(4) << "  | " << detect(12) << "  | " << detect(8) << "  |" << endl;
    cout << " " << string(27,'-') << endl;
}
void row_2()
{
    cout << "|" << "   01  " << "|" << " " << detect(1) << "  | " << detect(5) << "  | " << detect(13) << "  | " << detect(9) << "  |" << endl;
    cout << " " << string(27,'-') << endl;
}void row_3()
{
    cout << "|" << "   11  " << "|" << " " << detect(3) << "  | " << detect(7) << "  | " << detect(15) << "  | " << detect(11) << "  |" << endl;
    cout << " " << string(27,'-') << endl;
}
void row_4()
{
    cout << "|" << "   10  " << "|" << " " << detect(2) << "  | " << detect(6) << "  | " << detect(14) << "  | " << detect(10) << "  |" << endl;
    cout << " " << string(27,'-') << endl;
}
//class max 
//{
    
//}

int main()
{
    int n;
    int a,b;
    //cout<<"PRESS MIN TO CHOOSE MINTERMS:";
    //cin>>a;
    //cout<<"PRESS MAX TO CHOOSE MAXTERMS:";
    //cin>>b;
    cout << "Enter the  Number of Minterms in k_map!";
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> m[i];
    }
    Min m1;
    m1.head();
    m1.row_1();
    m1.row_2();
    m1.row_3();
    m1.row_4();
    return 0;
    
}