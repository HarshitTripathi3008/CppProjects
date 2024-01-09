#include<iostream>
int searcharray(int array[], int size, int element);
int main()
{
    int numbers[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(numbers)/sizeof(int);
    int index;
    int mynum;
    std::cout<<"enter the element to search for: "<<'\n';
    std::cin>> mynum;
    index = searcharray(numbers, size, mynum);
    if(index!=-1){
        std::cout<<mynum<<" is at index "<<index;
    }
    else{
        std::cout<<mynum<<" is not in the array";
    }

    return 0;
}
int searcharray(int array[], int size, int element){
    for(int i=0; i< size; i++){
        if(array[i]==element){
            return i;
        }
    }
    return -1; 

}