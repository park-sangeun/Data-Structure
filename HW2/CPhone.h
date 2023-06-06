#include<string>
using namespace std;

class CPhone
{
public:
	CPhone();
	CPhone(int birthday, string strName);
private:
	int m_birthday;
	string m_strName;
	int nSum;
	int nIndex;
};

