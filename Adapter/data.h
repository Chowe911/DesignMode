#include <iostream>
#include <string>
using namespace std;

class DataOperation
{
private:
    string password;
	
public:
    void setPassword(string password)
	{
		this->password=password;
	}
		
	string getPassword()
	{
		return this->password;
	}
	
	virtual string doEncrypt(int key,string ps) = 0;
};

class NewCipher
{
public:
    string doEncrypt(int key,string ps)
	{ 
		string es="";
		for(int i=0;i<ps.length();i++)
		{
			string c=string.valueOf(ps.charAt(i)%key);
			es+=c;
		}
		return es;
	}
};

class NewCipherAdapter : public DataOperation
{
private:
    NewCipher cipher;
	
public:
    NewCipherAdapter()
	{
		cipher=new NewCipher();
	}
	
	string doEncrypt(int key,string ps)
	{
		return cipher.doEncrypt(key,ps);
	}
};

class Caesar 
{
public:
    string doEncrypt(int key,string ps)
	{   
		string es="";
		for(int i=0;i<ps.length();i++)
		{
			char c=ps.charAt(i);
			if(c>='a'&&c<='z')
			{
				c+=key%26;
			if(c>'z') c-=26;
			if(c<'a') c+=26;
			}
			if(c>='A'&&c<='Z')
			{
				c+=key%26;
			if(c>'Z') c-=26;
			if(c<'A') c+=26;
			}
			es+=c;
		}
		return es;
	}
};

class CipherAdapter : public DataOperation
{
private:
    Caesar cipher;
	
public:
    CipherAdapter()
	{
		cipher=new Caesar();
	}
	
	string doEncrypt(int key,string ps)
	{
		return cipher.doEncrypt(key,ps);
	}
};


