#include"NhanVien.h"
#include<string>
nhan_vien::nhan_vien():Person()
{
	chuc_vu = "";
	ma_nv = "";
	
	//cmnd = "";
//	name = "";
	//age = 0;
	//dia_chi = "";
	//sdt = "";
}
nhan_vien::~nhan_vien()
{}
istream& operator >>(istream& in, nhan_vien& p)
{
	cout << "Nhap CMND: "; in >> p.cmnd;
	cout << "Nhap ten: "; in >> p.name;
	cout << "Nhap tuoi: "; in >> p.age;
	cout << "Nhap dia chi: "; in >> p.dia_chi;
	cout << "Nhap sdt: "; in >> p.sdt;
	cout << "Nhap chuc vu: "; in >> p.chuc_vu;
	return in;
}
ostream& operator <<(ostream& out, const nhan_vien& p)
{
	out << "CMND: " << p.cmnd << endl;
	out << "Ho va ten: " << p.name << endl;
	out << "Tuoi: " << p.age << endl;
	out << "Dia chi: " << p.dia_chi << endl;
	out << "SDT: " << p.sdt << endl;
	out << "Chuc vu: " << p.chuc_vu << endl;
	return out;
	
}
void nhan_vien::set_chuc_vu(string a)
{
	chuc_vu = a;
}

void nhan_vien::in()
{
	Person::in();
	cout << "Chuc vu: " << chuc_vu << endl;
}
void nhan_vien::set_ma_nv(string a)
{
	ma_nv = a;
}
string nhan_vien::get_chuc_vu()
{
	return chuc_vu;
}
string nhan_vien::get_ma_nv()
{
	return ma_nv;
}
void ds_nv::docFile()
{
	ifstream filein;
	filein.open("DsNhanVien.txt", ios_base::in);
	int i = 1;

	while (filein.eof() != true)
	{
		//cin.ignore();
		string ma_nv = "";
		getline(filein,ma_nv, ',');
		n[i].set_ma_nv(ma_nv);
		string name = "";
		getline(filein, name, ',');
		n[i].setName(name);
		string cmnd = "";
		getline(filein, cmnd, ',');
		n[i].setCmnd(cmnd);
		string diachi = "";
		getline(filein, diachi, ',');
		n[i].setDiaChi(diachi);
		string sdt = "";
		getline(filein, sdt, ',');
		n[i].setSdt(sdt);
		string chucvu = "";
		getline(filein, chucvu, ',');
		n[i].set_chuc_vu(chucvu);
		int age;
		filein >> age;
		n[i].setAge(age);
		i += 1;
		filein.ignore();
		//filein.ignore();
		sl5 += 1;
		//filein.ignore();


	}
	filein.close();
	//sl5 -= 1;
	
	
};
ds_nv::ds_nv()
{
	sl5 = 0;
}
ds_nv::~ds_nv()
{
	sl5 = 0;
}
void ds_nv::in()
{
	TextColor(7);

	for (int i = 1; i <= getSl(); i++)
	{
		gotoXY(12 , 8+i-1); cout << i;
		gotoXY(12 + 13*1, 8+i-1); cout << n[i].getName();
		gotoXY(12 + 13*2, 8 + i - 1); cout << n[i].get_ma_nv();
		gotoXY(12 + 13*3, 8 + i - 1); cout << n[i].getCmnd();
		gotoXY(12 + 13*4, 8 + i - 1); cout << n[i].get_dia_chi();
		gotoXY(12 + 13*5, 8 + i - 1); cout << n[i].get_sdt();
		gotoXY(12 + 13*6, 8 + i - 1); cout << n[i].get_chuc_vu();
		gotoXY(12 + 13*7, 8 + i - 1); cout << n[i].getAge();
	}

	
}
int ds_nv::getSl()
{
	return sl5;
}
void ds_nv::ghiFile()
{
	ofstream fileout;
	fileout.open("DsNhanVien.txt", ios_base::out);
	int i = 1;
	while (i <= sl5)
	{
		fileout << n[i].get_ma_nv() << "," << n[i].getName() << "," << n[i].getCmnd() << "," << n[i].get_dia_chi() << "," << n[i].get_sdt() << "," << n[i].get_chuc_vu() << "," << n[i].getAge();
		i += 1;
		if (i <= sl5)
		{
			fileout << endl;
		}
	}
	fileout.close();
}
void nhan_vien::nhap()
{
	gotoXY(25, 8);
	
	getline(cin , ma_nv);
	//cin.ignore();
	Person::nhap();
	//gotoXY(15, 8); cin >> ma_nv;
	gotoXY(103,8); 
	
	getline( cin , chuc_vu);
	//cin.ignore();
	
}
void ds_nv::nhap()
{
	sl5++;
	n[sl5].nhap();
	
}