class Singleton {
public:
	static Singleton* getInstance() {
		if (!instance) {
			instance = new Singleton();
			cout << "getInstance(): New instance\n";
		}
		else {
			cout << "getInstance(): Existing instance\n";
		}
		
		return instance;
	}
private:
	Singleton() {}
	static Singleton* instance;
};

Singleton* Singleton::instance = 0;
