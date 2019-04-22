#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d\n", i);
//	cin >> i;
//	cout << i << endl;
//	system("pause");
//	return 0;
//}
struct ServerInfo 
{
	char _ip[32];   // ip   
	int _port;      // �˿� 
};
struct ConfigManager
{
public:
	ConfigManager(const char* configfile = "bitserver.config")
		:_configfile(configfile)
	{
	}
	void WriteBin(const ServerInfo& info)
	{        // ����ע��ʹ�ö����Ʒ�ʽ��д        
		ofstream ofs(_configfile, ifstream::in | ifstream::binary);
		ofs.write((const char*)&info, sizeof(ServerInfo));
		ofs.close();
	}
	void ReadBin(ServerInfo& info)
	{         // ����ע��ʹ�ö����Ʒ�ʽ�򿪶�       
		ifstream ifs(_configfile, ifstream::out | ifstream::binary);
		ifs.read((char*)&info, sizeof(ServerInfo));
		ifs.close();
	}

	void WriteText(const ServerInfo& info)
	{        // ����ᷢ��IO��д���α�C�������׾ͼ򵥶��ˣ�        // C ���Ե��Ȱ�����itoa��д        
		ofstream ofs(_configfile);
		ofs << info._ip << endl;
		ofs << info._port << endl;
		ofs.close();
	}
	void ReadText(ServerInfo& info)
	{
		ifstream ifs(_configfile);
		ifs >> info._ip;
		ifs >> info._port;
		ifs.close();
	}

private:
	string _configfile;
};
int main() 
{
	ConfigManager cfgMgr;
	ServerInfo wtinfo;   
	ServerInfo rdinfo;
	strcpy(wtinfo._ip, "192.168.47.130"); 
	wtinfo._port = 10;

	// �����ƶ�д    
	cfgMgr.WriteBin(wtinfo);
	cfgMgr.ReadBin(rdinfo);  
	cout << rdinfo._ip << endl;
	cout << rdinfo._port << endl;

	// �ı���д
	cfgMgr.WriteText(wtinfo);
	cfgMgr.ReadText(rdinfo);
	cout << rdinfo._ip << endl;
	cout << rdinfo._port << endl;
	system("pause");
	return 0;
}