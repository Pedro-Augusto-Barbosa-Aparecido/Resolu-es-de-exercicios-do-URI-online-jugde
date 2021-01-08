#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int z = 97, y = 0;
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, l = 0;
	int m = 0, n = 0, o = 0, p = 0, q = 0, r = 0, s = 0, t = 0, u = 0, v = 0, w = 0, x = 0;

	a = z + 1;
	b = a + 1;
	c = b + 1;
	d = c + 1;
	e = d + 1;
	f = e + 1;
	g = f + 1;
	h = g + 1;
	i = h + 1;
	j = i + 1;
	k = j + 1;
	l = k + 1;
	m = l + 1;
	n = m + 1;
	o = n + 1;
	p = o + 1;
	q = p + 1;
	r = q + 1;
	s = r + 1;
	t = s + 1;
	u = t + 1;
	v = u + 1;
	w = v + 1;
	x = w + 1;
	y = x + 1;
	int val[26] =  { z,  a,  b,  c,  d,  e,  f,  g,  h,  i,  j,  k,  l,  m,  n,  o,  p,  q,  r,  s,  t,  u,  v,  w,  x, y};
	char alf[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	
	for(int i = 0; i < 26; i++){
		cout << val[i] << " " << "e" << " " << alf[i] << "\n";
	}				
					
	return 0;
}