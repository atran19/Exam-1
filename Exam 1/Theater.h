//I attest that all the code given below was solely written by me, Anna Tran, 
//that any help I recieved adhered to the rules of the exam.

#ifndef Theater_h
#define Theater_h
#include<string>

class Theater
{
private:
	int Popcorn;
	int Coke;

public:
	Theater::Theater(std::string Name, std::string Phone)
	{

	}
	void AddMovie(Movie& Movie);
	std::string GetMovieForHour(int Hour);
	int GetShowTimeForGenre(std::string Genre);
	int GetPopcornPrice();
	int GetCokePrice();


};
#endif