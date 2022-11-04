#pragma once
#include<ctime>
#include<iostream>
#include<string>
#include<cstdlib>
#include<fstream>
#include"Nguoi.h"
#include"DoHoa.h"
using namespace std;
class nhan_vien:public Person
{
private:
	string ma_nv;
	string chuc_vu;
	

public:
	nhan_vien();
	~nhan_vien();
	friend istream& operator >>(istream&, nhan_vien&);
	friend ostream& operator <<(ostream&, const nhan_vien&);
	void in();
	void set_ma_nv(string a);
	void set_chuc_vu(string);
	string get_ma_nv();
	string get_chuc_vu();
	virtual void nhap();
};
class ds_nv
{
private:
	nhan_vien n[10];
	int sl5;
	
public:
	ds_nv();
	~ds_nv();
	void docFile();
	void ghiFile();
	void in();
	int getSl();
	void nhap();
};
