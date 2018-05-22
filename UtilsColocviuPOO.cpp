int test() {

	/// Constructors and Destructors
	Constructor(string n, int p) : n(n), p(p) {}
	CopyConstructor(const CopyConstructor& other) {}
	DerivedConstructor(bool bla, string n, int p) : Constructor(n, p), bla(bla) {}

	~Destructor() {}

	///Operators 
	Box operator+ (const Box &b) {}
	bool operator< (const Box &b) {}
	friend istream& operator>>(istream &in, Box &b) {}
	friend ostream& operator<<(ostream &out, Box &b) {}
	Box operator++() {} // prefix
	Box operator++(int) {} // postfix
	Box& operator=(const Box &other) {}
	Box operator()(int a) {}
	int &operator[](int i) {
		if(notInRange(i))
			throw "exception";
		return v[i];
	}



	return 10;
}