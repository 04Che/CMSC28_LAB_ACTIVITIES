#include <iostream>
#include "Movie.h"

int main() {
    Movie m;
    std::string P_input, P_firstName, P_lastName, P_gender;
    int M_Genres, P_Directors, P_Actors;

    std::cout << "\nThis program was designed to display the Movie Informations which includes the directors and actors.\n";
    std::cout << "Programmed by: Chello G. Serion\n";

    std::cout << "Enter Movie Title: ";
    getline(std::cin, P_input);
    m.setTitle(P_input);

    std::cout << "Enter Synopsis: ";
    getline(std::cin, P_input);
    m.setSynopsis(P_input);

    std::cout << "Enter MPAA Rating: ";
    getline(std::cin, P_input);
    m.setMpaaRating(P_input);

    std::cout << "How many genres? ";
    std::cin >> M_Genres;
    std::cin.ignore();
    for (int i = 0; i < M_Genres; ++i) {
        std::cout << "Enter Genre " << i + 1 << ": ";
        getline(std::cin, P_input);
        m.addGenre(P_input);
    }

    std::cout << "How many directors? ";
    std::cin >> P_Directors;
    std::cin.ignore();
    for (int i = 0; i < P_Directors; ++i) {
        std::cout << "Enter Director " << i + 1 << " First Name: ";
        getline(std::cin, P_firstName);
        std::cout << "Enter Director " << i + 1 << " Last Name: ";
        getline(std::cin, P_lastName);
        std::cout << "Enter Director " << i + 1 << " Gender: ";
        getline(std::cin, P_gender);
        m.addDirector(Person(P_firstName, P_lastName, P_gender));
    }

    std::cout << "How many actors? ";
    std::cin >> P_Actors;
    std::cin.ignore();
    for (int i = 0; i < P_Actors; ++i) {
        std::cout << "Enter Actor " << i + 1 << " First Name: ";
        getline(std::cin, P_firstName);
        std::cout << "Enter Actor " << i + 1 << " Last Name: ";
        getline(std::cin, P_lastName);
        std::cout << "Enter Actor " << i + 1 << " Gender: ";
        getline(std::cin, P_gender);
        m.addActor(Person(P_firstName, P_lastName, P_gender));
    }

    std::cout << "\nMovie Details:\n";
    std::cout << "The Title for the movie is: " << m.getTitle() << std::endl;
    std::cout << "The Synopsis of the movie is: " << m.getSynopsis() << std::endl;
    std::cout << "The MPAA Rating of the movie: " << m.getMpaaRating() << std::endl;
    std::cout << "Genre/s of the movie: ";
    for (const auto& genre : m.getGenres()) {
        std::cout << genre << " ";
    }
    std::cout << "\n The Director/s of the movie:\n";
    for (const auto& director : m.getDirectors()) {
        std::cout << director.getFirstName() << " " << director.getLastName() << " (" << director.getGender() << ")\n";
    }
    std::cout << "Actors for the movie:\n";
    for (const auto& actor : m.getActors()) {
        std::cout << actor.getFirstName() << " " << actor.getLastName() << " (" << actor.getGender() << ")\n";
    }

    return 0;
}
