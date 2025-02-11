#include "bits/stdc++.h"
using namespace std;

int maximum(vector <int> v){
    int size = v.size();
    int max = v[0];
    for(auto it = v.begin() + 1;it != v.end();it++){
        if(*it > max){
            max = *it;
        }
    }

    return max;
}



void counting(vector <int> &v,int maxElm){

    vector <int> count(maxElm + 1,0);
    int s = v.size();

//frequency of vector....

    for(int i=0;i<v.size();i++){
        count[v[i]]++;
    }



//initialize output vector.....

vector<int> output(s);
int k = 0;


// fillup output......with for loop [001]

for(int j =0;j<count.size();j++){
    while(count[j] > 0){
        output[k] = j;
        k++;
        count[j]--;
    }
}





//clone vector with output elements.....
     for(int i=0;i<output.size();i++){
       v[i] = output[i];
    }


}





void prVect(vector <int> v){
    for(auto it = v.begin();it != v.end();it++) cout<<*it<<" ";
}



int main(){

    vector <int> number = {93,12,56,93,23,12,78};
    cout<<endl<<"Unsorted :"<<endl;
    prVect(number);
int m = maximum(number);
counting(number,m);

    cout<<endl<<"Sorted :"<<endl;

prVect(number);



return 0;
}