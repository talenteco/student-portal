#include <iostream>
#include <vector>

using namespace std;

//merge algo
void mergealgo(vector<int>& arr, int left, int mid, int right){

    vector <int> temp;

    int pointLeft, pointRight;
    pointLeft= left;
    pointRight = mid+1;

    while((pointLeft<= mid)&&(pointRight<=right)){

        if(arr[pointLeft]<arr[pointRight]) temp.push_back(arr[pointLeft++]);
        else temp.push_back(arr[pointRight++]);
    }

    while(pointLeft<=mid) temp.push_back(arr[pointLeft++]);
    while(pointRight<=right) temp.push_back(arr[pointRight++]);

    //sorted subarray in temp, now copying back to original array

    for(int i=0; i<temp.size(); i++){
        arr[left+i] = temp[i];
    }

    cout << "Here's the SUB sorted array\n";

    for(int x: arr) cout << x << " ";

    cout << "\n";

}


//divide and conquer

void mergesort(vector <int>& arr , int left, int right){

    if(left>=right) return;

    int mid = (left+right)/2;

    mergesort(arr, left, mid);
    mergesort(arr, mid+1, right);
    mergealgo(arr,left, mid, right);

}

//helps convert char* to ints
int charStarToInt(char *c){
    

    int val =0 ;
    while(*c){
    
    if(*c<'0'||*c>'9') return -1;

    if(val > (INT_MAX-(*c - '0')) / 10){
            return -1;
        }
    
    val=val*10+(*c-'0');
    c++;

    }
    
    return val;
}

int main(int argc, char* argv[]){

    vector <int> student_ID ;
    while(argv){
        student_ID.push_back(charStarToInt(argv));
        argv++;
    }

    

    mergesort(student_ID, 0, student_ID.size()-1);

    cout << "Here's the FINAL sorted array\n";

    for(int x: arr) cout << x << " ";

    cout << "\n";

}