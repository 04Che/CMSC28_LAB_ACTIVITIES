#include <vector>
#include <string>
#include "Person.h"

class Movie {
private:
    std::string M_title;
    std::string M_synopsis;
    std::string M_mpaaRating;
    std::vector<std::string> M_genres;
    std::vector<Person> M_directors;
    std::vector<Person> M_actors_actress;

public:
    void setTitle(const std::string& t) { M_title = t; }
    void setSynopsis(const std::string& s) { M_synopsis = s; }
    void setMpaaRating(const std::string& r) { M_mpaaRating = r; }
    void addGenre(const std::string& genre) { M_genres.push_back(genre); }
    void addDirector(const Person& director) { M_directors.push_back(director); }
    void addActor(const Person& actor) { M_actors_actress.push_back(actor); }

    std::string getTitle() const { return M_title; }
    std::string getSynopsis() const { return M_synopsis; }
    std::string getMpaaRating() const { return M_mpaaRating; }
    std::vector<std::string> getGenres() const { return M_genres; }
    std::vector<Person> getDirectors() const { return M_directors; }
    std::vector<Person> getActors() const { return M_actors_actress; }
};

