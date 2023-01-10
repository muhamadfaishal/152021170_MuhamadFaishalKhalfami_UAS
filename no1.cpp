#include <iostream>
#include <math.h>

using namespace std;

float totalx(int banyak,  int x[]) {
  int jumlah = 0;
  for (int i = 0; i < banyak; i++) 
  {
    jumlah += x[i];
  }
  return (float)jumlah;
}

float totaly(int banyak,  int y[]) {
  int jumlah = 0;
  for (int i = 0; i < banyak; i++) 
  {
    jumlah += y[i];
  }
  return (float)jumlah;
}

float totalxy(int banyak, int kali[]) {
  int jumlah = 0;
  for (int i = 0; i < banyak; i++) 
  {
    jumlah += kali[i];
  }
  return (float)jumlah;
}

float totalxkuadrat(int banyak, int kuadrat[]) {
  int jumlah = 0;
  for (int i = 0; i < banyak; i++) 
  {
    jumlah += kuadrat[i];
  }
  return (float)jumlah;
}

int main ()
{
    system("cls");
    int x[100], y[100], kali[100], kuadrat[100], banyak;
    cout << "Masukkan banyak data : "; cin >> banyak;
    cout << "-------------------------" << endl;
    for (int i = 0; i < banyak; i++ )
    {
        cout << "masukkan data X-" << i + 1 << " : "; cin >> x[i];
        while (x[i] <= 0)
        {
            cout << "Nilai x tidak boleh kurang dari 0. Masukkan nilai x: ";
            cin >> x[i];
        }
        
        cout << "masukkan data Y-" << i + 1 << " : "; cin >> y[i];
        while (y[i] <= 0)
        {
            cout << "Nilai y tidak boleh kurang dari 0. Masukkan nilai y: ";
            cin >> y[i];
        }
    }
    cout << "-------------------------" << endl;
    for (int i = 0; i < 3; i++ )
    {
        kali[i] = x[i]*y[i]; 
        cout << "Hasil X*Y :" << kali[i] << endl;
    }
    cout << "-------------------------" << endl;
    for (int i = 0; i < 3; i++ )
    {
        kuadrat[i] = x[i] * x[i];
        cout << "Hasil X Kuadrat : " << kuadrat[i] << endl;
    }
    cout << "-------------------------" << endl;
    float sigmax = totalx(banyak,  x); 
    cout << "Hasil Sigma x : "<< sigmax << endl;
    float sigmay = totaly(banyak,  y); 
    cout << "Hasil Sigma Y : "<< sigmay << endl;
    float sigmaxy = totalxy(banyak,  kali); 
    cout << "Hasil Sigma XY : "<< sigmaxy << endl;
    float sigmaxkuadrat = totalxkuadrat(banyak,  kuadrat); 
    cout << "Hasil Sigma X Kuadrat : "<< sigmaxkuadrat << endl;

    float regresiatas = banyak * sigmaxy - sigmax * sigmay;
    float regresibawah = sqrt((banyak * sigmax * sigmax) - (sigmax * sigmax)) * sqrt((banyak * sigmay * sigmay) - (sigmay * sigmay));
    float regresi = regresiatas/regresibawah;

    cout << "nilai korelasi r adalah " << regresi;

    float korelasi = (regresi); {
        if (regresi > 0.70)

        {
        cout << " hubungan korelasinya sangat kuat" << endl;
        }

        if (regresi > 0.50 )
        {
        cout << " hubungan korelasi sedang" << endl;
        }
        
        if (regresi > 0.30)
        {
        cout << " hubungan korelasi moderat" << endl;
        }
        if (regresi > 0.10)
        {
        cout << " hubungan korelasi rendah" << endl;
        }
        if (regresi < 0.10 )
        {
        cout << " hubungan korelasi diabaikan" << endl;
        }
    }    
    cout << "----------------------------------" << endl;

        if (regresi > 0 )
        {
        cout << " hubungan antara variable x dan y adalah positif, dimana jika nilai x bertambah, maka nilai y pun akan bertambah, dan juga sebaliknya";
        }
        
        if (regresi < 0)
        {
        cout << " hubungan antara variable x dan y adalah negatif, dimana jika nilai x bertambah, maka nilai y pun akan mengecil, dan juga sebaliknya";
        }
        if (regresi = 0)
        {
        cout << " Tidak ada hubungan antara variable x dan y";
        }

}

