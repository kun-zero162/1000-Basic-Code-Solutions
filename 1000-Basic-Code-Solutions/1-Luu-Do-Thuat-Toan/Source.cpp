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

	n = 6;
	x = 3;

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

void Bai33_42()
{
	int n, x;
	float s33 = 0, s34 = 0, s35 = 0, s36 = 0, s37 = 0, s38 = 0, s39 = 0, s40 = 0, s41 = 1;
	long gt = 1, xPOWn = 1;
	int k = 0;
	
	n = 9, x = 3;

	for (int i = 1; i <= n; i++)
	{
		s33 = sqrt(2 + sqrt(s33));
		s34 = sqrt(i + sqrt(s34));
		s35 = sqrt(n - i + sqrt(s35));
		gt *= i;
		s36 = sqrt(gt + sqrt(s36));
		if (i >= 2)
			s37 = pow((i + s37) * 1.0, 1.0 / i);
		s38 = pow((i + s38) * 1.0, 1.0 / (i + 1));
		s39 = pow((gt) * 1.0, 1.0 / (i + 1));
		xPOWn *= x;
		s40 = sqrt(xPOWn * 1.0 + sqrt(s40));
		s41 = 1 / (1 + s41);
		int Sk = 0;
		for (int j = 1; j <= i; j++)
			Sk += j;
		if (Sk < n) k = i;
	}

	cout << "\nn = " << n << "; x = " << x << endl;
	cout << "33. S(n) = " << s33 << endl;
	cout << "34. S(n) = " << s34 << endl;
	cout << "35. S(n) = " << s35 << endl;
	cout << "36. S(n) = " << s36 << endl;
	cout << "37. S(n) = " << s37 << endl;
	cout << "38. S(n) = " << s38 << endl;
	cout << "39. S(n) = " << s39 << endl;
	cout << "40. S(n) = " << s40 << endl;
	cout << "41. S(n) = " << s41 << endl;
	cout << "42. So nguyen k lon nhat thoa S(k) = 1 + 2 + ... + k < n la: " << k << endl;
}

void Bai43_61()
{
	long n = 11357999;
	int dem_cs = 0, tong_cs = 0, tich_cs = 1;
	int dem_cs_le = 0, tong_cs_chan = 0, tich_cs_le = 1, cs_dau_tien = 0;
	int so_dao_nguoc = 0, cs_lon_nhat = n % 10, cs_nho_nhat = n % 10, dem_cs_lon_nhat = 0, dem_cs_nho_nhat = 0, dem_cs_dau_tien = 0;
	bool kt_cs_le = true, kt_cs_chan = true, kt_tang_dan = true, kt_giam_dan = true;
	int cs_cuoi = n % 10;

	int m = n, k = n;
	int p = n / 10, q = n / 10;
	cout << "\nn = " << n << endl;

	while (n > 0)
	{
		int i = 0;
		i = n % 10;
		n /= 10;
		dem_cs++;
		tong_cs += i;
		tich_cs *= i;
		if (i % 2 != 0)
		{
			dem_cs_le++;
			tich_cs_le *= i;
		}
		else tong_cs_chan += i;
		cs_dau_tien = i;
		if (i >= cs_lon_nhat)
			cs_lon_nhat = i;
		if (i <= cs_nho_nhat)
			cs_nho_nhat = i;
	}


	int dem_cs_dao_nguoc = 0;
	while (m > 0)
	{
		int i = 0;
		i = m % 10;
		m /= 10;
		dem_cs_dao_nguoc++;
		so_dao_nguoc += i * pow(10, dem_cs - dem_cs_dao_nguoc);
		if (i == cs_lon_nhat) dem_cs_lon_nhat++;
		if (i == cs_nho_nhat) dem_cs_nho_nhat++;
		if (i == cs_dau_tien) dem_cs_dau_tien++;
		if (i % 2 == 0) kt_cs_le = false;
		else kt_cs_chan = false;
	}

	
	while (p > 0)
	{
		int cs_ke_cuoi = p % 10;
		p /= 10;
		if (cs_cuoi < cs_ke_cuoi)
		{
			kt_tang_dan = false;
			break;
		}
		else
		{
			cs_cuoi = cs_ke_cuoi; 
		}

	}

	while (q > 0)
	{
		int cs_ke_cuoi = q % 10;
		q /= 10;
		if (cs_cuoi < cs_ke_cuoi)
		{
			kt_giam_dan = false;
			break;
		}
		else
		{
			cs_cuoi = cs_ke_cuoi;
		}

	}




	cout << "43. So luong chu so cua n: " << dem_cs << endl;
	cout << "44. Tong cac chu so cua n: " << tong_cs << endl;
	cout << "45. Tich cac chu so cua n: " << tich_cs << endl;
	cout << "46. So luong chu so le cua n: " << dem_cs_le << endl;
	cout << "47. Tong cac chu so chan cua n: " << tong_cs_chan << endl;
	cout << "48. Tich cac chu so le cua n: " << tich_cs_le << endl;
	cout << "49. Chu so dau tien cua n: " << cs_dau_tien << endl;
	cout << "50. So dao nguoc cua n: " << so_dao_nguoc << endl;
	cout << "51. Chu so lon nhat cua n: " << cs_lon_nhat << endl;
	cout << "52. Chu so nho nhat cua n: " << cs_nho_nhat << endl;
	cout << "53. So luong chu so lon nhat (chu so " << cs_lon_nhat << ") la: " << dem_cs_lon_nhat << endl;
	cout << "54. So luong chu so nho nhat (chu so " << cs_nho_nhat << ") la: " << dem_cs_nho_nhat << endl;
	cout << "55. So luong chu so chu so dau tien (chu so " << cs_dau_tien << ") la: " << dem_cs_lon_nhat << endl;
	if (kt_cs_le == true) cout << "56. So nguyen duong n co toan chu so le." << endl;
	else cout << "56. So nguyen duong n khong co toan chu so le." << endl;
	if (kt_cs_chan == true) cout << "57. So nguyen duong n co toan chu so chan." << endl;
	else cout << "57. So nguyen duong n khong co toan chu so chan." << endl;
	if (so_dao_nguoc == k) cout << "59. So nguyen duong n la so doi xung." << endl;			//k = n
	else cout << "59. So nguyen duong n khong la so doi xung." << endl;
	if (kt_tang_dan == true) cout << "60. So nguyen duong n co cac chu so tang dan." << endl;
	else cout << "60. So nguyen duong n khong co cac chu so tang dan." << endl;
	if (kt_giam_dan == true) cout << "61. So nguyen duong n co cac chu so giam dan." << endl;
	else cout << "61. So nguyen duong n khong co cac chu so giam dan." << endl;

}

void Bai62_66()
{
	float a = 48, b = 120, c = 24;
	float a1 = a, b1 = b;
	float x, x1, x2, x3, x4;
	cout << "\na = " << a << "; b = " << b << endl;
	while (a1 != b1)
	{
		if (a1 > b1)
			a1 = a1 - b1;
		else b1 = b1 - a1;
	}

	cout << "62. Uoc chung lon nhat cua a va b la: " << a1 << endl;
	cout << "63. Boi chung nho nhat cua a va b la: " << (a * b) / a1 << endl;
	
	//PT bac 1
	if (a == 0 && b != 0) cout << "64. Phuong trinh bac 1 (ax + b = 0) vo nghiem." << endl;
	else
	{
		x = -b / a;
		cout << "64. Nghiem phuong trinh bac 1 (ax + b = 0) la: x = " << x << endl;
	}
	
	//PT bac 2
	float delta = b * b - 4 * a * c;
	if (a == 0 && b == 0 && c != 0) cout << "65. Phuong trinh bac 2 (ax^2 + bx +c = 0) vo nghiem." << endl;
	else if (a == 0 && b != 0)
	{
		x1 = -c / b;
		cout << "65. Phuong trinh bac 2 (ax^2 + bx +c = 0) co he so a = 0 tro thanh PT bac 1 (bx + c = 0). Nghiem PT: x = " << x1 << endl;
	}
	else
	{
		if (delta < 0) cout << "65. Phuong trinh bac 2 (ax^2 + bx +c = 0) vo nghiem." << endl;
		else if (delta == 0)
		{
			x1 = -b / (2 * a);
			cout << "65. Phuong trinh bac 2 co nghiem kep x1 = x2 = " << x1 << endl;
		}
		else
		{
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			cout << "65. Phuong trinh bac 2 co 2 nghiem: x1 = " << x1 << "; x2 = " << x2 << endl;
		}
	}

	//PT bac 4


}

int main()
{
	// Giai cac bai tap nay ma khong dung ham con (tru cac ham danh dau so thu tu bai tap)
	Bai01_19();
	Bai20_32();
	Bai33_42();
	Bai43_61();
	Bai62_66();
	system("pause");
	return 0;
}