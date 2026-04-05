// Knihovny
#include <iostream> // Pro C++
#include <stdlib.h>
#include <ctime>

using std::string;


class Admin{ // 1
private:
    int id_admin;
    string name;
    string email;
    string password;
    // ACCESS
    Teacher* accessTeacher;
    User* accessUser;

public:
    Admin(int id, string n, string e ,string p);
    ~Admin();

    void accessUser();
    void accessTeacher();
    void decideOnDevelopment();
    void accesssCourses();
    void arrangePromotion();
};


class Teacher{ // 2
private:
    int id_teacher;
    string name;
    string email;
    string bio;
    string password;
    Course* access;
    Comunication* chat;

public:
    Teacher(int id, string n, string e, string p, string b);
    ~Teacher();

    void createCourse();
    void manageCourse();
    void comunicateWithStudent();
    void reportUser();
};


class UserStatus{ // 3
private:
    int status;

public:
    UserStatus(int s);
    ~UserStatus();
    string getStatus();
    void setStatus();
};


class User{ // 4
private:
    int id_user;
    string name;
    string email;
    string password;
    UserStatus* userStatus;
    Course* accessCourse;
    Comunication* chat;

public:
    User(int id, string n, string e, string p);
    ~User();

    void changeStatus(UserStatus newStatus);
    void restoreAccount();
    void comunicateWithTeacher();
    void courseAccess();
};


class Course{ // 5
private:
    int id_course;
    string name;
    string description;
    bool isPublic;
    float price;

public:
    Course(int id, string n, string des, bool stat, float pr);
    ~Course();

    void edit(string newName, string newDescription, float newPrice);
    void deleteSelf();
    void removeFromPublicList();
    void publish(bool stat);
};


class Backup{ // 6
private:
    time_t timestamp;
    string backupContent;

public:
    Backup(time_t t, string bc);
    ~Backup();
    
    void createNewBackup();
    void restFromBackup();
};


class SystemLog{ // 7
private:
    int id_log;
    time_t timestamp;
    string message;

public:
    SystemLog(int id, time_t t, string ms);
    ~SystemLog();

    void writeToLog(string m);
    string getLog();
};


class Lesson{ // 8
private:
    int id_lesson;
    time_t scheduledTime;
    static int durationMin;
    bool isActive;
    User* users;
    Teacher* teacher;

public:
    Lesson(int id, time_t sT, int dur);
    ~Lesson();

    void startLeson();
    void endLeson();
    void muteUser(int userId);
    void shareScreen();
    void sendNotification();
};


class Comunication{ // 9
private:
    Message* message;
    Teacher* teacher;
    User* user;

public:
    Comunication(Teacher* t, User* u);
    ~Comunication();
    void chat();
};


class Message{ // 10
private:
    int id_message;
    string content;
    time_t sentAt;
    bool isRead;

public:
    Message(int id, string c);
    ~Message();

    bool send(); // bool protože zpráva nemusela být úspěšně odeslána
    void markAsRead();
};
















// Hlavní funkce
/*
int main(){

  return 0;
}*/