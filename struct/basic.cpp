#include <iostream>
using namespace std;
struct height{
    int feet;
    int inch;
};
struct time{
    int hour;int min; int sec;
};
void he(){
    struct height h1;
    struct height h2;
    
    cin>>h1.feet>>h1.inch;
    cin>>h2.feet>>h2.inch;
    int x = (h1.inch + h2.inch)/12;
    int y = (h1.inch + h2.inch)%12;
    
    cout<<h1.feet+h2.feet+x<<"'"<<y<<"\" "<<endl;
}
void time(){
    struct time t1={7,31,54};
    struct time t2={2,55,36};
    int w = (t1.sec+t2.sec)/60;
    int v = (t1.sec+t2.sec)%60;
    int r = (t1.min+t2.min+w)/60;
    int q = (t1.min+t2.min+w)%60;
    cout<<t1.hour+t2.hour+r<<":"<<q<<":"<<v<<endl;
}
int main(){
    he();
    time();
    return 0;
}