
#ifndef Movie_h
#define Movie_h
#include<iostream>
#include<string>

class Movie
{
//private because names need to be returned and unalterable in source
private:
	std::string MovieName;
	std::string GenreName;
	int time;

public:
	
	std::string film;
	std::string type;
	//Set defaults
	Movie()
	{
		film = "Bull Durham";
		type = "comedy";

	}
	
	Movie::Movie(std::string Title, std::string Genre, int ShowTime)
	{

	}
	std::string GetTitle();
	std::string GetGenre();
	int GetShowTime();


};
#endif
