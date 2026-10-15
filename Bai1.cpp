#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

#define MAX 100
#define INF 1e9

int n; 
int A[MAX][MAX]; 
string vertexNames = "ABCDEF"; 

int charToInt(char c) {
    c = toupper(c);
    for (int i = 0; i < n; i++) {
        if (vertexNames[i] == c) return i;
    }
    return -1;
}

void Nhap(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Khong the mo file " << filename << "!";
        return;
    }
    file >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            file >> A[i][j];
        }
    }
    file.close();
    cout << "Da doc xong do thi tu file " << filename << "!\n";
}

void HienThi() {
    cout << "\n--- MA TRAN TRONG SO CUA DO THI ---\n     ";
    for (int i = 0; i < n; i++) {
        cout << left << setw(4) <<  vertexNames[i];
    }
    cout << "\n";
    for (int i = 0; i < n; i++) {
        cout << left << setw(5) << vertexNames[i];
        for (int j = 0; j < n; j++) {
            cout << left << setw(5) << A[i][j];
        }
        cout << "\n";
    }
}

int main() {
    Nhap("Grap.txt");

    HienThi();

    return 0;
}
