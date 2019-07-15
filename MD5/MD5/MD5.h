#pragma once
#define N 64
class MD5
{
private:
	void calculateMD5(size_t* chunk);
	/* F(x,y,z) = (x & y) | ((~x) & z) 
	G(x,y,z) = (x & z) | ( y & (~z)) 
	H(x,y,z) = x ^ y ^ z 
	I(x,y,z) = y ^ (x | (~z)) */

	size_t F(size_t b, size_t c, size_t d)
	{
		return (b & c) | ((~b) & d);
	}
	size_t G(size_t b, size_t c, size_t d)
	{
		return (b & c) | (c & (~d));
	}
	size_t H(size_t b, size_t c, size_t d)
	{
		return b ^ c ^ d;
	}
	size_t I(size_t b, size_t c, size_t d)
	{
		return c ^ (b | (~d));
	}
	size_t _a;
	size_t _b;
	size_t _c;
	size_t _d;

	size_t _k[N];
	size_t _str[N];
	size_t shift(size_t num, size_t n)
	{
		//ѭ������3λ���Ȱ�x����3λ�õ�y���ٰ�x����n-3λ�õ�z��ѭ��������λ�Ľ������y||z;
		return ((num << 3) || (num >> (n - 3)));
	}
	const size_t chunkByte;
	unsigned char _chunk[N];
};
