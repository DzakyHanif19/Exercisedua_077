#include <iostream>
using namespace std;

class bidangdatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar 
public:
	bidangdatar() { //constructor
		x = 0;
	}
	virtual void input(){}//fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	virtual float luas(int a) { return 0; }//fungsi untuk menghitung luas
	virtual float keliling(int a) { return 0; }//fungsi untuk menghitung keliling 
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class lingkaran : public bidangdatar {
public:
    void input() {
        cout << "masukkan jejari: ";
        int r;
        cin >> r;
        setX(r);
    }

    float luas(int r) {
        return 3.14 * r * r;
    }

    float keliling(int r) {
        return 2 * 3.14 * r;
    }
};

class bujursangkar : public bidangdatar {
public:
    void input() {
        cout << "Masukkan sisi: ";
        int s;
        cin >> s;
        setX(s);
    }

    float Luas(int s) {
        return s * s;
    }

    float Keliling(int s) {
        return 4 * s;
    }
};

int main() {
    bidangdatar* bd;

    cout << "lingkaran dibuat" << endl;
    bd = new lingkaran();
    bd->input();
    int r = bd->getX();
    cout << "luas lingkaran = " << bd->luas(r) << endl;
    cout << "keliling lingkaran = " << bd->keliling(r) << endl;

    cout << "bujursangkar dibuat" << endl;
    bd = new bujursangkar();
    bd->input();
    int s = bd->getX();
    cout << "luas bujursangkar = " << bd->luas(s) << endl;
    cout << "keliling bujursangkar = " << bd->keliling(s) << endl;

    delete bd;
    return 0;
}