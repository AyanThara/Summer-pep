
  #include<iostream>
  using namespace std;
  int binarysearch(int arr[],int size,int key){
      int start=0;
      int end=size-1;
      while(start<=end){
          int mid=(start+end)/2;                    

            if(arr[mid]==key){
                return mid;
            }
            else if(arr[mid]>key){
                end=mid-1;
            }
            else{
                start=mid+1;
            }           
        }
        return -1;
  }
  int main(){
      int arr[7]={1,2,3,4,5,6,7};
      int size=7;
      int key=5;
      int index=binarysearch(arr,size,key);
      cout<<"key is present at index "<<index<<endl;
  } 
