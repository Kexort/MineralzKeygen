#include <iostream>
#include <string>
#include <sstream>

using namespace std;

std::string udg_string02 = "ZXCVBNM1234567890ASDFGHJKLQWERTYUIOP!@#";
int udg_integer24 = 2;
int udg_integers26[] = { 1, 1,10000};
std::string player = "Kexort";
int udg_hashtable03 = 11;

int NU(std::string n)

{
    int i = 0;
    std::string s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string s2 = "abcdefghijklmnopqrstuvwxyz";
    std::string s3 = "0123456789";

    do
    {
        if (s1.substr(i, 1) == n) return i;
        if (s2.substr(i, 1) == n) return i;
        i++;
    } while (i<26);
    i = 0;
    do
    {
        if (s3.substr(i, 1) == n) return i;
        i++;
    } while (i<10); //??? >=$udg_group01
    return 0;
}

int BU(std::string str, std::string pn)
{
    int i = 0;
    int j = 0;

    do
    {
        j = j + NU(pn.substr(i, 1));
        i = i + 1;
    } while (i < pn.size());
    i = 0;
    do
    {
        j = j + NU(str.substr(i, 1));
        i = i + 1;
    } while (i < str.size());
    return j;
}



std::string GU()
{
    int i;
    int j;
    int k;
    int l;
    int m;
    int HU = udg_string02.length();
    int a[100];
    std::string DU = "";
    std::string c = "";
    int JU = 0;
    int KU = 0xF4240;
    std::string LU = "0123456789";
    i = 0;

    while (true)
    {
        i = i + 1;
        if (i > udg_integer24) break;
        std::stringstream sstm;
        sstm << DU << udg_integers26[i] << "-";
        DU = sstm.str();
    }

    std::stringstream sstm2;

    sstm2 << DU << BU(DU, player);

    DU = sstm2.str();

    if (udg_integers26[1] == 0) DU = "-" + DU;
    i = 0;

    do
    {
        a[i] = 0;

        i = i + 1;

    } while (i < 'd');
    m = 0;
    i = 0;
    do
    {
        j = 0;

        do
        {
            a[j] = a[j] * udg_hashtable03;
            j = j + 1;
        } while (j <= m);

        l = 0;

        c = DU.substr(i, 1);

        do
        {
            if (LU.substr(l, 1) == c) break;
            l = l + 1;
        } while (l <= 9);
        a[0] = a[0] + l;
        j = 0;
        do
        {
            k = a[j] / KU;
            a[j] = a[j] - k*KU;
            a[j + 1] = a[j + 1] + k;
            j = j + 1;
        } while (j <= m);
        if (k>0) m = m + 1;

        i = i + 1;
    } while (i < DU.size());

    DU = "";

    while (m >= 0)
    {
        j = m;
        while (j>0)
        {
            k = a[j] / HU;
            a[j - 1] = a[j - 1] + (a[j] - k*HU)*KU;
            a[j] = k;
            j = j - 1;
        }
        k = a[j] / HU;
        i = a[j] - k*HU;
        DU = DU + udg_string02.substr(i, 1);
        a[j] = k;
        if (a[m] == 0)
        {
            m = m - 1;
        }
    }
    i = DU.size();
    JU = 0;
    c = "";
    do
    {
        i = i - 1;
        c = c + DU.substr(i, 1);
        JU = JU + 1;
        if (JU == 4 && i>0)
        {
            c = c + "-";
            JU = 0;
        }
    } while (i > 0);

    return c;
}



int main()
{
    udg_integers26[1] = 100;
    udg_integers26[2] = 100;
    player = "Kex";
    int x;
    std::cout << GU();
    std::cin >> x;
    return 0;
}