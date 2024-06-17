#include <iostream>

using namespace std;

class Movie {
private:
    string rating;

public:
    string title;
    string director;

    Movie(string aTitle, string aDirector, string aRating) {
        title = aTitle;
        director = aDirector;
        setRaiting(aRating);
    }

    void setRaiting(string aRating) {
        if (
            aRating == "G" ||
            aRating == "PG" ||
            aRating == "PG-13" ||
            aRating == "R" ||
            aRating == "NR"
        ) {
            rating = aRating;
        }else {
            rating = "NR";
        }

    }
    string getRaiting() {
        return rating;
    }
};


int main() {
    Movie aboutTime("About Time", "Richard Curtis", "R");
    cout << aboutTime.title;
    return 0;
}
