#include <string>

class Movie {
private:
	string title;
	string director;
	int yearOfRelease;
	int stock;
public:
	virtual void setTitle(string newTitle);
	virtual void setDirector(string newDirector);
	virtual void setYearOfRelease(int yearOfRelease);
	virtual void setStock(int stock);

	virtual int title() const;
	virtual int director() const;
	virtual int getYearOfRealse() const;
	virtual int getstock() const;
};
