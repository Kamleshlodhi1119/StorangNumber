#include<iostream>
    using namespace std;
int perfectCube(int N)
{

    int cube;

    for (int i; i <= N; i++) {
        cube = i * i * i;
        if (cube == N) {
           cout << "Yes";
            return 0;
        }

        else if (cube > N) {
             cout << "NO";
            return 0;
        }
    }
}
 
int main()
{
    int N ;
    cin>>N;
    perfectCube(N);
    return 0;
}