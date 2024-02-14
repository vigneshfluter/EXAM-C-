#include <iostream>
using namespace std;

class Movie {
public:
    string title;
    string genre;
    int releasedYear;

    Movie(string t, string g, int y) : title(t), genre(g), releasedYear(y) {}
};

int main() {
  
    Movie movies[3] = {
        Movie("MOVIE :- 1 ", "Genretion 1", 2000),
        Movie("MOVIE :- 2 ", "Genretion 2", 2005),
        Movie("MOVIE :- 3 ", "Genretion 3", 2010)
    };

   for (int i = 1; i < 3; i++) {
        cout << "Movie " << i << endl;
        cout << "Title: " << movies[i].title << endl;
        cout << "Genre: " << movies[i].genre << endl;
        cout << "Released Year: " << movies[i].releasedYear << endl;
    }

    return 0;
}
