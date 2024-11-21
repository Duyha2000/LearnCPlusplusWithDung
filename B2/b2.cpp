// #include <bits/stdc++.h>
// #include <iomanip>
// #include <iostream>
// #include <string>
// using namespace std;

/*
 * Class: CMSC140 CRN
 * Instructor:
 * Project 3
 * Description: This program calculates the occupancy rate and total income for
a BlueMont hotel chain based on user inputs for the number of floors, rooms, and
occupancy on each floor. Due Date:
 * Due Date:
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: __________
*/

// int main() {
//   cout << "===================================================================="
//           "==========="
//        << endl;
//   cout << " \t \t \tBlueMont Hotel" << endl;
//   cout << "===================================================================="
//           "==========="
//        << endl;
//   string location;
//   cout << "Enter the location of this Hotel: ";
//   getline(cin, location);

//   int single_Room, double_Room, king_Room, suit_Room, total_Occupiedroom;
//   int number_FloorRoom;
//   int number_Floor;

//   // Input numbers of floors:
//   cout << "Enter total numbers of floors of the hotel: ";
//   cin >> number_Floor;

//   cout << endl << endl;
//   while ((number_Floor < 1) || (number_Floor > 5)) {
//     cout << "Number of floors should be between 1-5 !! Please try again: ";
//     cin >> number_Floor;
//   }

//   // minFloor = 0 , minRooms = 0
//   // Chạy lên tầng 1 -> minRooms = tổng số phòng tầng 1 // 10
//   // Chạy lên tầng 2 -> if(số phòng tầng 2 < minRooms) -> minRooms = số phòng
//   // tầng 2
//   //

//   // between 1 to 30
//   // 30 tầng
//   // 1 -> 3 phòng đơn,  4 phòng đôi
//   // 2 -> 2 phòng đơn, 3 phòng đôi
//   // -----
//   // 30 -> 3 phòng đơn, 2 phòng đơn

//   // Initialize total room counts across all floors for income calculation:
//   double total_SingleRooms = 0.0; // để trên for

//   double total_DoubleRooms = 0.0;

//   double total_KingRooms = 0.0;

//   double total_SuitRoom = 0.0;

//   int sumRooms_infloors = 0;
//   int sum_Occupiedroom = 0;
//   int minFloor;
//   int minRoom;

//   // tầng 1 -> nhập số phòng: 20
//   // for (int flo = 1; flo <= number_Floor; flo++) {
//   //   cout << "Enter number of rooms in the  " << flo << "th Floor: ";
//   //   cin >> number_FloorRoom;
//   //   // tính t ổng 20 + 10
//   //   while ((number_FloorRoom < 1) || (number_FloorRoom > 30)) {
//   //     cout << "Number of rooms should be between 1-30 !! Please try again: ";
//   //     cin >> number_FloorRoom;
//   //   }
//   //   cout << endl << endl;
//   //   // while: chỉ chạy vào bên trong code khi thỏa mãn điều kiện
//   //   // do while: chạy vào 1 lần từ 67 -> 80 không cần nhìn điều kiện
//   //   sumRooms_infloors += number_FloorRoom;

//   //   do {
//   //     cout << "How many SINGLE rooms are occupied in " << flo << "th floor :
//   //     "; cin >> single_Room; // 5 cout << "How many DOUBLE rooms are occupied
//   //     in " << flo << "th floor : "; cin >> double_Room; // 3 cout << "How
//   //     many KING rooms are occupied in  " << flo << "th floor : "; cin >>
//   //     king_Room; // 4 cout << "How many SUIT ROOM are occupied in " << flo <<
//   //     "th floor : "; cin >> suit_Room; // 9 cout << endl << endl;
//   //     total_Occupiedroom =
//   //         single_Room + double_Room + king_Room + suit_Room; //////
//   //     sum_Occupiedroom += total_Occupiedroom;

//   //     if (total_Occupiedroom > number_FloorRoom)
//   //       cout << "Number of rooms should be between 1-30 !! Please try again:
//   //       "
//   //            << endl;
//   //   } while (total_Occupiedroom > number_FloorRoom);

//   //   total_SingleRooms += single_Room;
//   //   total_DoubleRooms += double_Room;
//   //   total_KingRooms += king_Room;
//   //   total_SuitRoom += suit_Room;

//   //   // minFloor thì em để ý đang chạy vòng lặp for cho biến floor rồi
//   //   // nghĩa là giả sử flo = 5, số phòng này ít nhất -> gán flo vào minFloor
//   //   là
//   //   // được
//   //   if (flo == 1) {
//   //     minRoom = number_FloorRoom;
//   //     minFloor = flo;
//   //   } else if (number_FloorRoom < minRoom) {
//   //     minRoom = number_FloorRoom; // number_FloorRoom
//   //     minFloor = flo;
//   //   }

//   //   // Không có 2 if -> if và else if
//   // }

//   for (int flo = 1; flo <= number_Floor; flo++) {
//     bool validInput = false;
//     while (!validInput) {
//       cout << "Enter number of rooms in the  " << flo << "th Floor: ";
//       cin >> number_FloorRoom;

//       while ((number_FloorRoom < 1) || (number_FloorRoom > 30)) {
//         cout << "Number of rooms should be between 1-30 !! Please try again: ";
//         cin >> number_FloorRoom;
//       }

//    //   int single_Room, double_Room, king_Room, suit_Room, total_Occupiedroom;

//       do {
//         cout << "How many SINGLE rooms are occupied in " << flo
//              << "th floor : ";
//         cin >> single_Room;
//         cout << "How many DOUBLE rooms are occupied in " << flo
//              << "th floor : ";
//         cin >> double_Room;
//         cout << "How many KING rooms are occupied in " << flo << "th floor : ";
//         cin >> king_Room;
//         cout << "How many SUIT rooms are occupied in " << flo << "th floor : ";
//         cin >> suit_Room;

//         total_Occupiedroom = single_Room + double_Room + king_Room + suit_Room;

//         if (total_Occupiedroom > number_FloorRoom) {
//           cout << "Total number of occupied rooms exceeds the total number of "
//                   "rooms on this floor. Please try again!"
//                << endl;
//         } else {
//           validInput = true; // Valid input, exit the loop
//         }
//       } while (total_Occupiedroom > number_FloorRoom);
//     }

//     // Proceed with calculations
//     sumRooms_infloors += number_FloorRoom;
//     sum_Occupiedroom += total_Occupiedroom;
//     total_SingleRooms += single_Room;
//     total_DoubleRooms += double_Room;
//     total_KingRooms += king_Room;
//     total_SuitRoom += suit_Room;

//     if (flo == 1 || number_FloorRoom < minRoom) {
//       minRoom = number_FloorRoom;
//       minFloor = flo;
//     }
//   }

//   cout << endl << endl;
//   cout << "===================================================================="
//           "===================================================="
//        << endl;
//   cout << " \t \t BlueMont Hotel located in " << location << endl << endl;

//   cout << "\t \t \tTODAY'S ROOM RATE <US$/night>" << endl << endl;
//   const int ROOM_SINGLE = 60, ROOM_DOUBLE = 75, ROOM_KING = 100,
//             ROOM_SUIT = 150;
//   cout << setw(20) << "Room single " << setw(20) << " room double";
//   cout << setw(20) << "Room king" << setw(20) << "Room suit" << endl << endl;

//   cout << setw(20) << ROOM_SINGLE << setw(20) << ROOM_DOUBLE;
//   cout << setw(20) << ROOM_KING << setw(20) << ROOM_SUIT << endl;

//   cout << "===================================================================="
//           "===================================================="
//        << endl;
//   cout << fixed << setprecision(2);

//   double income = (static_cast<double>(total_SingleRooms) * ROOM_SINGLE) +
//                   (total_DoubleRooms * ROOM_DOUBLE) +
//                   (total_KingRooms * ROOM_KING) + (total_SuitRoom * ROOM_SUIT);
//   cout << setw(19);
//   cout << "Hotel Income: " << income << endl;

//   // totalRooms_infloors =
//   //     sumRooms_infloors * number_Floor;
//   cout << "Total # of rooms: " << sumRooms_infloors << endl;
//   cout << "Total # occupied of rooms: " << sum_Occupiedroom << endl;
//   int total_Unoccupiedroom;
//   total_Unoccupiedroom = sumRooms_infloors - sum_Occupiedroom;
//   cout << "Total # unoccupided of rooms: " << total_Unoccupiedroom << endl;
//   double rates;
//   rates = (static_cast<double>(sum_Occupiedroom) / sumRooms_infloors) * 100;
//   cout << "Occupancy rate: " << rates << endl;
//   cout << minFloor << "th Floor with " << minRoom
//        << "rooms, has the least number of rooms." << endl;

//   cout << "Thank you for testing my Program!!" << endl;
//   cout << "PROGRAMMER: DUNG NGUYEN" << endl;
//   cout << "CMSC140 PROJECT 3" << endl;
//   cout << "DUE DATE: 11/3/2024";

//   return 0;
// }