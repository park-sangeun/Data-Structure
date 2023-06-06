#include "CPhone.h"

CPhone::CPhone() {
	m_birthday = 20230504;
	m_strName = "sangeun";
}

CPhone::CPhone(int birthday, string strName) {
	m_birthday = birthday;
	m_strName = strName;
}