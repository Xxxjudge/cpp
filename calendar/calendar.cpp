#include "iostream"
#include <iomanip>

using namespace std;

int year(int y) {
    if((y%4==0)&&(y%400!=0)||y%400==0)
    return 366;
    else return 365;
}

void printStar() {
    cout<<"*********************"<<endl;
}

int main()
{
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int y;//年
    int i,j,sum=0;
    int day,week;

    //输入年份
    cout<<"请输入年份："<<endl;
    cin>>y;
    if(year(y)==366) month[1]=29;
    
    //判断某年中的一月一日为星期几1990年一月一日为星期一
    for(i=1990;i<y;i++) 
        sum+=year(i);
    week=(sum+1)%7;
    cout<<y<<"年日历如下："<<endl;
    printStar();
    for(i=0;i<12;i++) {
        cout<<'\t'<<i+1<<"月"<<endl;
        cout<<" 日 一 二 三 四 五 六"<<endl;
        printStar();
        //每一天对应的星期输入
        day=1;
        for(j=0;j<week;j++)
            cout<<"   ";
        while(day<=month[i]) {
            cout<<setw(3)<<day;
            day++;
            week=(week+1)%7;
            if(week==0) cout<<endl;
        }
        cout<<endl;
    }


        

        printStar();
        cout<<endl;
    
    system("pause");
    return 0;
}
