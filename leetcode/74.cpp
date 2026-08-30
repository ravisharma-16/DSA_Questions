#include<iostream>
using namespace std;
void search(int arr[][20], int row, int col, int target)
{
    bool found = false;
 for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j] == target)
            {
                cout << "Target " << target << " found at index [" << i << "][" << j << "]" << endl;
                found = true;
            }
        }
    }
    if(!found)
    {
        cout << "Target " << target << " not found in the array." << endl;
    }
}
int main()
{
    int row,col,arr[20][20],target;
    cout << "enter the row = ";
    cin >> row;
    cout << "enter the col = ";
    cin >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout <<"[" << i <<"]" << " " <<"[" << j <<"]" <<" "<< "index =";
            cin >> arr[i][j];
        }
        
    }
    cout << "enter the target = ";
    cin >> target;
    search(arr,row,col,target);
}