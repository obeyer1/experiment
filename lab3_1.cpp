//转华氏度
#include<iostream>
using namespace std;
float tansformer(float F){
    return (F-32)*5/9;
}
int main()
{
    float F;
    cin>>F;
    cout<<tansformer(F)<<endl;
    return 0;
}