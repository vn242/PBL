﻿#include"menu.h"
char nd1[5][30] = { "San Pham", "Khach Hang", "Hoa Don", "Nhan Vien", "Thoat" };
char nd2[4][30] = { "Nhap San Pham","Cap Nhat San Pham ","Quan ly San Pham", "Tro Ve" };
char nd3[3][30] = { "Cap Nhat Khach Hang", "Quan Ly Khach Hang", "Tro Ve" };
char nd4[3][30] = {"Tao Hoa Don","Quan Ly Hoa Don", "Thoat" };
char nd6[3][30] = {"Them Nhan Vien", "Quan ly Nhan Vien", "Thoat"};
char nd5[4][30] = { "Nhap Nha Cung Cap", "Cap Nhat NCC", "Quan ly NCC", "Thoat" };
char nd7[7][30] = { "STT","Ma SP", "Ten SP","Don gia nhap", "Don gia ban", "So luong" };
char ndnv[8][30] = { "STT", "Ma NV", "Ten NV", "So CCCD", "Que Quan", "So DT", "Tuoi", "Chuc Vu" };
char nf[2][30] = { "XOA SAN PHAM", "THAY DOI THONG TIN" };
char nd8[7][30] = { "STT", "Ten San Pham", "MASP", "Ton Kho", "Gia Nhap", "Gia Ban", "Da Ban" };
char nd9[8][30] = { "STT", "Ho va ten", "Ma NV", "CMND", "Dia Chi", "SDT", "Chuc Vu", "Tuoi" };
char nd_chinh[2][30] = {"USER", "ADMID"};
char nd_tk[2][30] = { "", "" };
char nd_kh[2][30] = { "Chua tung mua hang", "Da tung mua hang" };
char nd_muahang[5][30] = { "STT", "Ten San Pham", "MASP", "Tinh Trang", "Gia Ban" };
char nd_donhang[2][30] = {"MASP", "So luong" };
char nd_bang[2][30] = { "Ten San Pham", "So luong" };
char nd_thaydoi[2][30] = { "SDT","Ten" };
char nd_qlkh[5][30] = { "STT","Ho va ten","SDT","So HD","Tong HD" };
char nd_qldh[4][30] = { "STT","Ma DH","So SP","Tong tien" };
char nd_cthd[4][30] = { "STT", "Ten SP", "So luong", "Thanh tien" };
char nd_hoadon[5][30] = { "STT", "Ten San Pham", "So Luong", "Don Gia", "Thanh Tien" };
void box1(int x, int y, int w, int h, int t_color)
{
	TextColor(t_color);
	if (h <= 1 || w <= 1)return;
	for (int ix = x; ix <= x + w; ix++)
	{
		gotoXY(ix, y);
		cout << char(196);
		gotoXY(ix, y + h);
		cout << char(196);
	}
	for (int iy = y; iy <= y + h; iy++)
	{
		gotoXY(x, iy);
		cout << char(179);
		gotoXY(x + w, iy);
		cout << char(179);
	}
	gotoXY(x, y); cout << char(218);
	gotoXY(x + w, y); cout << char(191);
	gotoXY(x, y + h); cout << char(192);
	gotoXY(x + w, y + h); cout << char(217);

}
void box(int x, int y, int w, int h, int t_color, int b_color, char nd[30])
{
	TextColor(b_color);
	for (int iy = y + 1; iy <= y + h - 1; iy++)
	{
		for (int ix = x + 1; ix <= x + w - 1; ix++)
		{
			gotoXY(ix, iy); cout << " ";
		}
	}
	setColor(7);
	gotoXY(x + 1, y + 1);

	cout << nd;
	//============= ve vien =============
	TextColor(t_color);
	//setColor(t_color);//update
	if (h <= 1 || w <= 1)return;
	for (int ix = x; ix <= x + w; ix++)
	{
		gotoXY(ix, y);
		cout << char(196);
		gotoXY(ix, y + h);
		cout << char(196);
	}
	for (int iy = y; iy <= y + h; iy++)
	{
		gotoXY(x, iy);
		cout << char(179);
		gotoXY(x + w, iy);
		cout << char(179);
	}
	gotoXY(x, y); cout << char(218);
	gotoXY(x + w, y); cout << char(191);
	gotoXY(x, y + h); cout << char(192);
	gotoXY(x + w, y + h); cout << char(217);

}
void n_box(int x, int y, int w, int h, int t_color, int b_color, char nd[][30], int sl)
{

	for (int i = 0; i < sl; i++)
	{
		box(x, y + (i * h), w, h, t_color, b_color, nd[i]);
		if (i != 0)
		{
			gotoXY(x, y + (i * h)); cout << char(195);
			gotoXY(x + w, y + (i * h)); cout << char(180);
		}
	}
}
void thanh_sang(int x, int y, int w, int h, int b_color, char nd[][30])
{
	TextColor(b_color);
	for (int iy = y + 1; iy <= y + h - 1; iy++)
	{
		for (int ix = x + 1; ix <= x + w - 1; ix++)
		{
			gotoXY(ix, iy); cout << " ";
		}
	}
	//TextColor(7);
	setColor(7);
	gotoXY(x + 1, y + 1);
	for (int i = 0; i < 6; i++)
	{
		if (y == 3 + i * h || y == 5 + i * h)cout << nd[i];
	}
	//TextColor(7);
}
void thanh_sang1(int x, int y, int w, int h, int b_color, char nd[][30])
{
	TextColor(b_color);
	for (int iy = y + 1; iy <= y + h - 1; iy++)
	{
		for (int ix = x + 1; ix <= x + w - 1; ix++)
		{
			gotoXY(ix, iy); cout << " ";
		}
	}
	//TextColor(7);
	setColor(7);
	gotoXY(x + 1, y + 1);
	for (int i = 0; i < 6; i++)
	{
		if (y == 7 + i * h)cout << nd[i];
	}
	//TextColor(7);
}
void menu1()
{

	//ShowCur(0);
	int x = 40;
	int y = 5;
	int w = 22;
	int h = 3;
	int t_color = 2;
	int b_color = 5;
	int b_color_sang = 75;
	int sl = 4;
	n_box(x, y, w, h, t_color, b_color, nd2, sl);
	int xp = x; int yp = y;//tọa độ thanh sáng
	int xcu = xp; int ycu = yp;
	bool kt = true;
	while (true)
	{
		//------ in ----
		if (kt == true)
		{
			//----- back space ----
			gotoXY(xcu, ycu);
			thanh_sang(xcu, ycu, w, h, b_color, nd2);//rs thanh sang cu
			xcu = xp; ycu = yp;
			//-------------
			thanh_sang(xp, yp, w, h, b_color_sang, nd2);
			kt = false;
		}
		//----- dieu khien ---- //----- di chuyen ----
		if (_kbhit())
		{
			char c = _getch();
			if (c == -32)
			{
				kt = true;// đã bấm
				c = _getch();
				if (c == 72)
				{
					if (yp != y)yp -= h;
					else
					{
						yp = y + h * (sl - 1);
					}
				}
				else if (c == 80)
				{
					if (yp != y + h * (sl - 1))yp += h;
					else
					{
						yp = y;
					}
				}
			}
			if (c == 13 && yp == y + 3 * h)
			{

				TextColor(0);
				system("cls");
				//XoaManHinh();
				menu();


			}
			if (c == 13 && yp == y)
			{
				//slsp += 1;
				TextColor(0);
				system("cls");
				//cin.ignore();
				menu11();
			}
			if (c == 13 && yp == y + h)
			{

				menu12();

			}
			if (c == 13 && yp == y + 2 * h)
			{
				TextColor(0);
				system("cls");
				menu13(7);
			}
		}
		//---- speed ----
	}
}
void n_box_dai(int x, int y, int w, int h, int t_color, int b_color, char nd[][30], int sl)
{

	for (int i = 0; i < sl; i++)
	{
		box(x + (i * w), y, w, h, t_color, b_color, nd[i]);
		if (i != 0)
		{
			gotoXY(x + (i * w), y); cout << char(194);
			gotoXY(x + (i * w), y + h); cout << char(193);
		}
	}
}
void box11(int x, int y, int w, int h, int t_color)
{
	TextColor(t_color);
	//setColor(t_color);//update
	if (h <= 1 || w <= 1)return;
	for (int ix = x; ix <= x + w; ix++)
	{
		gotoXY(ix, y);
		cout << char(196);
		gotoXY(ix, y + h);
		cout << char(196);
	}
	for (int iy = y; iy <= y + h; iy++)
	{
		gotoXY(x, iy);
		cout << char(179);
		gotoXY(x + w, iy);
		cout << char(179);
	}
	gotoXY(x, y); cout << char(218);
	gotoXY(x + w, y); cout << char(191);
	gotoXY(x, y + h); cout << char(192);
	gotoXY(x + w, y + h); cout << char(217);

}
void menu11()
{  
	int sl = 6;
	ds_sp d;
	d.docFile();
	box11(45, 1, 40, 2, 2);
	vietChuoi(53, 2, "THEM THONG TIN SAN PHAM", 7);
	n_box_dai(10, 5, 13, 2, 2, 5, nd7, sl);
	box11(10, 7, 13 * sl, 2 * 10, 2);
	gotoXY(10, 7); cout << char(195);
	gotoXY(10 + sl * 13, 7); cout << char(180);
	for (int i = 1; i <= sl; i++)
	{
		for (int iy = 6; iy <= 6 + 2 * 10; iy++)
		{
			gotoXY(10 + 13 * i, iy);
				cout << char(179);

		}
	}
	int g = 1;
	while (g == 1)
	{
		
		TextColor(7);
		gotoXY(12, 8);
		cout << d.getSLSP()+1;
		san_pham x;
		string a = d.tao_masp();
		gotoXY(12 + 13, 8);
		cout << a;
		d.themsp(x, a);
		int result;
		char h1[30] = "Ban co muon them tiep khong";
		char h2[30] = "Thong bao";
		result = MessageBox(NULL, convertCharArrayToLPCWSTR(h1), convertCharArrayToLPCWSTR(h2), MB_OKCANCEL);
		if (result == IDOK)
		{

			for (int i = 0; i <= 6; i++)
			{
				gotoXY(12 + i * 13, 8);
				cout << "        ";
			}
			
			
		}
		else
		{
			d.ghiFile();
			g = 0;
			TextColor(0);
			system("cls");
			menu();
		}
	}
	


}
void menu13(int sl)
{
	ds_sp d;
	d.docFile();
	box11(45, 1, 40, 2, 2);
	vietChuoi(53, 2, "Danh Muc San Pham", 7);
	n_box_dai(10, 5, 13, 2, 2, 5, nd8, sl);
	box11(10, 7, 13 * sl, 2 * 10, 2);
	gotoXY(10, 7); cout << char(195);
	gotoXY(10 + sl * 13, 7); cout << char(180);
	for (int i = 1; i <= sl; i++)
	{
		for (int iy = 6; iy <= 6 + 2 * 10; iy++)
		{
			gotoXY(10 + 13 * i, iy);
			cout << char(179);

		}
	}
	TextColor(7);
	d.inds();
	
	vietChuoi(4, 2, "An ESC de ve MeNu!!", 1);
	//gotoXY(12, 9);
	char key_press;
	int ascii_value;

	while (1)
	{
		key_press = _getch();
		ascii_value = key_press;
		if (ascii_value == 27) {
			TextColor(0);
			system("cls");
			menu();
		} // For ESC


	}

}
void menu12()
{
	ds_sp d;
	d.docFile();
	//ShowCur(0);
	int x = 70;
	int y = 7;
	int w = 22;
	int h = 3;
	int t_color = 2;
	int b_color = 5;
	int b_color_sang = 75;
	int sl = 2;
	n_box(x, y, w, h, t_color, b_color, nf, sl);

	//-------------
	int xp = x; int yp = y;//tọa độ thanh sáng
	int xcu = xp; int ycu = yp;
	bool kt = true;
	while (true)
	{
		//------ in ----
		if (kt == true)
		{
			//----- back space ----
			gotoXY(xcu, ycu);
			thanh_sang1(xcu, ycu, w, h, b_color, nf);//rs thanh sang cu
			xcu = xp; ycu = yp;
			//-------------
			thanh_sang1(xp, yp, w, h, b_color_sang, nf);
			kt = false;
		}
		//----- dieu khien ---- //----- di chuyen ----
		if (_kbhit())
		{
			char c = _getch();
			if (c == -32)
			{
				kt = true;// đã bấm
				c = _getch();
				if (c == 72)
				{
					if (yp != y)yp -= h;
					else
					{
						yp = y + h * (sl - 1);
					}
				}
				else if (c == 80)
				{
					if (yp != y + h * (sl - 1))yp += h;
					else
					{
						yp = y;
					}
				}
			}
			if (c == 13 && yp == y)
			{

				TextColor(0);
				system("cls");
				vietChuoi(10, 2, "Nhap Ma SP can xoa: ", 7);
				string MSp;
				gotoXY(30, 2);
				cin >> MSp;
				d.xoasp(MSp);
				//d.ghiFile();
				
			}
			if (c == 13 && yp == y + h)
			{
				TextColor(0);
				system("cls");
				vietChuoi(10, 2, "Nhap Ma SP thay doi: ", 7);
				string MSp;
				gotoXY(30, 2);
				cin >> MSp;
				
				d.thaydoi(MSp);
				int result;
				char h1[30] = "Thay doi thanh cong";
				char h2[30] = "Thong bao";
				result = MessageBox(NULL, convertCharArrayToLPCWSTR(h1), convertCharArrayToLPCWSTR(h2), MB_OKCANCEL);
				if (result == IDOK)
				{
					TextColor(0);
					system("cls");
					menu();
				}
				else
				{
					exit(0);
				}
				//cout << endl;
				
				//string tt;
				
				
			}
		}
		//---- speed ----
	}
}
void menu2()
{
	//ShowCur(0);
	int x = 40;
	int y = 5;
	int w = 22;
	int h = 3;
	int t_color = 2;
	int b_color = 5;
	int b_color_sang = 75;

	int sl = 3;
	n_box(x, y, w, h, t_color, b_color, nd3, sl);



	//-------------
	int xp = x; int yp = y;//tọa độ thanh sáng
	int xcu = xp; int ycu = yp;
	bool kt = true;
	while (true)
	{
		//------ in ----
		if (kt == true)
		{
			//----- back space ----
			gotoXY(xcu, ycu);
			thanh_sang(xcu, ycu, w, h, b_color, nd3);//rs thanh sang cu
			xcu = xp; ycu = yp;
			//-------------
			thanh_sang(xp, yp, w, h, b_color_sang, nd3);
			kt = false;
		}
		//----- dieu khien ---- //----- di chuyen ----
		if (_kbhit())
		{
			char c = _getch();
			if (c == -32)
			{
				kt = true;// đã bấm
				c = _getch();
				if (c == 72)
				{
					if (yp != y)yp -= h;
					else
					{
						yp = y + h * (sl - 1);
					}
				}
				else if (c == 80)
				{
					if (yp != y + h * (sl - 1))yp += h;
					else
					{
						yp = y;
					}
				}
			}
			if (c == 13 && yp == y + 1 * h)
			{
				TextColor(0);
				system("cls");
				//XoaManHinh();
				menu22();


			}
			if (c == 13 && yp == y + 2 * h)
			{
				TextColor(0);
				system("cls");
				//XoaManHinh();
				menu();


			}
			if (c == 13 && yp == y)
			{
				TextColor(0);
				system("cls");
				menu21();
			}
		}

		//---- speed ----
	}
	//menu1();
}
void menu3()
{
	//ShowCur(0);
	int x = 40;
	int y = 5;
	int w = 22;
	int h = 3;
	int t_color = 2;
	int b_color = 5;
	int b_color_sang = 75;

	int sl = 3;
	n_box(x, y, w, h, t_color, b_color, nd4, sl);



	//-------------
	int xp = x; int yp = y;//tọa độ thanh sáng
	int xcu = xp; int ycu = yp;
	bool kt = true;
	while (true)
	{
		//------ in ----
		if (kt == true)
		{
			//----- back space ----
			gotoXY(xcu, ycu);
			thanh_sang(xcu, ycu, w, h, b_color, nd4);//rs thanh sang cu
			xcu = xp; ycu = yp;
			//-------------
			thanh_sang(xp, yp, w, h, b_color_sang, nd4);
			kt = false;
		}
		//----- dieu khien ---- //----- di chuyen ----
		if (_kbhit())
		{
			char c = _getch();
			if (c == -32)
			{
				kt = true;// đã bấm
				c = _getch();
				if (c == 72)
				{
					if (yp != y)yp -= h;
					else
					{
						yp = y + h * (sl - 1);
					}
				}
				else if (c == 80)
				{
					if (yp != y + h * (sl - 1))yp += h;
					else
					{
						yp = y;
					}
				}
			}
			if (c == 13 && yp == y + 2 * h)
			{
				TextColor(0);
				system("cls");
				menu();


			}
			if (c == 13 && yp == y + 1 * h)
			{
				TextColor(0);
				system("cls");
				menu_qlhd();
			}
			if (c == 13 && yp == y)
			{
				menu_kh();
			}
		}
		//---- speed ----
	}
}
void menu4()
{
	//ShowCur(0);
	int x = 40;
	int y = 5;
	int w = 22;
	int h = 3;
	int t_color = 2;
	int b_color = 5;
	int b_color_sang = 75;

	int sl = 4;
	n_box(x, y, w, h, t_color, b_color, nd5, sl);



	//-------------
	int xp = x; int yp = y;//tọa độ thanh sáng
	int xcu = xp; int ycu = yp;
	bool kt = true;
	while (true)
	{
		//------ in ----
		if (kt == true)
		{
			//----- back space ----
			gotoXY(xcu, ycu);
			thanh_sang(xcu, ycu, w, h, b_color, nd5);//rs thanh sang cu
			xcu = xp; ycu = yp;
			//-------------
			thanh_sang(xp, yp, w, h, b_color_sang, nd5);
			kt = false;
		}
		//----- dieu khien ---- //----- di chuyen ----
		if (_kbhit())
		{
			char c = _getch();
			if (c == -32)
			{
				kt = true;// đã bấm
				c = _getch();
				if (c == 72)
				{
					if (yp != y)yp -= h;
					else
					{
						yp = y + h * (sl - 1);
					}
				}
				else if (c == 80)
				{
					if (yp != y + h * (sl - 1))yp += h;
					else
					{
						yp = y;
					}
				}
			}
			if (c == 13 && yp == y + 3 * h)
			{

				XoaManHinh();
				menu();


			}
		}
		//---- speed ----
	}
}
void menu5()
{
	//ShowCur(0);
	int x = 40;
	int y = 5;
	int w = 22;
	int h = 3;
	int t_color = 2;
	int b_color = 5;
	int b_color_sang = 75;

	int sl = 3;
	n_box(x, y, w, h, t_color, b_color, nd6, sl);



	//-------------
	int xp = x; int yp = y;//tọa độ thanh sáng
	int xcu = xp; int ycu = yp;
	bool kt = true;
	while (true)
	{
		//------ in ----
		if (kt == true)
		{
			//----- back space ----
			gotoXY(xcu, ycu);
			thanh_sang(xcu, ycu, w, h, b_color, nd6);//rs thanh sang cu
			xcu = xp; ycu = yp;
			//-------------
			thanh_sang(xp, yp, w, h, b_color_sang, nd6);
			kt = false;
		}
		//----- dieu khien ---- //----- di chuyen ----
		if (_kbhit())
		{
			char c = _getch();
			if (c == -32)
			{
				kt = true;// đã bấm
				c = _getch();
				if (c == 72)
				{
					if (yp != y)yp -= h;
					else
					{
						yp = y + h * (sl - 1);
					}
				}
				else if (c == 80)
				{
					if (yp != y + h * (sl - 1))yp += h;
					else
					{
						yp = y;
					}
				}
			}
			if (c == 13 && yp == y)
			{
				TextColor(0);
				system("cls");
				cin.ignore();
				menu_themnv();
			}
			if (c == 13 && yp == y+h)
			{
				TextColor(0);
				system("cls");
				menu51();
			}
			if (c == 13 && yp == y + 2 * h)
			{
				TextColor(0);
				system("cls");
				//XoaManHinh();
				menu();


			}
		}
		//---- speed ----
	}
}
void menu51()
{
	ds_nv p;
	p.docFile();
	int sl = 8;
	box11(45, 1, 40, 2, 2);
	vietChuoi(53, 2, "Danh Sach Nhan Vien", 7);
	n_box_dai(10, 5, 13, 2, 2, 5, nd9, sl);
	box11(10, 7, 13 * sl, 2 * 10, 2);
	gotoXY(10, 7); cout << char(195);
	gotoXY(10 + sl * 13, 7); cout << char(180);
	for (int i = 1; i <= sl; i++)
	{
		for (int iy = 6; iy <= 6 + 2 * 10; iy++)
		{
			gotoXY(10 + 13 * i, iy);
			cout << char(179);

		}
	}
	p.in();
	vietChuoi(4, 2, "An ESC de ve MeNu!!", 1);
	//gotoXY(12, 9);
	char key_press;
	int ascii_value;

	while (1)
	{
		key_press = _getch();
		ascii_value = key_press;
		if (ascii_value == 27) {
			TextColor(0);
			system("cls");
			menu();
		} // For ESC


	}
}
void menu()
{
	//ShowCur(0);
	box1(35, 3, 80, 25, 2);
	//gotoXY(40, 20);
	//cout << "hello";
	box1(0, 0, 117, 29, 2);
	char r[30] = "Chuong trinh quan ly ban hang";
	box(50, 0, 30, 2, 10, 10, r);
	//menu1();

	//----- setting ----
	int x = 15;
	int y = 3;
	int w = 18;
	int h = 5;
	int t_color = 2;
	int b_color = 5;
	int b_color_sang = 75;
	int sl = 5;
	n_box(x, y, w, h, t_color, b_color, nd1, sl);
	//-------------
	int xp = x; int yp = y;//tọa độ thanh sáng
	int xcu = xp; int ycu = yp;
	bool kt = true;
	while (true)
	{
		//------ in ----
		if (kt == true)
		{
			//----- back space ----
			gotoXY(xcu, ycu);
			thanh_sang(xcu, ycu, w, h, b_color, nd1);//rs thanh sang cu
			xcu = xp; ycu = yp;
			//-------------
			thanh_sang(xp, yp, w, h, b_color_sang, nd1);
			kt = false;
		}
		//----- dieu khien ---- //----- di chuyen ----
		if (_kbhit())
		{
			char c = _getch();
			if (c == -32)
			{
				kt = true;// đã bấm
				c = _getch();
				if (c == 72)
				{
					if (yp != y)yp -= h;
					else
					{
						yp = y + h * (sl - 1);
					}
				}
				else if (c == 80)
				{
					if (yp != y + h * (sl - 1))yp += h;
					else
					{
						yp = y;
					}
				}
			}
			if (c == 13 && yp == y)
			{
				menu1();

			}
			if (c == 13 && yp == y + h)
			{
				menu2();
			}
			if (c == 13 && yp == y + 2 * h)
			{
				menu3();
			}
			if (c == 13 && yp == y + 3 * h)
			{
				menu5();
			}
			if (c == 13 && yp == y + 4 * h)
			{
				exit(0);
			}
			
		}
		//---- speed ----
	}
	//menu1();
}
void menu_chinh()
{
	int x = 40;
	int y = 5;
	int w = 22;
	int h = 3;
	int t_color = 2;
	int b_color = 5;
	int b_color_sang = 75;

	int sl = 2;
	n_box(x, y, w, h, t_color, b_color, nd_chinh, sl);



	//-------------
	int xp = x; int yp = y;//tọa độ thanh sáng
	int xcu = xp; int ycu = yp;
	bool kt = true;
	while (true)
	{
		//------ in ----
		if (kt == true)
		{
			//----- back space ----
			gotoXY(xcu, ycu);
			thanh_sang(xcu, ycu, w, h, b_color, nd_chinh);//rs thanh sang cu
			xcu = xp; ycu = yp;
			//-------------
			thanh_sang(xp, yp, w, h, b_color_sang, nd_chinh);
			kt = false;
		}
		//----- dieu khien ---- //----- di chuyen ----
		if (_kbhit())
		{
			char c = _getch();
			if (c == -32)
			{
				kt = true;// đã bấm
				c = _getch();
				if (c == 72)
				{
					if (yp != y)yp -= h;
					else
					{
						yp = y + h * (sl - 1);
					}
				}
				else if (c == 80)
				{
					if (yp != y + h * (sl - 1))yp += h;
					else
					{
						yp = y;
					}
				}
			}
			if (c == 13 && yp == y + h)
			{

				TextColor(0);
				system("cls");
				tao_tk();
			}
			if (c == 13 && yp == y)
			{
				TextColor(0);
				system("cls");
				menu_kh();
			}
		}
		//---- speed ----
	}
}
void tao_tk()
{
	int x = 40;
	int y = 5;
	int w = 22;
	int h = 2;
	int t_color = 2;
	int b_color = 5;
	int b_color_sang = 75;

	int sl = 2;
	n_box(x, y, w, h, t_color, b_color, nd_tk, sl);
	vietChuoi(29, 6, "Tai Khoan: ", 7);
	vietChuoi(30, 8, "Mat Khau: ", 7);
	string tk, mk;
	tk = "doanpbl";
	mk = "nguyenandle";
	string tk1, mk1;
	
	int k = 0;
	while (k == 0)
	{
		gotoXY(41, 6); cin >> tk1;
		gotoXY(41, 8); mk1 = getPass();
		if (tk1 != tk || mk1 != mk)
		{
			int result;
			char h1[30] = "Khong chinh xac";
			char h2[30] = "Thong bao";
			result = MessageBox(NULL, convertCharArrayToLPCWSTR(h1), convertCharArrayToLPCWSTR(h2), MB_OKCANCEL);
			if (result == IDOK)
			{

				gotoXY(41, 6); cout << "               ";
				gotoXY(41, 8); cout << "               ";
				

			}
			else
			{
				k = 1;
				TextColor(0);
				system("cls");
				break;
			}
		}
		if (tk == tk1 && mk == mk1)
		{
			TextColor(0);
			system("cls");
			menu();
		}
	}

}
string getPass()
{
	string password;
	char ch;
	while ((ch = _getch()) != 13)
	{
		if (ch == 8)
		{
			if (password.length() > 0)
			{
				cout << "\b \b";
				password.resize(password.length() - 1);
			}
		}
		else
		{
			password += ch;
			cout << "*";
		}
	}
	return password;
}
void menu_kh()
{
	TextColor(0);
	system("cls");
	int x = 40;
	int y = 5;
	int w = 22;
	int h = 3;
	int t_color = 2;
	int b_color = 5;
	int b_color_sang = 75;

	int sl = 2;
	n_box(x, y, w, h, t_color, b_color, nd_kh, sl);



	//-------------
	int xp = x; int yp = y;//tọa độ thanh sáng
	int xcu = xp; int ycu = yp;
	bool kt = true;
	while (true)
	{
		//------ in ----
		if (kt == true)
		{
			//----- back space ----
			gotoXY(xcu, ycu);
			thanh_sang(xcu, ycu, w, h, b_color, nd_kh);//rs thanh sang cu
			xcu = xp; ycu = yp;
			//-------------
			thanh_sang(xp, yp, w, h, b_color_sang, nd_kh);
			kt = false;
		}
		//----- dieu khien ---- //----- di chuyen ----
		if (_kbhit())
		{
			char c = _getch();
			if (c == -32)
			{
				kt = true;// đã bấm
				c = _getch();
				if (c == 72)
				{
					if (yp != y)yp -= h;
					else
					{
						yp = y + h * (sl - 1);
					}
				}
				else if (c == 80)
				{
					if (yp != y + h * (sl - 1))yp += h;
					else
					{
						yp = y;
					}
				}
			}
			if (c == 13 && yp == y)
			{
				TextColor(0);
				system("cls");
				menu_chuamuahang();
			}
			if (c == 13 && yp == y + 1 * h)
			{
				TextColor(0);
				system("cls");
				menu_damuahang();
				


			}
		}
		//---- speed ----
	}
}
void menu_chuamuahang()
{
	int x = 20;
	int y = 3;
	int w = 22;
	int h = 2;
	int t_color = 2;
	int b_color = 5;
	int b_color_sang = 75;
	int sl = 2;
	n_box(x, y, w, h, t_color, b_color, nd_tk, sl);
	vietChuoi(10, 4, "Ho va Ten:", 7);
	vietChuoi(12, 6, "SDT:", 7);
	ds_kh p;
	p.docFile();
	p.them_kh();
	string b = p.getSdt(p.getsl());
	p.ghiFile();
	TextColor(0);
	system("cls");
	menu_muahang(b);

}
void menu_muahang(string b)
{

	int x = 93;
	int y = 5;
	int w = 22;
	int h = 2;
	int t_color = 2;
	int b_color = 5;
	int b_color_sang = 75;
	int sl = 5;
	ds_sp d;
	d.docFile();
	box11(15, 1, 35, 2, 2);
	vietChuoi(23, 2, "Danh Muc San Pham", 7);
	vietChuoi(88, 6, "MASP: ", 7);
	vietChuoi(84, 8, "So luong: ", 7);
	box11(82, 1, 20, 2, 2);
	vietChuoi(90, 2, "Don Hang", 7);
	n_box_dai(10, 5, 13, 2, 2, 5, nd_muahang, sl);
	box11(10, 7, 13 * sl, 2 * 10, 2);
	gotoXY(10, 7); cout << char(195);
	gotoXY(10 + sl * 13, 7); cout << char(180);
	for (int i = 1; i <= sl; i++)
	{
		for (int iy = 6; iy <= 6 + 2 * 10; iy++)
		{
			gotoXY(10 + 13 * i, iy);
			cout << char(179);

		}
	}
	TextColor(7);
	d.inds1();
	n_box(x, y, w, h, t_color, b_color, nd_tk, 2);
	n_box_dai(82, 11, w-6, h, t_color, b_color, nd_bang, 2);
	box11(82,13, 16 * 2, 2 * 6, 2);
	gotoXY(82, 13); cout << char(195);
	gotoXY(82 + 2 * 16, 13); cout << char(180);
	for (int iy = 13; iy <= 13 + 2 * 6-1; iy++)
	{
		gotoXY(82 + 16 * 1, iy);
		cout << char(179);
	}
	ds_dh j;
	j.docFile();
	string g = j.tao_madh();
	don_hang t;
	j.themdh(t, g, b);
	j.ghiFile();
	

	vietChuoi(3, 4, "An ESC de In hoa don", 6);
	char key_press;
	int ascii_value;

	while (1)
	{
		key_press = _getch();
		ascii_value = key_press;
		if (ascii_value == 27) {
			TextColor(0);
			system("cls");
			inHD(g);
			menu_hoadon(g);
			
		} // For ESC

	}

}
void menu_damuahang()
{
	string sdt;
	vietChuoi(16, 5, "SDT:  ", 7);
	box1(20, 4, 25, 2, 2);
	TextColor(7);
	ds_kh p;
	p.docFile();
	int k = 1;
	while (k == 1)
	{
		gotoXY(22, 5); cin >> sdt;
		if (p.timSdt(sdt) == -1)
		{
			int result;
			char h1[30] = "SDT khong ton tai";
			char h2[30] = "Thong bao";
			result = MessageBox(NULL, convertCharArrayToLPCWSTR(h1), convertCharArrayToLPCWSTR(h2), MB_OKCANCEL);
			if (result == IDOK)
			{
				
				gotoXY(22, 5); cout << "          ";

			}
			else
			{
				k = 0;
				TextColor(0);
				system("cls");
				menu_chinh();

			}
		}
		else
		{
			TextColor(0);
			system("cls");
			menu_muahang(sdt);
		}
	}
	

}
void menu21()
{
	string sdt;
	vietChuoi(16, 5, "SDT:  ", 7);
	box1(20, 4, 25, 2, 2);
	TextColor(7);
	ds_kh p;
	p.docFile();
	int k = 1;
	while (k == 1)
	{
		gotoXY(22, 5); cin >> sdt;
		if (p.timSdt(sdt) == -1)
		{
			int result;
			char h1[30] = "SDT khong ton tai";
			char h2[30] = "Thong bao";
			result = MessageBox(NULL, convertCharArrayToLPCWSTR(h1), convertCharArrayToLPCWSTR(h2), MB_OKCANCEL);
			if (result == IDOK)
			{

				gotoXY(22, 5); cout << "          ";

			}
			else
			{
				k = 0;
				TextColor(0);
				system("cls");
				menu();

			}
		}
		else
		{
			TextColor(0);
			system("cls");
			vietChuoi(2, 2, "Thong tin can thay doi", 7);
			int x = 40;
			int y = 5;
			int w = 22;
			int h = 3;
			int t_color = 2;
			int b_color = 5;
			int b_color_sang = 75;
			int sl = 2;
			n_box(x, y, w, h, t_color, b_color, nd_thaydoi, sl);
			int xp = x; int yp = y;//tọa độ thanh sáng
			int xcu = xp; int ycu = yp;
			bool kt = true;
			while (true)
			{
				//------ in ----
				if (kt == true)
				{
					//----- back space ----
					gotoXY(xcu, ycu);
					thanh_sang(xcu, ycu, w, h, b_color, nd_thaydoi);//rs thanh sang cu
					xcu = xp; ycu = yp;
					//-------------
					thanh_sang(xp, yp, w, h, b_color_sang, nd_thaydoi);
					kt = false;
				}
				//----- dieu khien ---- //----- di chuyen ----
				if (_kbhit())
				{
					char c = _getch();
					if (c == -32)
					{
						kt = true;// đã bấm
						c = _getch();
						if (c == 72)
						{
							if (yp != y)yp -= h;
							else
							{
								yp = y + h * (sl - 1);
							}
						}
						else if (c == 80)
						{
							if (yp != y + h * (sl - 1))yp += h;
							else
							{
								yp = y;
							}
						}
					}

					if (c == 13 && yp == y + 1 * h)
					{
						TextColor(0);
						system("cls");
						//XoaManHinh();
						//menu();
						vietChuoi(16, 5, "Ten truoc thay doi:  ", 7);
						vietChuoi(16, 8, "Ten muon thay doi:", 7);
						string name = p.getName(sdt);
						gotoXY(36, 5); cout << name;
						box1(35, 4, 25, 2, 2);
						box1(35, 7, 25, 2, 2);
						TextColor(7);
						string nametd;
						gotoXY(36, 8); 
						cin.ignore(); getline(cin, nametd);
						//cin.ignore();
						p.set_name(sdt, nametd);
						p.ghiFile();
						int result;
						char h1[30] = "Thay doi thanh cong";
						char h2[30] = "Thong bao";
						result = MessageBox(NULL, convertCharArrayToLPCWSTR(h1), convertCharArrayToLPCWSTR(h2), MB_OK);
						if (result == IDOK)
						{
							TextColor(0);
							system("cls");
							menu();
						}


					}
					if (c == 13 && yp == y)
					{
						TextColor(0);
						system("cls");
						//XoaManHinh();
						//menu();
						vietChuoi(16, 5, "SDT truoc thay doi:  ", 7);
						vietChuoi(16, 8, "SDT muon thay doi:", 7);
						//string name = p.getName(sdt);
						gotoXY(36, 5); cout << sdt;
						box1(35, 4, 25, 2, 2);
						box1(35, 7, 25, 2, 2);
						TextColor(7);
						string sdttd;
						gotoXY(36, 8); cin >> sdttd;
						p.set_sdt(sdt, sdttd);
						p.ghiFile();
						int result;
						char h1[30] = "Thay doi thanh cong";
						char h2[30] = "Thong bao";
						result = MessageBox(NULL, convertCharArrayToLPCWSTR(h1), convertCharArrayToLPCWSTR(h2), MB_OK);
						if (result == IDOK)
						{
							TextColor(0);
							system("cls");
							menu();
						}
						
					}
				}

				//---- speed ----
			}

		}
	}
}
void menu22()
{
	ds_kh p;
	//ds_dh d;
	//d.docFile();
	p.docFile();
	int sl = 5;
	box11(45, 1, 40, 2, 2);
	vietChuoi(53, 2, "Danh Sach khach hang", 7);
	n_box_dai(10, 5, 19, 2, 2, 5, nd_qlkh, sl);
	box11(10, 7, 19 * sl, 2 * 10, 2);
	gotoXY(10, 7); cout << char(195);
	gotoXY(10 + sl * 19, 7); cout << char(180);
	for (int i = 1; i <= sl; i++)
	{
		for (int iy = 6; iy <= 6 + 2 * 10; iy++)
		{
			gotoXY(10 + 19 * i, iy);
			cout << char(179);

		}
	}
	TextColor(7);
	p.in();
	vietChuoi(4, 2, "An ESC de ve MeNu!!", 1);
	vietChuoi(4, 3, "An TAB de biet chi tiet!!", 1);
	//gotoXY(12, 9);
	char key_press;
	int ascii_value;

	while (1)
	{
		key_press = _getch();
		ascii_value = key_press;
		if (ascii_value == 27) {
			TextColor(0);
			system("cls");
			menu();
		} // For ESC
		else if (ascii_value == 9)
		{
			TextColor(7);
			vietChuoi(5, 4, "Nhap SDT: ", 6);
			string t;
			while (p.timSdt(t) == -1)
			{
				gotoXY(15, 4); cout << "            ";
				gotoXY(15, 4); cin >> t;
			}
			TextColor(0);
			system("cls");
			
			menu23(t);
		}


	}
}
void menu23(string a)
{
	ds_dh p;
	p.docFile();
	ds_kh d;
	d.docFile();
	ds_sp t;
	t.docFile();
	int sl = 4;
	box11(45, 1, 40, 2, 2);
	vietChuoi(53, 2, "Danh Sach don hang", 7);
	n_box_dai(10, 5, 19, 2, 2, 5, nd_qldh, sl);
	box11(10, 7, 19 * sl, 2 * 10, 2);
	gotoXY(10, 7); cout << char(195);
	gotoXY(10 + sl * 19, 7); cout << char(180);
	for (int i = 1; i <= sl; i++)
	{
		for (int iy = 6; iy <= 6 + 2 * 10; iy++)
		{
			gotoXY(10 + 19 * i, iy);
			cout << char(179);
		}
	}
	TextColor(7);
	vietChuoi(90, 5, "Ho va Ten: ", 7);
	vietChuoi(90, 6, "So dien thoai: ", 7);
	gotoXY(105, 5); cout << d.getName(a);
	gotoXY(105, 6); cout << a;
	//int pos = d.timSdt(a);
	int sl1 = p.demDh(a);
	for (int i = 1; i <= sl1; i++)
	{
		gotoXY(13, 8 + 2*i - 2); cout << i;
		
	}
	p.in(a);
	vietChuoi(4, 2, "An ESC de ve MeNu!!", 1);
	vietChuoi(4, 3, "An TAB de biet chi tiet!!", 1);
	char key_press;
	int ascii_value;

	while (1)
	{
		key_press = _getch();
		ascii_value = key_press;
		if (ascii_value == 27) {
			TextColor(0);
			system("cls");
			menu();
		} // For ESC
		if (ascii_value == 9)
		{
			menu_ctdh();


			
		}


	}
	

}
void menu_hoadon(string a)
{

	ds_dh p;
	p.docFile();
	ds_kh d;
	d.docFile();
	ds_sp t;
	t.docFile();
	
	vietChuoi(40, 1, "TRUONG DAI HOC BACH KHOA DA NANG", 2);
	vietChuoi(40, 2, "D/C    :54 Nguyen Luong Bang - Lien Chieu - Da Nang", 2);
	vietChuoi(40, 3, "DT     :02363842308", 2);
	vietChuoi(45, 5, "HOA DON BAN LE", 3);
	vietChuoi(75, 6, "Ma Don Hang: " + a, 3);
	vietChuoi(15, 7, "Ten Khach Hang: ", 7);
	gotoXY(30, 7); cout << d.getName(p.getSdt(a));
	//gotoXY(30, 8); cout << d.getAdd(p.getSdt(a));
	gotoXY(30, 8); cout << p.getSdt(a);
	vietChuoi(15, 8, "So Dien Thoai: ", 7);
	//vietChuoi(15, 8, "Dia Chi: ", 7);
	n_box_dai(15, 10, 15, 2, 7, 7, nd_hoadon, 5);
	box11(15, 12, 15*5, 2*10, 7);
	gotoXY(15, 12); cout << char(195);
	gotoXY(58 + 2 * 16, 12); cout << char(180);
	for (int i = 0; i <= 60; i = i + 15)
	{
		for (int iy = 13; iy <= 20 + 2 * 6 - 1; iy++)
		{
			gotoXY(30 + i, iy);
			cout << char(179);
		}
	}
	
	for (int i = 1; i <= 10; i++)
	{
		gotoXY(16, 11 + i*2);
		cout << i;
	}
	vietChuoi(16, 33, "Tong Cong:", 7);
	vietChuoi(20, 35, "Khach Hang", 7);
	vietChuoi(70, 35, "Nguoi Ban", 7);
	
	
	int slsp = p.getSlsp(a);
	for (int i = 1; i <= slsp; i++)
	{
		gotoXY(32, 13+2*i-2);
		cout << t.getName(p.getMsp(a, i));
		gotoXY(32 + 15, 13 + 2 * i - 2);
		cout << p.getSlspmua(a, i);
		gotoXY(32 + 15 + 15, 13 + 2 * i - 2);
		cout << t.get_gia_ban(p.getMsp(a, i));
		gotoXY(32 + 15 + 15 + 15, 13 + 2 * i - 2);
		cout << p.getSlspmua(a, i) * t.get_gia_ban(p.getMsp(a, i));
	}
	gotoXY(30, 33); cout << p.getTien(a);
	vietChuoi(3, 4, "An ESC de ve MeNu", 6);
	char key_press;
	int ascii_value;

	while (1)
	{
		key_press = _getch();
		ascii_value = key_press;
		if (ascii_value == 27) {
			TextColor(0);
			system("cls");
			menu_chinh();
		} // For ESC

	}

}
void inHD(string a)
{
	ds_dh p;
	p.docFile();
	ds_kh d;
	d.docFile();
	ds_sp t;
	t.docFile();
	ofstream fileout;
	fileout.open("HoaDon.txt", ios_base::out);
	fileout << "                 TRUONG DAI HOC BACH KHOA DA NANG" << endl;
	fileout << "                 D/C    :54 Nguyen Luong Bang - Lien Chieu - Da Nang"<<endl;
	fileout << "                 DT     :02363842308\n\n";
	fileout << "                                HOA DON BAN LE" << endl;
	fileout << "                                                            Ma Don Hang: " + a << endl;
	fileout << "     Ten Khach Hang: " + d.getName(p.getSdt(a)) << endl;
	fileout << "     So Dien Thoai: " + p.getSdt(a) << endl;
	fileout << "              ----------------------------------------------------------------------" << endl;
	int slsp = p.getSlsp(a);
	fileout << "             |";
	fileout << "      STT    |";
	fileout << "    Ten SP   |";
	fileout << "   So Luong  |";
	fileout << "   Don Gia   |";
	fileout << "  Thanh Tien |";
	fileout << endl;
	for (int i = 1; i <= slsp; i++)
	{
		fileout << "             |";
		fileout << "      " << i << "      "; 
		fileout << "     " << t.getName(p.getMsp(a, i)) << "       " << p.getSlspmua(a, i) << "              " << t.get_gia_ban(p.getMsp(a, i)) << "              " << p.getSlspmua(a, i) * t.get_gia_ban(p.getMsp(a, i));
		fileout << endl;
		
	}
	fileout << "             ------------------------------------------------------------------------" << endl;
	fileout << "       Tong Cong: " << p.getTien(a) << endl << endl << endl;
	fileout << "          Khach Hang                                          " << "Nguoi tao HD";
	fileout.close();
}
void menu_ctdh()
{
	string mdh;
	box1(103, 9, 13, 2, 6);
	gotoXY(90, 10);
	cout << "Nhap Ma DH:"; 
	
	
	ds_dh p;
	p.docFile();
	ds_sp d;
	d.docFile();
	ds_kh t;
	t.docFile();
	
	while (!p.checkMdh(mdh))
	{
		gotoXY(104, 10); cout << "      ";
		gotoXY(104, 10); cin >> mdh;
	}
	TextColor(7);
	system("cls");
	gotoXY(90, 10);
	cout << "Nhap Ma DH:    " << mdh;
	box1(103, 9, 13, 2, 6);
	n_box_dai(10, 5, 19, 2, 2, 5, nd_cthd, 4);
	box11(10, 7, 19 * 4, 2 * 10, 2);
	gotoXY(10, 7); cout << char(195);
	gotoXY(10 + 4 * 19, 7); cout << char(180);
	for (int i = 1; i <= 4; i++)
	{
		for (int iy = 6; iy <= 6 + 2 * 10; iy++)
		{
			gotoXY(10 + 19 * i, iy);
			cout << char(179);
		}
	}
	TextColor(7);
	int k = p.getSlsp(mdh);
	for (int i = 1; i <= k; i++)
	{
		gotoXY(14, 8 + 2*i - 2); cout << i;
		gotoXY(30, 8 + 2 * i - 2); cout << d.getName(p.getMsp(mdh,i));
		gotoXY(52, 8 + 2 * i - 2); cout << p.getSlspmua(mdh, i);
		gotoXY(72, 8 + 2 * i - 2); cout << p.getSlspmua(mdh, i) * d.get_gia_ban(p.getMsp(mdh, i));
	}
	gotoXY(90, 12);	
	cout << "Tong cong: " << p.getTien(mdh);
	vietChuoi(45, 3, "CHI TIET DON HANG", 7);
	gotoXY(90, 6); cout << "Ho va ten: " << t.getName(p.getSdt(mdh));
	gotoXY(90, 8); cout << "So dien thoai: " << p.getSdt(mdh);
	vietChuoi(3, 4, "An ESC de ve MeNu", 6);
	vietChuoi(3, 3, "An Tab de tro ve", 6);
	vietChuoi(3, 2, "An BackSpace de in hoa don", 6);
	char key_press;
	int ascii_value;

	while (1)
	{
		key_press = _getch();
		ascii_value = key_press;
		if (ascii_value == 27) {
			TextColor(0);
			system("cls");
			menu();
		} // For ESC
		if (ascii_value == 9) {
			TextColor(0);
			system("cls");
			menu23(p.getSdt(mdh));
		} // For Tab
		if (ascii_value == 8)
		{
			TextColor(0);
			system("cls");
			inHD(mdh);
			menu_hoadon(mdh);
			
		}


	}
}
void menu_qlhd()
{
	ds_dh p;
	p.docFile();
	ds_kh d;
	d.docFile();
	vietChuoi(10, 3, "Tong Doanh Thu: ", 7); cout << p.getDt();
	vietChuoi(10, 5, "Tong Hoa Don Da Ban: ", 7);cout << p.demDh();
	vietChuoi(10, 7, "Khach Hang Mua Nhieu Nhat: ", 7); cout << d.getName(p.getPerson());
	vietChuoi(32, 9, "SDT: ",7);cout << p.getPerson();
	vietChuoi(32, 11, "Tong Tien Da Mua: ", 7); cout << p.doanhthu(p.getPerson());
	vietChuoi(10, 13, "Hoa Don Co Gia Tri Lon Nhat: ", 7); cout << p.getMax();
	vietChuoi(27, 15, "Ma Hoa Don: ", 7); cout << p.getIdMax();
	vietChuoi(27, 17, "Ho Va Ten: ", 7); cout << d.getName(p.getSdt(p.getIdMax()));
	vietChuoi(27, 19, "So Dien Thoai: ", 7); cout << p.getSdt(p.getIdMax());
	vietChuoi(3, 2, "An ESC de tro ve", 6);
	char key_press;
	int ascii_value;

	while (1)
	{
		key_press = _getch();
		ascii_value = key_press;
		if (ascii_value == 27) {
			TextColor(0);
			system("cls");
			menu();
		} // For ESC
	}
}
void menu_themnv()
{
	int sl = 8;
	ds_nv t;
	t.docFile();
	box11(45, 1, 40, 2, 2);
	vietChuoi(53, 2, "THEM THONG TIN NHAN VIEN", 7);
	n_box_dai(10, 5, 13, 2, 2, 5, ndnv, sl);
	box11(10, 7, 13 * sl, 2 * 10, 2);
	gotoXY(10, 7); cout << char(195);
	gotoXY(10 + sl * 13, 7); cout << char(180);
	for (int i = 1; i <= sl; i++)
	{
		for (int iy = 6; iy <= 6 + 2 * 10; iy++)
		{
			gotoXY(10 + 13 * i, iy);
			cout << char(179);

		}
	}
	int g = 1;
	while (g == 1)
	{
		
		TextColor(7);
		gotoXY(12, 8);
		cout << t.getSl() + 1;
		t.nhap();
		int result;
		char h1[30] = "Ban co muon them tiep khong";
		char h2[30] = "Thong bao";
		result = MessageBox(NULL, convertCharArrayToLPCWSTR(h1), convertCharArrayToLPCWSTR(h2), MB_OKCANCEL);
		if (result == IDOK)
		{

			for (int i = 0; i <= 7; i++)
			{
				gotoXY(12 + i * 13, 8);
				cout << "        ";
			}



		}
		else
		{
			t.ghiFile();
			g = 0;
			TextColor(0);
			system("cls");
			menu();
		}
	}



}
