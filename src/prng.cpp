#include "prng.hpp"

Prng::Prng()
{
	this->prng = new CryptoPP::AutoSeededRandomPool();
}

Prng::~Prng()
{
	delete this->prng;
	this->prng = NULL;
}

void Prng::generate(char* data, unsigned int length)
{
	this->prng->GenerateBlock((byte*)data, length);
}
