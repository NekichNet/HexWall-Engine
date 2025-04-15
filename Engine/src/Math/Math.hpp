namespace engine_math {
	inline int pow(int value, unsigned short power) {
		int result = 1;
		for (unsigned short i = 0u; i < power; i++) {
			result *= value;
		}
		return result;
	}
}