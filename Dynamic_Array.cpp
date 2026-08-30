// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the number -> ";
//     cin >> n;
//    // new int[n];     // head
//     int *arr = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout << i << " " << "enter the = ";
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << "\t";
//     }
//     delete []arr;
// }

//        2D ARRAY
// #include <iostream>
// using namespace std;
// int main()
// {
//     int row,col;
//     cout << "enter the row -> ";
//     cin >> row;
//      cout << "enter the column -> ";
//     cin >> col;
//     int **arr = new int*[row];
//     for (int i = 0; i < row; i++)
//     {
//         arr[i] = new int[col];
//     }

// for (int i = 0; i < row; i++)
// {
//     for (int j = 0; j < col; j++)
//     {
//     cout << i << " "<<j<<" "<< "enter the = ";
//     cin >> arr[i][j];
//     }
// }
// for (int i = 0; i < row; i++)
// {
//     for (int j = 0; j < col; j++)
//     {
//     cout << arr[i][j] << "\t";
//     }
//     cout<<endl;
// }
//     //  delete memory
//      for (int i = 0; i < row; i++)
//     {
//         delete []arr[i];
//     }
//     delete []arr;
// }
