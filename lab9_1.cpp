#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
class ProblemSolution {
    public:
    ProblemSolution(int N1,int N2){
        cout<<N1+N2;
        cout<<"\n";
    }
    ProblemSolution(int N1,int N2,int N3){
        cout<<N1+N2+N3;
    }
};
int main(){
        
    int N1,N2,N3;
    cin >> N1;
    cin >> N2;
    cin >> N3;
    ProblemSolution problemSolution =  ProblemSolution(N1,N2);
    ProblemSolution problemSolution1 =  ProblemSolution(N1,N2,N3);
}
