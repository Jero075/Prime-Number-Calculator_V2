#include <iostream>

using namespace std;

string range(int start, int end){
    string ret_str = "";
    int divide = 2;
    bool prime = true;
    for (int i = start; i <= end; i++){
        while (divide <= i/2){
            if (i%divide == 0){
                prime = false;
                break;
            }
            divide++;
        }
        if (prime){
            ret_str += to_string(i) + "\n";
        }
        prime = true;
        divide = 2;
    }
    return ret_str;
}

string check(int num){
    int divide = 2;
    while (divide <= num/2){
        if (num%divide == 0){
            return to_string(num) + " is not a prime number\n";
            break;
        }
        divide++;
    }
    return to_string(num) + " is a prime number\n";
}

string last_before(int num){
    bool prime = true;
    for (int i = num; i >= 2; i--){
        int divide = 2;
        while (divide <= i/2){
            if (i%divide == 0){
                prime = false;
                break;
            }
            divide++;
        }
        if (prime){
            return to_string(i) + " is the last prime number before " + to_string(num) + "\n";
        }
        prime = true;
    }
    return "There is no prime number lower than" + to_string(num) + "\n";
}

int main(){
    int doing, first_num, last_num;
    while (true){
        cout << "\n\n\n1 >>> Calculate all prime numbers between ___ and ___\n2 >>> Check if ___ is a prime number\n3 >>> Find last prime number before ___\n0 >>> Exit\n\n";
        cin >> doing;
        
        if (doing == 1){
            cout << "\nFirst number (2 or higher): ";
            cin >> first_num;
            cout << "Last number (2147483647 or lower): ";
            cin >> last_num;
            cout << "\n\n\n" << range(first_num, last_num);
        }
        else if (doing == 2){
            cout << "\nNumber to check (2 - 2147483647): ";
            cin >> first_num;
            cout << "\n\n\n" << check(first_num);
        }
        else if (doing == 3){
            cout << "\nFind last prime number before (2 - 2147483647): ";
            cin >> first_num;
            cout << "\n\n\n" << last_before(first_num);
        }
        else if (doing == 0){
            break;
        }
    }
}