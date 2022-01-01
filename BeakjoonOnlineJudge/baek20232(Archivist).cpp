#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
	map<int, string> m;
	m[1995] = "ITMO";
	m[1996] = "SPbSU";
	m[1997] = "SPbSU";
	m[1998] = "ITMO";
	m[1999] = "ITMO";
	m[2000] = "SPbSU";
	m[2001] = "ITMO";
	m[2002] = "ITMO";
	m[2003] = "ITMO";
	m[2004] = "ITMO";
	m[2005] = "ITMO";
	m[2006] = "PetrSU, ITMO";
	m[2007] = "SPbSU";
	m[2008] = "SPbSU";
	m[2009] = "ITMO";
	m[2010] = "ITMO";
	m[2011] = "ITMO";
	m[2012] = "ITMO";
	m[2013] = "SPbSU";
	m[2014] = "ITMO";
	m[2015] = "ITMO";
	m[2016] = "ITMO";
	m[2017] = "ITMO";
	m[2018] = "SPbSU";
	m[2019] = "ITMO";
	int n; cin >> n;
	cout << m[n];
	return 0;
}