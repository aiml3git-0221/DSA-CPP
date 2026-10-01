//tower of hanoi
#include <iostream>
using namespace std;
void towerofhanoi(char source, char aux, char dest, int n){
    if(n==1){
        cout<<"Move disk 1 from "<<source<<" to "<<dest<<endl;
        return;
    }
    towerofhanoi(source,dest,aux,n-1);
    cout<<"Move disk "<<n<<" from "<<source<<" to "<<dest<<endl;
    towerofhanoi(aux,source,dest,n-1);
}
int main(){
    int n;
    cout<<"Enter number of disks: ";
    cin>>n;
    towerofhanoi('A','B','C',n);
}