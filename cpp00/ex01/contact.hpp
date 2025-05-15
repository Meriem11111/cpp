
#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <iomanip>
#include <cctype>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[92m"
#define YELLOW  "\033[33m"
#define MAGE    "\033[95m"
#define MAGENTA "\033[35m"
#define GRAY "\033[1;30m"
#define BLUE     "\033[94m"

class contact {
    private:
        std::string FirstName;
        std::string LastName;
        std::string Nickname;
        std::string PhoneNumber;
        std::string DarkestSecret;
    public :
    contact();
    ~contact();
    void set_FirstName(std::string &firstname);
    void set_LastName(std::string &lastname);
    void set_Nickname(std::string &nickname);
    void set_DarkestSecret(std::string &darkestSecret);
    void set_PhoneNumber(std::string &phoneNumber);

    std::string getFirst_name() const;
    std::string getLast_name() const;
    std::string getNick_name() const;
    std::string getPhone_num() const;
    std::string getDarck_secret() const;
    
};

# endif