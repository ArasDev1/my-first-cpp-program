#include <iostream>
#include <random>
#include <string>
#include <ctime>
using namespace std;

int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 255);

    int x_cord = dist(gen);
    int y_cord = dist(gen);
    int z_cord = dist(gen);

    int cpu_fan1_temp = dist(gen);
    int cpu_fan2_temp = dist(gen);
    int gpu_temp = dist(gen);


    cout << "Easy Terminal beta 1 (basic commands from c++) " << endl;

    while (true) {
        cout << "> ";
        string eingabe;
        cin >> eingabe;

        if (eingabe == "/cords")
        {
            cout << endl;
            cout << "x: " << x_cord << endl;
            cout << "y: " << y_cord << endl;
            cout << "z: " << z_cord << endl;
        }
        else if (eingabe == "/help")
        {
            cout << "\nAvailable Commands:\n";
            cout << "  /help      - Shows you commands\n";
            cout << "  /cords     - Shows random x,y,z coordinates\n";
            cout << "  /exit      - Exits the program\n";
            cout << "  /about     - Info about the program\n";
            cout << "  /time      - Shows current time and date\n";
            cout << "  /hack      - Fake hacking output\n";
            cout << "  /temp      - Simulated system temps\n";
        }
        else if (eingabe == "/exit")
        {
            cout << "exited." << endl;
            break;
        }
        else if (eingabe == "/about") {
            cout << "Program was made in C++" << endl;
            cout << "Developer: Aras (Newbie in C++)" << endl;
            cout << "Version: Beta 1 (Full version in  development)" << endl;
        }
        else if (eingabe == "/time")
        {
            time_t now = time(0);
            cout << "Reallife Time: " << ctime(&now);

        }
        else if (eingabe == "/hack")
        {
            cout << "011010101011001100101001011001010101010101010101100110010110010100001101010101001110100101100101100101101010101010001010010101010101010101010101010000101010110101010111100001100000000000000" << endl;
        }
        else if (eingabe == "/temp") {
            cout << "CPU 1 : " << cpu_fan1_temp << " C" << endl;
            cout << "CPU 2 : FAILED" << endl;
            cout << "GPU : " << gpu_temp << " C" << endl;
            cout << "GPU 2 : FAILED" << endl;
        }
        else
        {
            cout << "Unknown Command!" << endl;
        }
    }

    return 0;
}