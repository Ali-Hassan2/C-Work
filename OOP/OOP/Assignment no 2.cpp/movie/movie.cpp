#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Movie {
    public:
    string title;
    string genre;
    int duration;

public:
    Movie() : duration(0) {}

    Movie(string title, string genre, int duration) {
        this->title = title;
        this->genre = genre;
        this->duration = duration;
    }

    string getTitle() const { return title; }
    string getGenre() const { return genre; }
    int getDuration() const { return duration; }

    void displayDetails() const {
        cout << "Movie Title: " << title << endl;
        cout << "Genre: " << genre << endl;
        cout << "Duration: " << duration << " minutes" << endl;
    }

    static Movie createMovieFromInput() {
        string title, genre;
        int duration;

        cin.ignore();
        cout << "Enter the movie title: ";
        getline(cin, title);

        cout << "Enter the movie genre: ";
        getline(cin, genre);

        cout << "Enter the movie duration in minutes: ";
        cin >> duration;

        cin.ignore();
        return Movie(title, genre, duration);
    }
};

class Theater {
private:
    string name;
    string location;

public:
    Theater() {}

    Theater(string name, string location) {
        this->name = name;
        this->location = location;
    }

    string getName() const { return name; }
    string getLocation() const { return location; }

    void displayDetails() {
        cout << "Theater Name: " << name << endl;
        cout << "Location: " << location << endl;
    }

    static Theater createTheaterFromInput() {
        string name, location;

        cin.ignore();
        cout << "Enter the theater name: ";
        getline(cin, name);

        cout << "Enter the theater location: ";
        getline(cin, location);

        return Theater(name, location);
    }
};

class Show {
private:
    Movie movie;
    Theater theater;
    string date;
    string time;

public:
    Show() {}

    Show(const Movie& movie, const Theater& theater, string date, string time) {
        this->movie = movie;
        this->theater = theater;
        this->date = date;
        this->time = time;
    }

    Movie getMovie() const { return movie; }
    Theater getTheater() const { return theater; }
    string getDate() const { return date; }
    string getTime() const { return time; }

    void displayDetails() {
        cout << "Movie Details: " << endl;
        movie.displayDetails();

        cout << "Theater Details: " << endl;
        theater.displayDetails();

        cout << "Show Date: " << date << endl;
        cout << "Show Time: " << time << endl;
    }

    static Show createShowFromInput() {
        Movie movie = Movie::createMovieFromInput();
        Theater theater = Theater::createTheaterFromInput();
        string date, time;

        cout << "Enter the show date (YYYY-MM-DD): ";
        cin >> date;

        cin.ignore();
        cout << "Enter the show time (HH:MM AM/PM): ";
        getline(cin, time);

        return Show(movie, theater, date, time);
    }
};

class User {
private:
    string name;
    string email;

public:
    User() {}

    User(string name, string email) {
        this->name = name;
        this->email = email;
    }

    string getName() const { return name; }
    string getEmail() const { return email; }

    void displayDetails() {
        cout << "User Name: " << name << endl;
        cout << "Email: " << email << endl;
    }

    static User createUserFromInput() {
        string name, email;

        cin.ignore();
        cout << "Enter the user name: ";
        getline(cin, name);

        cout << "Enter the user email: ";
        getline(cin, email);

        return User(name, email);
    }
};

class Seat {
private:
    int totalSeats;
    int availableSeats;

public:
    Seat() : totalSeats(0), availableSeats(0) {}

    Seat(int totalSeats, int availableSeats) {
        this->totalSeats = totalSeats;
        this->availableSeats = availableSeats;
    }

    int getTotalSeats() const { return totalSeats; }
    int getAvailableSeats() const { return availableSeats; }

    void displayDetails() {
        cout << "Total Seats: " << totalSeats << endl;
        cout << "Available Seats: " << availableSeats << endl;
    }
};

class Ticket {
private:
    int ticketID;
    Show show;
    Seat seat;
    double price;

public:
    Ticket() : ticketID(0), price(0.0) {}

    Ticket(int ticketID, const Show& show, const Seat& seat, double price) {
        this->ticketID = ticketID;
        this->show = show;
        this->seat = seat;
        this->price = price;
    }

    int getTicketID() const { return ticketID; }
    Show getShow() const { return show; }
    Seat getSeat() const { return seat; }
    double getPrice() const { return price; }

    void displayDetails() {
        cout << "Ticket ID: " << ticketID << endl;
        cout << "Show Details: " << endl;
        show.displayDetails();
        cout << "Seat Details: " << endl;
        seat.displayDetails();
        cout << "Price: $" << price << endl;
    }

    static Ticket createTicketFromInput(int ticketID) {
        Show show = Show::createShowFromInput();
        int totalSeats, availableSeats;
        double price;

        cout << "Enter the total number of seats: ";
        cin >> totalSeats;

        cout << "Enter the number of available seats: ";
        cin >> availableSeats;

        cout << "Enter the ticket price: $";
        cin >> price;

        return Ticket(ticketID, show, Seat(totalSeats, availableSeats), price);
    }
};

class Booking {
private:
    User user;
    Ticket ticket;

public:
    Booking() {}

    Booking(const User& user, const Ticket& ticket) {
        this->user = user;
        this->ticket = ticket;
    }

    User getUser() const { return user; }
    Ticket getTicket() const { return ticket; }

    void displayDetails() {
        cout << "User Details: " << endl;
        user.displayDetails();

        cout << "Ticket Details: " << endl;
        ticket.displayDetails();
    }

    static Booking createBookingFromInput(int ticketID) {
        User user = User::createUserFromInput();
        Ticket ticket = Ticket::createTicketFromInput(ticketID);

        return Booking(user, ticket);
    }
};

class MovieCollection {
public:
    Movie ss;
    vector<Movie> movies;
     
public:
    void addMovie(const Movie& movie) {
        movies.push_back(movie);
    }

    void displayAllMovies() {
        cout << "===== All Movies =====" << endl;
        for (const auto& movie : movies) {
            movie.displayDetails();
            cout << "-----------------------" << endl;
        }
    }
};

class FileHandler {
public:
    static void writeMoviesToFile(const MovieCollection& movieCollection, const string& filename) {
        ofstream file(filename);

        if (file.is_open()) {
            for (const auto& movie : movieCollection.movies) {
                file << "Movie," << movie.getTitle() << "," << movie.getGenre() << "," << movie.getDuration() << "\n";
            }

            file.close();
            cout << "Movies data written to the file successfully." << endl;
        }
        else {
            cout << "Error: Unable to open the file for writing." << endl;
        }
    }

    static void readMoviesFromFile(MovieCollection& movieCollection, const string& filename) {
        ifstream file(filename);

        if (file.is_open()) {
            string line;
            while (getline(file, line)) {
                stringstream ss(line);
                string type, title, genre;
                int duration;

                getline(ss, type, ',');
                getline(ss, title, ',');
                getline(ss, genre, ',');
                ss >> duration;

                if (type == "Movie") {
                    Movie movie(title, genre, duration);
                    movieCollection.addMovie(movie);
                }
            }

            file.close();
            cout << "Movies data read from the file successfully." << endl;
        }
        else {
            cout << "Error: Unable to open the file for reading." << endl;
        }
    }
};

void movieSubmenu(MovieCollection& movieCollection) {
    while (true) {
        cout << "===== Movie Submenu =====" << endl;
        cout << "1. Add a New Movie" << endl;
        cout << "2. List All Movies" << endl;
        cout << "3. Save Movies to File" << endl;
        cout << "4. Load Movies from File" << endl;
        cout << "0. Go Back" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        cout << endl;

        switch (choice) {
        case 1: {
            Movie movie = Movie::createMovieFromInput();
            movieCollection.addMovie(movie);
            cout << "Movie added successfully!" << endl;
            break;
        }
        case 2:
            movieCollection.displayAllMovies();
            break;
        case 3: {
            string filename;
            cout << "Enter the filename to save movies: ";
            cin >> filename;

            FileHandler::writeMoviesToFile(movieCollection, filename);
            break;
        }
        case 4: {
            string filename;
            cout << "Enter the filename to load movies from: ";
            cin >> filename;

            FileHandler::readMoviesFromFile(movieCollection, filename);
            break;
        }
        case 0:
            return;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;
    }
}

void mainMenu(MovieCollection& movieCollection) {
    while (true) {
        cout << "===== Main Menu =====" << endl;
        cout << "1. Movie" << endl;
        cout << "2. Theater" << endl;
        cout << "3. Show" << endl;
        cout << "4. User" << endl;
        cout << "5. Seat" << endl;
        cout << "6. Booking" << endl;
        cout << "0. Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        cout << endl;

        switch (choice) {
        case 1:
            movieSubmenu(movieCollection);
            break;
            // Similar cases for other classes (Theater, Show, User, Seat, Booking)...

            // ...

        case 0:
            cout << "Exiting the program. Goodbye!" << endl;
            return;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;
    }
}

int main() {
    MovieCollection movieCollection;
    mainMenu(movieCollection);

    return 0;
}