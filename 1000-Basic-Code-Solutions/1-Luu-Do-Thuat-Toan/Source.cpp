#include<iostream>
#include<math.h>
using namespace std;

void Bai01_19()
{
	int n, x, s1 = 0, s2 = 0;
	float s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, s8 = 0;
	long s9 = 1, s10 = 1, s11 = 0, s12 = 0, s13 = 0, s14 = 0;
	float s15 = 0, s16 = 0, s17 = 0, s18 = 1, s19 = 1;
	long gt_2n = 1, gt_2n1 = 1;

	cout << "Nhap n: "; cin >> n;
	cout << "Nhap x: "; cin >> x;

	for (int i = 1; i <= n; i++)
	{
		s1 += i;	//s1 = s1 + i;
		s2 += i * i;
		s3 += float(1 / i);		//ep kieu du lieu
		s4 += 1 / (2 * float(i));
		s5 += 1 / (2 * (float(i) + 1));
		s6 += 1 / (float(i) * (float(i) + 1));
		s7 += float(i) / (float(i) + 1);
		s8 += (2 * float(i) + 1) / (2 * float(i) + 2);
		s9 *= i;	//s9 = s9 * i;
		s10 *= x;
		s11 += s9;
		s12 += s10;
		s13 += s10 * s10;
		s14 += s10 * s10 * x;
		s15 += 1 / float(s1);
		s16 += float(s10) / s1;
		s17 += float(s10) / s9;
		gt_2n *= i * 2 * (i * 2 - 1);	//tinh (2n)!
		s18 += float(s13) / gt_2n;
		gt_2n1 *= i * 2 * (i * 2 + 1);
		s19 += float(s14) / gt_2n1;
	}

	cout << "n = " << n << "; x = " << x << endl;
	cout << "1. S(n) = 1 + 2 + ... + n = " << s1 << endl;
	cout << "2. S(n) = 1^2 + 2^2 + ... + n^2 = " << s2 << endl;
	cout << "3. S(n) = 1 + 1/2 + ... + 1/n = " << s3 << endl;
	cout << "4. S(n) = 1/2 + 1/4 + ... + 1/2n = " << s4 << endl;
	cout << "5. S(n) = " << s5 << endl;
	cout << "6. S(n) = " << s6 << endl;
	cout << "7. S(n) = " << s7 << endl;
	cout << "8. S(n) = " << s8 << endl;
	cout << "9. T(n) = 1 * 2 * ... * n = " << s9 << endl;
	cout << "10. T(n) = x^n = " << s10 << endl;
	cout << "11. S(n) = " << s11 << endl;
	cout << "12. S(n) = " << s12 << endl;
	cout << "13. S(n) = " << s13 << endl;
	cout << "14. S(n) = " << s14 << endl;
	cout << "15. S(n) = " << s15 << endl;
	cout << "16. S(n) = " << s16 << endl;
	cout << "17. S(n) = " << s17 << endl;
	cout << "18. S(n) = " << s18 << endl;
	cout << "19. S(n) = " << s19 << endl;
}

void Bai20_32()
{
	int n, tong_uoc = 0, dem_uoc = 0, uoc_le_lon_nhat = 1;
	long tich_uoc = 1, tong_uoc_chan = 0, tich_uoc_le = 1, dem_uoc_chan = 0;

	n = 100;		//thay so de kiem tra ket qua
	cout << "\nn = " << n << endl;

	cout << "20. Liet ke uoc n: ";
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			cout << i << " ";
			tong_uoc += i;
			tich_uoc *= i;
			dem_uoc++;
		}
	}

	cout << "\n21. Tong uoc n: " << tong_uoc << endl;
	cout << "22. Tich uoc n: " << tich_uoc << endl;		//neu so qua lon se in phan bu
	cout << "23. So luong cac uoc n: " << dem_uoc << endl;

	cout << "24. Liet ke uoc so le cua n: ";
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (i % 2 != 0)
			{
				cout << i << " ";
				uoc_le_lon_nhat = i;
				tich_uoc_le *= i;
			}
			else
			{
				tong_uoc_chan += i;
				dem_uoc_chan++;
			}
		}
	}

	
	cout << "\n25. Tong cac uoc so chan cua n: " << tong_uoc_chan << endl;
	cout << "26. Tich cac uoc so le cua n: " << tich_uoc_le << endl;
	cout << "27. So luong cac uoc so chan cua n: " << dem_uoc_chan << endl;
	cout << "28. Tong uoc nho hon n : " << tong_uoc - n << endl;
	cout << "29. Uoc le lon nhat cua n: " << uoc_le_lon_nhat << endl;

	if (tong_uoc == n) cout << "30. n la so hoan hao." << endl;
	else cout<< "30. n khong la so hoan hao." << endl;

	if (dem_uoc == 2) cout << "31. n la so nguyen to." << endl;
	else cout << "31. n khong la so nguyen to." << endl;

	bool check = false;
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (i * i == n) check = true;
	}
	if (check == true) cout << "32. n la so chinh phuong." << endl;
	else cout << "32. n khong la so chinh phuong." << endl;
}

void Bai33_41()
{
	int n, x;
	float s33 = 0, s34 = 0, s35 = 0, s36 = 0, s37 = 0, s38 = 0, s39 = 0, s40 = 0, s41 = 0;
	long gt_2n = 1, gt_2n1 = 1;
	
	n = 6, x = 3;

	for (int i = 1; i <= n; i++)
	{
		
	}

	
}


int main()
{
	Bai01_19();
	Bai20_32();
	Bai33_41();

	system("pause");
	return 0;
}