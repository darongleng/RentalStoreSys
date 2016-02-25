#include <string>

namespace css343_group4 {

	class Movie {
	private:
		string title;
		string director;
		int yearOfRelease;
		int stock;

	public:
		virtual void setTitle(std::string newTitle);
		virtual void setDirector(std::string newDirector);
		virtual void setYearOfRelease(int yearOfRelease);
		virtual void setStock(int stock);

		string getTitle() const;
		string getDirector() const;
		virtual int getYearOfRealse() const;
		virtual int getstock() const;

		void decrement();
		void increment();

		virtual void print() const;
		virtual int compareTo(const Movie& otherMovie) const;

		virtual Movie buildMovie(std::ifstream & data);
	};

}
