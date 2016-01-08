class Singleton {
public:
	static Singleton *getInstance();
private:
	Singleton() {}
	static Singleton* instance;
};

Singleton* Singleton::instance = 0;
Singleton* Singleton::getInstance()
{
	if (!instance) {
		instance = new Singleton();
		cout << "getInstance(): New instance\n";
	}
	else {
		cout << "getInstance(): Existing instance\n";
	}
	
	return instance;
}
