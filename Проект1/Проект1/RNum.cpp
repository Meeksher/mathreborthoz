#include "RNum.h"

// Выводит дробь в виде `a/b`
ostream& operator<<(ostream& os, RNum& ex) 
{
	if (ex.den.len() == 1 && ex.den.digits[0] == 1)
		os << ex.num;
	else
		os << ex.num << '/' << ex.den;
    return os;
}

// Считывает дробь вида `a/b`
istream& operator>>(istream& is, RNum& ex)
{
    string s;
    string s1, s2;
    getline(is, s);
    int n = s.find('/', 0);
    s1 = s.substr(0, n);
    s2 = (n != -1 ? s.substr(n + 1, s.length() - n) : "1");
    ex.num.nPart.setDigits(s1);
    ex.den.setDigits(s2);
    return is;
}
/*RNum RED_Q_Q(RNum& numb) // функция сокращения дробей ABS_Z_N GCF_NN_N DIV_ZZ_Z DIV_NN_N
{
	LNum NOD = GCF_NN_N(ABS_Z_N(numb.num), numb.den);
	RNum shortNum;
	shortNum.den = DIV_NN_N(numb.den, NOD);
	shortNum.num = DIV_ZZ_Z(numb.num, NOD);
	return shortNum;
}*/

//Q-2
bool INT_Q_B(RNum const& num) {
	return num.den.digits == vector<int>({ 1 });
}

//Q-3
RNum TRANS_Z_Q(ILNum const& num) {
	return{ num, { vector<int>({ 1 }) } };
}

//Q-4
ILNum TRANS_Q_Z(RNum const& num) {
	return num.num;
}

/*
//Q-5
RNum ADD_QQ_Q(RNum& a, RNum& b) //сложение дробей LCM_NN_N MUL_ZZ_Z ADD_ZZ_Z
{
	LNum numb1_2 = DIV_NN_N(LCM_NN_N(a.den, b.den), a.den);
	LNum numb2_2 = DIV_NN_N(LCM_NN_N(a.den, b.den), b.den);
	return {{ADD_ZZ_Z(MUL_ZZ_Z(a.num, numb1_2), MUL_ZZ_Z(b.num, numb1_2))},{LCM_NN_N(a.den, b.den)}};
}
*/
/*
//Q-6
RNum SUB_QQ_Q(RNum& a, RNum& b) //вычитание дробей LCM_NN_N MUL_ZZ_Z SUB_ZZ_Z 
{
	return {{false,{ vector<int>({ 0 }) }},{ vector<int>({ 1 }) }};
}
*/
/*
//Q-8
RNum DIV_QQ_Q(RNum& a, RNum& b) // функция деления дробей MUL_ZZ_Z MUL_NN_N
{
return RED_Q_Q( { {a.num.minus^b.num.minus, {MUL_NN_N(a.num.nPart, b.den)} } , {MUL_NN_N(a.den, b.num.nPart)} });
}
*/