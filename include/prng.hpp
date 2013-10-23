#ifndef PRNG_HPP
#define PRNG_HPP

#include <cryptopp/osrng.h>
/**
 * Wrapper class for cryptopp/osrng.h
 */
class Prng
{
	public:
		Prng();
		~Prng();
		/**
		 * Generates random characters.
		 * @param[in,out] data generated random characters will be stored in this
		 * @param[in] length number of generated characters
		 * @pre \p data is allocated for at least \p length characters
		 * @pre length > 0
		 * @post \p data contains random characters
		 */
		void generate(char* data, unsigned int length);
	protected:
		CryptoPP::AutoSeededRandomPool* prng;
	private:
};

#endif
