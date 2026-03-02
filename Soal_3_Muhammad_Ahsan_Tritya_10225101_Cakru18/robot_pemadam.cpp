#include <iostream>
#include <string>
using namespace std;

class RobotPemadam {
private:
    int jarak; 
    string status; 

public:
    void inputSensor(int input_user) {
        jarak = input_user;
    }

    void prosesLogika() {
        if (jarak > 20) {
            status = "Maju Mencari Api";
        } else if (jarak <= 20 && jarak > 5) {
            status = "UDAH DEKET NIH BRAY";
        } else {
            status = "Posisi Tepat! gas semprot kali ya!";
        }
    }

    void cetakStatus() {
        cout << "[Sensor: " << jarak << " cm] -> Action: [" << status << "]" << endl;
    }
};

int main() {
    RobotPemadam myRobot; 
    int input_jarak;

    while (true) {
        cout << "Masukkan input sensor (ketik 67 untuk berhenti): ";
        cin >> input_jarak;

        if (input_jarak == 67) { 
            cout << "Program berhenti. Sampai jumpa!" << endl;
            break;
        }

        myRobot.inputSensor(input_jarak);
        myRobot.prosesLogika();
        myRobot.cetakStatus();
    }

    return 0;
}
