#include<iostream>
#include<cstring>
#include "Movie.h"
#include "Theater.h"
using namespace std;


//Return movie title
string Movie::GetTitle()
{
	return MovieName;
}
//Return genre
string Movie::GetGenre()
{
	return GenreName;
}
//show times on the 24 hour schedule 
int Movie::GetShowTime()
{
	if (time <= 0 || time >= 24)
		return time;
}
//Add movie for specific time
void Theater::AddMovie(Movie& Movie)
{
	std::string Title = "Ghostbusters";
	int ShowTime = 8;
}
//search through array given in int main() for correlated info
string Theater::GetMovieForHour(int Hour)
{
//movie name goes into new string 
	string MovieName = string::[n];
//search string for hour that matches n which is movie
	for (int i = n; i++)
	{
		if (Hour = [i])
			return MovieName;
		else
			return " ";
	}
}
int Theater::GetShowTimeForGenre(std::string Genre)
{	
	string Genre = string::[o];
{
	for (int j = o; j++)
		if (Genre = [j])
			return time;
		else
			return -1;

}
//popcorn price
int Theater::GetPopcornPrice()
{
	Popcorn = 2;
}
int Theater::GetCokePrice()
{
	Coke = 1;
}
int main()
{
	const int MOVIECOUNT = 11;
	Movie movieListing[] = {
		Movie("Bull Durham", "Comedy", 0), Movie("Ocean's Eleven", "Action", 2),
		Movie("Monte Python's Meaning of Life", "Comedy", 5), Movie("Jaws", "Horror", 7),
		Movie("Fletch", "Comedy", 10), Movie("Usual Suspects", "Action", 12),
		Movie("Bull Durham", "Comedy", 14), Movie("Ocean's Eleven", "Action", 16),
		Movie("Monte Python's Meaning of Life", "Comedy", 19), Movie("Jaws", "Horror", 21),
		Movie("Usual Suspects", "Action", 23),
	};
	Theater garland("The Garland", "509-327-2509");
	for (int m = 0; m < MOVIECOUNT; m++) {
		garland.AddMovie(movieListing[m]);
	}
	int errors = 0;
	if (garland.GetMovieForHour(-1) != "") {
		errors++;
		cout << "error: not handling -1 correctly\n";
	}
	if (garland.GetMovieForHour(25) != "") {
		errors++;
		cout << "error: not handling 25 correctly\n";
	}
	if (garland.GetMovieForHour(19) != "Monte Python's Meaning of Life") {
		errors++;
		cout << "error: incorrect movie for 18th hour\n";
	}
	if (garland.GetShowTimeForGenre("Comedy") != 0) {
		errors++;
		cout << "error: incorrect Comedy\n";
	}
	if (errors == 0) cout << "Passed\n";
	else cout << "Errors: " << errors << endl;
}
